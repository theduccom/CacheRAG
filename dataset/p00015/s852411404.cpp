#include <cstdio>
#include <map>
using namespace std;

int get_length(char *data) {
	for (int i = 0;; i++) {
		if (data[i] == '\0') {
			return i;
		}
	}
	return 0;
}

bool is_more_ten(char *d) {
	if (d[0] == 'X' || d[0] == 'A' || d[0] == 'B' || d[0] == 'C' ||
		d[0] == 'D' || d[0] == 'E' || d[0] == 'F' || d[0] == 'G' ||
		d[0] == 'H' || d[0] == 'I') {
		return true;
	}
	return false;
}

void shift(char *data, int length) {
	for (int i = length; i != -1; i--) {
		data[i+1] = data[i];
	}
}

int main(int argc, char *argv[]) {
	int dataN;
	
	map<char, int> chr2int;
	chr2int.insert(map<char, int>::value_type('0',0));
	chr2int.insert(map<char, int>::value_type('1',1));
	chr2int.insert(map<char, int>::value_type('2',2));
	chr2int.insert(map<char, int>::value_type('3',3));
	chr2int.insert(map<char, int>::value_type('4',4));
	chr2int.insert(map<char, int>::value_type('5',5));
	chr2int.insert(map<char, int>::value_type('6',6));
	chr2int.insert(map<char, int>::value_type('7',7));
	chr2int.insert(map<char, int>::value_type('8',8));
	chr2int.insert(map<char, int>::value_type('9',9));
	chr2int.insert(map<char, int>::value_type('X',10));
	chr2int.insert(map<char, int>::value_type('A',11));
	chr2int.insert(map<char, int>::value_type('B',12));
	chr2int.insert(map<char, int>::value_type('C',13));
	chr2int.insert(map<char, int>::value_type('D',14));
	chr2int.insert(map<char, int>::value_type('E',15));
	chr2int.insert(map<char, int>::value_type('F',16));
	chr2int.insert(map<char, int>::value_type('G',17));
	chr2int.insert(map<char, int>::value_type('H',18));
	chr2int.insert(map<char, int>::value_type('I',19));
	
	map<char, int> end_chr2int;
	end_chr2int.insert(map<char, int>::value_type('X',0));
	end_chr2int.insert(map<char, int>::value_type('A',1));
	end_chr2int.insert(map<char, int>::value_type('B',2));
	end_chr2int.insert(map<char, int>::value_type('C',3));
	end_chr2int.insert(map<char, int>::value_type('D',4));
	end_chr2int.insert(map<char, int>::value_type('E',5));
	end_chr2int.insert(map<char, int>::value_type('F',6));
	end_chr2int.insert(map<char, int>::value_type('G',7));
	end_chr2int.insert(map<char, int>::value_type('H',8));
	end_chr2int.insert(map<char, int>::value_type('I',9));
	
	const char int2chr[] = {
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 
		'X', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'
	};
	
	fscanf(stdin, "%d", &dataN);
	for (int i = 0; i < dataN; i++) {
		char buf1[1000], buf2[1000], sum[1000];
		int buf1_cnt, buf2_cnt, longer;
		// scan
		fscanf(stdin, "%s", buf1);
		fscanf(stdin, "%s", buf2);
		buf1_cnt = get_length(buf1);
		buf2_cnt = get_length(buf2);
		// is overflow ?
		if (buf1_cnt > 80 || buf2_cnt > 80) {
			puts("overflow");
			continue;
		}
		
		if (buf1_cnt > buf2_cnt) {
			sum[buf1_cnt] = '\0';
			longer = buf1_cnt;
			int idx = buf1_cnt-1;
			int diff = buf1_cnt - buf2_cnt;
			for (int i = buf2_cnt-1; i != -1 ; i--) {
				int t_sum = chr2int[buf1[idx]] + chr2int[buf2[i]];
				if (t_sum > 9) {
					buf1[idx-1] = int2chr[chr2int[buf1[idx-1]]+1];
					t_sum %= 10;
				}
				sum[idx] = int2chr[t_sum];
				idx--;
			}
			for (int i = diff-1; i != -1; i--) {
				int t_sum = chr2int[buf1[i]];
				if (i != 0) {
					if (t_sum > 9) {
						buf1[i-1] = int2chr[chr2int[buf1[i-1]]+1];
						t_sum %= 10;
					}
				}
				sum[i] = int2chr[t_sum];
			}
		}
		else if (buf1_cnt < buf2_cnt) {
			longer = buf2_cnt;
			sum[buf2_cnt] = '\0';
			int idx = buf2_cnt-1;
			int diff = buf2_cnt - buf1_cnt;
			for (int i = buf1_cnt-1; i != -1 ; i--) {
				int t_sum = chr2int[buf2[idx]] + chr2int[buf1[i]];
				if (t_sum > 9) {
					buf2[idx-1] = int2chr[chr2int[buf2[idx-1]]+1];
					t_sum %= 10;
				}
				sum[idx] = int2chr[t_sum];
				idx--;
			}
			for (int i = diff-1; i != -1; i--) {
				int t_sum = chr2int[buf2[i]];
				if (i != 0) {
					if (t_sum > 9) {
						buf2[i-1] = int2chr[chr2int[buf2[i-1]]+1];
						t_sum %= 10;
					}
				}
				sum[i] = int2chr[t_sum];
			}
		}
		else {
			longer = buf1_cnt;
			sum[buf2_cnt] = '\0';
			int idx = buf2_cnt-1;
			int diff = buf2_cnt - buf1_cnt;
			for (int i = buf1_cnt-1; i != -1 ; i--) {
				int t_sum = chr2int[buf1[idx]] + chr2int[buf2[i]];
				if (t_sum > 9) {
					if (i != 0) {
						buf2[idx-1] = int2chr[chr2int[buf2[idx-1]]+1];
						t_sum %= 10;
					}
				}
				sum[idx] = int2chr[t_sum];
				idx--;
			}
		}
		// check most left number
		if (is_more_ten(sum)) {
			if (buf1_cnt == 80 || buf2_cnt == 80) {
				puts("overflow");
				continue;
			}
			shift(sum, longer);
			sum[0] = '1';
			sum[1] = int2chr[end_chr2int[sum[1]]];
		}
		printf("%s\n", sum);
	}
	
	return 0;
}