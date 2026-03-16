#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		else{
			int data[n+2][n+2];

			for (int i = 0; i < n+2; ++i){
				for(int j = 0; j < n+2; j++){					
				data[i][j] = 0;
				}
			}
			
			for (int i = 0; i < n; ++i){
				for(int j = 0; j < n; j++){					
				cin >> data[i][j];
				}
			}
			for (int i = 0; i < n; ++i){
				for(int j = 0; j < n; j++){	
					data[i][n] += data[i][j];
				}
			}
			for (int i = 0; i < n+1; ++i){
				for(int j = 0; j < n; j++){	
					data[n][i] += data[j][i];
				}
			}
			for (int i = 0; i < n+1; ++i){
				for(int j = 0; j < n+1; j++){
					cout.width(5);
					cout << data[i][j];
					// if (j != n) cout<<" ";
				}
				cout << endl;
			}
				
		}
	}
	return 0;
}