#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int n;
	while(cin>>n){
		vector<int> s;
		for(int i=512;i>0;i>>=1){
			if(n>=i){
				n-=i;
				s.push_back(i);
			}
		}
		for(int it=s.size()-1;it>=0;it--){
			if(it!=0)cout<<s[it]<<" ";
			else cout<<s[it];
		}
		cout<<endl;
	}
	return 0;
}