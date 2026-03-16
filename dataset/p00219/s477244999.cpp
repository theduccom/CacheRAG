#include <iostream>
using namespace std;

int main(void)
{
	int n;

	while(cin >> n, n){
		int ice[10] = {};
		int no;

		for(int i = 0; i < n; i++){
			cin >> no;
			ice[no]++;
		}

		for(int i = 0; i < 10; i++){
			if(ice[i])
				for(int j = 0; j < ice[i]; j++)
					cout << "*";
			else
				cout << "-";
			cout << endl;
		}

	}
	return 0;
}