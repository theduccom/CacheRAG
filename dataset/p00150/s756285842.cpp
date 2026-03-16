#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;

	while (cin >> n, n){
		vector<bool> num(n + 1, true);
		
		for (int i = 2; i <= n; i++){
			if (num[i]){
				for (int j = i; j * i <= n; j++){
					num[j * i] = false;
				}
			}
		}
		bool check = false;
		for (int i = n; i >= 2; i--){
			if (num[i]){
				for (int j = i - 1; j >= 2; j--){
					if (num[j]){
						if (i - j == 2){
							cout << j << " " << i << endl;
							check = true;
							break;
						}
					}
				}
			}
			if (check){
				break;
			}
		}
		num.clear();
	}
	
	return (0);
}