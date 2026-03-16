#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int pow(int number, int count) {
	if (count == 0 )
		return 1;
	return number * pow(number, count - 1);
}

int main(int argc, char *argv[]) {
	const int WeightNumber = 10;
	int weight[WeightNumber];
	// Make Weight
	for (int i = 0; i < 10; i++) {
		weight[i] = pow(2, i);
	}
	// Load
	int rcv;
	while (EOF != fscanf(stdin, "%d", &rcv)) {
		vector<int> answer;
		// Find Heaviest Weight
		int max_weight_ar_number;
		for (int i = 0; i < WeightNumber; i++) {
			if (weight[i] > rcv) {
				max_weight_ar_number = i;
				break;
			}
		}
		// Get Weight
		for (int i = max_weight_ar_number; i >= 0; i--) {
			if (rcv >= weight[i]) {
				rcv -= weight[i];
				answer.push_back(weight[i]);
			}
			if (rcv == 0) {
				break;
			}
		}
		// Print Result
		sort(answer.begin(), answer.end());
		const int loop_max = static_cast<int>(answer.size());
		for (int i = 0; i < loop_max ; i++) {
			if (i == loop_max - 1)
				printf("%d\n", answer[i]);
			else
				printf("%d ", answer[i]);
		}
	}
	
	return 0;
}