#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int n;
	while(cin>>n&&n!=0){
		int v[10];
		fill(v,v+10,0);
		for(int i = 0; i < n; i++){
			int t;
			cin>>t;
			v[t]++;
		}
		for(int i = 0; i < 10; i++){
			int num=v[i];
			if(num>=1){
				for(int j = 0; j < num; j++)
					cout<<'*';
				cout<<endl;
			}
			else{
				cout<<'-'<<endl;
			}
		}
	}

	return 0;
}