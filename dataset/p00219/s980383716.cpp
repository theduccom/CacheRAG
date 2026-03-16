#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int n;
	int buy;
	int ice[10];

	while (scanf("%d", &n), n != 0){
		for (int i = 0; i < 10; i++){
			ice[i] = 0;
		}
		for (int i = 0; i < n; i++){
			scanf("%d", &buy);
			ice[buy]++;
		}

		for (int i = 0; i < 10; i++){
			for (int j = 0; j < ice[i]; j++){
				if (ice[i] == 0){
					cout << "-" << endl;
					break;
				}
				else {
					cout << "*";
				}
			}
			cout << endl;
		}
	}

	return (0);
}