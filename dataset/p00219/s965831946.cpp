#include <iostream>
using namespace std;

int main()
{
	int n;
	
	while (cin >> n, n){
		int ice[10] = {0};
		int num;
		
		for (int i = 0; i < n; i++){
			cin >> num;
			ice[num]++;
		}
		
		for (int i = 0; i < 10; i++){
			if (ice[i]){
				for (int j = 0; j < ice[i]; j++){
					cout << "*";
				}
			}
			else {
				cout << "-";
			}
			cout << endl;
		}
	}
	
	return (0);
}