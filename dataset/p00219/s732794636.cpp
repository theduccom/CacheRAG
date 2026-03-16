#include<iostream>
using namespace std;

int list[12];
int main(){
	int d;
	while(cin>>d&&d){
//		cout<<"-------- "<<d<<endl;
		for(int i=0;i<12;i++)list[i]=0;
		for(;d>0;d--){
			int n;
			cin>>n;
			list[n]++;
		}
		for(int i=0;i<10;i++){
	//		cout<<"["<<i<<"]";
			if(list[i]==0)cout<<"-";
			for(int j=0;j<list[i];j++){
				cout<<"*";
			}
			cout<<endl;
		}

	}

	return 0;
}