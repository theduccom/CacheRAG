#include<iostream>
#include<string>
using namespace std;

int main(){
	string ss;
	int num=0;
	while(cin>>ss){
		int cnt=0;
		for(int i=0,j=ss.size()-1;i<ss.size()/2;i++,j--){
			if(ss[i]==ss[j])cnt++;
		}
		if(cnt==ss.size()/2)num++;
	}
	cout<<num<<endl;
	return 0;
}