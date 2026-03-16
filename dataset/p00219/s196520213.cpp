#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	int n,f[10];
	while(cin>>n&&n){
		fill_n(f,10,0);
		for(int i=0;i<n;i++){
			int id;
			cin>>id;
			f[id]++;
		}
		for(int i=0;i<10;i++){
			if(!f[i])cout<<"-\n";
			else{
				for(int j=0;j<f[i];j++){
					cout<<'*';
				}
				cout<<endl;
			}
		}
	}
	return 0;
}