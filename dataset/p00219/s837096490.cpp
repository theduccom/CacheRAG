#include <iostream>
#include <cstring>
using namespace std;

int main(void){
	int n;

	while(cin>>n && n){
		int t[10];
		memset(t,0,sizeof(t));

		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			t[x]++;
		}

		for(int i=0;i<10;i++){
			if(t[i] == 0){
				cout<<"-";
			}
			else{
				for(int j=0;j<t[i];j++){
					cout<<"*";
				}
			}

			cout<<endl;
		}
	}

	return 0;
}