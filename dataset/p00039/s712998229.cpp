#include <iostream>
#include <string>

using namespace std;

int toNum(const string &s){
	int tbl[501];
	tbl['I']=1;
	tbl['V']=5;
	tbl['X']=10;
	tbl['L']=50;
	tbl['C']=100;
	tbl['D']=500;
	tbl['M']=1000;
	int sum=0;
	for(int i=0;i<(int)s.size();i++){
		if(i==0)sum+=tbl[s[i]];
		else if(tbl[s[i]]<=tbl[s[i-1]])sum+=tbl[s[i]];
		else{
			sum+=-2*tbl[s[i-1]]+tbl[s[i]];
		}
	}
	return sum;
}

int main(){

	string s;
	while(cin>>s){
		cout<<toNum(s)<<endl;
	}

	return 0;
}