/* 0056*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

std::vector<int> p;
bool s[50001];
int main(void){
	for(int i=0;i<50001;i++)s[i]=true;
	s[0]=s[1]=false;
	for(int i=2;i<50001;i++){
		if(s[i]){
			p.push_back(i);
			for(int j=i*2;j<50001;s[j]=false,j+=i);
		}
	}
	int n;
	while(cin>>n,n){
		int c=0;
		for(int i=0;p[i]<=n/2;i++){
			int a=p[i];
			if(binary_search(p.begin(),p.end(),n-a))c++;
		}
		cout<<c<<endl;
	}
	return 0;
}