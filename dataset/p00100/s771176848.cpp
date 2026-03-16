#include<iostream>
#include<queue>
using namespace std;

int main()
{
	while (true){
		int n;
		cin >> n;
		if (!n){ break; }

		long long int sold[4001];
		bool already[4001];
		queue<int> input;
		for (int i = 1; i <= 4000; i++){
			sold[i] = 0;
			already[i] = false;
		}
		for (int i = 0; i < n; i++){
			int number, yen, times;
			cin >> number >> yen >> times;
			if (already[number] == false){
				already[number] = true;
				input.push(number);
			}
			sold[number] += (long long int)yen * (long long int)times;
		}
		bool f = false;
		while (!input.empty()){
			if (sold[input.front()] >= 1000000){
				cout << input.front() << endl;
				f = true;
			}
			input.pop();
		}
		if (f == false){
			cout << "NA" << endl;
		}
	}
	return 0;
}