#!/bin/bash

# Get command line options
while getopts "d:i:t:o:beqvx" opt; do
    case "$opt" in
        d) DATA_DIR="${OPTARG%/}" ;;
        i) INPUT_DIR="${OPTARG%/}" ;;
        t) TEST_DIR="${OPTARG%/}" ;;
        o) OUT_DIR="${OPTARG%/}" ;;
        b) BENCH=true ;;
        e) ERROR=true ;;
        q) QUIET=true ;;
        v) VERBOSE=true ;;
        x) DEBUG=true ;;
    esac
done

# Check for data, input, and test directory arguments
if [[ -z "$DATA_DIR" || -z "$INPUT_DIR" || -z "$TEST_DIR" ]]; then
    echo "Usage: $0 -d <data_dir> -i <input_dir> -t <test_dir> [-o out_dir] [-b] [-e] [-q] [-v] [-x]"
    exit 1
fi

# Check if input directory is a valid directory
if [[ ! -d "$INPUT_DIR" ]]; then
    echo "Error: '$INPUT_DIR' is not a valid directory."
    exit 1
fi

# Check if test directory is a valid directory
if [[ ! -d "$TEST_DIR" ]]; then
    echo "Error: '$TEST_DIR' is not a valid directory."
    exit 1
fi

# Set directory for output files if not specified
if [[ -z "$OUT_DIR" ]]; then
    OUT_DIR="out"
fi

# Create directories if they do not exist
mkdir -p "$DATA_DIR" "$OUT_DIR"

# Redirect output to /dev/null is QUIET is set
if [[ -n "$QUIET" ]]; then
    exec >/dev/null 2>&1
fi

# Redirect output to debug file if DEBUG is set
if [[ -n "$DEBUG" ]]; then
    # Create a debug output file
    DEBUGFILE="benchmark_out.txt"
    : > "$DEBUGFILE"
    exec >"$DEBUGFILE" 2>&1
fi

# Function for info statements
info() {
    [[ -n "$VERBOSE" ]] && echo "  (I) $*"
}

# Function for warn statements
warn() {
    echo "  (W) $*"
}

# Function to compile the code
# $1: source file
# $2: output file
# $3: compilation flags
compile() {
    local out exit

    # Check if '-e' flag is set
    if [[ -n "$ERROR" ]]; then
        out=$( g++ "$3" -g "$1" -o "$2" 2>&1 )
        exit=$?
        [[ -n "$out" ]] && warn "$out"
    else
        gcc -g "$1" -o "$2" &> /dev/null
        exit=$?
    fi

    return "$exit"
}

# Header for the CSV file
CSV_HEADER="src|real|user|sys|Irefs|I1|LLi|Drefs|D1|LLd|LLrefs|LL|branch|mispred"

# Variables for benchmarking
INPUT_FILE=    # Input for each problem, set in main loop
DATA_FILE=     # Output for each problem, set in main loop
TIMEOUT=2m     # Timeout for Cachegrind
NTIMES=5       # Number of iterations for 'time'

EXTENSION="cpp"

# Function to benchmark the program using 'Cachegrind'
# $1: source program
# $2: output file
benchmark() {
    local cg_res cg_csv

    # Run the program with 'Cachegrind'
    cg_res=$( timeout "$TIMEOUT" valgrind --tool=cachegrind --cache-sim=yes --cachegrind-out-file=/dev/null "$1" < "$INPUT_FILE" 2>&1 )
    if [[ $? -eq 124 ]]; then
        warn "Cachegrind timed out"
        cg_csv="||||||||"
    else
        cg_csv=$( grep -oE "refs:.*|rate:.*|Branches:.*" <<< "$cg_res" | awk '/./ { split($2, mr, "%"); o = o (o ? "|" : "") mr[1]; } END { print o }' )
    fi

    # Debug statements
    if [[ -n "$BENCH" ]]; then
        printf "cg_res:\n%s\n" "$cg_res"
        printf "cg_csv:\n%s\n" "$cg_csv"
    fi

    echo "$2|$tm_csv|$cg_csv" >> $DATA_FILE
}

# Loop through files
for file in "$TEST_DIR"/*; do
    echo "Processing problems: $file"

    # Extract file name
    INPUT_FILE=$(basename -- "$file")

    # Create CSV file output for each problem
    DATA_FILE="$DATA_DIR/${INPUT_FILE%.*}.csv"
    echo "$CSV_HEADER" > "$DATA_FILE"

    # Create a directory in OUT_DIR for each problem
    out_dir="$OUT_DIR/${INPUT_FILE%.*}"
    mkdir -p "$out_dir"

    # Set input file to problem input in input directory
    INPUT_FILE="$INPUT_DIR/$INPUT_FILE"

    # Loop through each submission to the problem
    # Input each file through fd 3 since benchmark closes fd 1 & fd 2
    while IFS= read -r submission <&3; do
        # Skip empty lines
        [[ -z "$submission" ]] && continue

        # Verify that the submission exists
        if [[ ! -f "$submission" ]]; then
            warn "Submission not found: $submission"
            continue
        fi

        # Extract submission name and extension
        filename=$(basename -- "$submission")
        extension="${filename##*.}"

        # Verify that the file extension is correct
        if [[ "$extension" != "$EXTENSION" ]]; then
            warn "Skipping non-$EXTENSION submission: $filename"
            continue
        fi

        info "Compiling: $filename"
        program="$out_dir/${filename%.cpp}.out"

        # Run for specified levels of optimization
        for flag in O1 O2 O3; do
            # Attempt to compile the submission
            if compile "$submission" "$program" "$flag"; then
                info "Running benchmark on: ${filename%.c}.out"
                benchmark "$program" "$filename"
                info "Finished running $filename"
            else
                warn "Failed to compile submission: $filename"
            fi 
        fi
    done 3< "$file"
done

echo "Benchmark complete."


# problems sets:
# p00005
# p00008
# p00009

# use cachegrind to evaluate performance on various cachesizes
# Use RAG
# FUndamental question is: can RAG help LLMs write cache aware code
# In doing so we answer a few more questions:
# 1. Random RAG vs cosine similarity
# 2. Optimization flags O0 and O2 intel x86-64

# Here new problem statement =>
# Here new problem statement with just RAG
# Here new problem statement with RAG and CPU information

# vector database for each cache configuration
# 