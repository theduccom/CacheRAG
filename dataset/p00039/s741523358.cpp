#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(){

	string str;
	int table[200];

	table[0]=0;
	table['I']=1;
	table['V']=5;
	table['X']=10;
	table['L']=50;
	table['C']=100;
	table['D']=500;
	table['M']=1000;

	while(cin>>str){
		reverse(str.begin(),str.end());
		int prv=0;
		int sum=0;
		for(int i = 0; i < str.size(); i++){
			if(prv>table[str[i]]){
				sum-=table[str[i]];
			}
			else{
				sum+=table[str[i]];
			}
			prv=table[str[i]];
		}
		cout<<sum<<endl;
	}
	return 0;
}