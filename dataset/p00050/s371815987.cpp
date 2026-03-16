#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
using namespace std;
int stoi(string x){stringstream ss;ss<<x;int tmp;ss>>tmp;return tmp;}
string itos(int x){stringstream ss;ss<<x;return ss.str();}
int main(){
string n,tmp;
getline(cin,n);
for(int i=0;i<n.size();i++){
	if(n[i]=='a'&&n[i+1]=='p'&&n[i+2]=='p'&&n[i+3]=='l'&&n[i+4]=='e'){
	cout<<"peach";
	i+=4;
	}
	else if(n[i]=='p'&&n[i+1]=='e'&&n[i+2]=='a'&&n[i+3]=='c'&&n[i+4]=='h'){
	cout<<"apple";
	i+=4;
	}
	else cout<<n[i];
}
cout<<endl;
return 0;
}