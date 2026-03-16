#include <iostream>
using namespace std;

int main() {
	int n,ic;
	int icecreams[10];
	
	while(cin>>n,n){
		for(int i=0;i<10;++i)icecreams[i]=0;
		
		for(;n;--n){
			cin>>ic;
			icecreams[ic]++;
		}
		
		for(int i=0;i<10;++i){
			if(icecreams[i]){
				for(;icecreams[i];--icecreams[i])cout<<"*";
				cout<<endl;
			}else{
				cout<<"-"<<endl;
			}
		}
	}
	return 0;
}