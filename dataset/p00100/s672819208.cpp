#include <iostream>
#include <vector>
using namespace std;

int main() {

	while(true) {

		int n;
		cin >> n;
		if ( n == 0 ) break;

		vector<int> number;
		vector<long long int> score;

		for ( int i = 0; i < n; i++ ) {

			int input_number;
			long long int tanka;
			long long int kazu;
			cin >> input_number >> tanka >> kazu;

			for ( int j = 0; j <= number.size(); j++ ) {
				if ( j != number.size() ) {
					if ( number[j] == input_number ) {
						score[j] += tanka * kazu;
						break;
					}
				}else {
					number.push_back(input_number);
					score.push_back(tanka * kazu);
					break;
				}
			}
		}

		bool f = true;
		for ( int i = 0; i < number.size(); i++ ) {
			if ( score[i] >= 1000000 ) {
				cout << number[i] << endl;
				f = false;
			}
		}

		if ( f ) cout << "NA" << endl;

	}

	return 0;
}