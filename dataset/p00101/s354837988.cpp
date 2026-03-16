#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<cmath>
#include<algorithm>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;
int main(){
int counter;
string n;
string hoshino="Hoshino";
cin>>counter;
cin.ignore();
for(int iii=0;iii<counter;iii++){
	getline(cin,n);
	string tmp="";
	for(int i=0;i<=max( 0,(int)n.size()-7 );i++){
		bool f=1;
		int cnt=0;
		for(int j=i;j<i+7;j++)if(n[j]!=hoshino[j-i])f=0;
		if(f)n[i+6]='a';
	}//endfor
	cout<<n<<endl;
}

	return 0;
}