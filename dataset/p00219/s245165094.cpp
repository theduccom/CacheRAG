#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		int count[10]={0},in;
		for(int i=0;i<n;++i){
			cin>>in;
			++count[in];
		}
		for(int i=0;i<10;++i){
			if(count[i]==0)cout<<"-";
			for(int j=0;j<count[i];++j) cout<<"*";
			cout<<"\n";
		}
	}
	return 0;
}