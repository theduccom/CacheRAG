#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;

string a="apple";
string p="peach";

int num[4];
int main(){
	string in,out;
	getline(cin,in);
	out=in;
	int start=-1;
	while((start=in.find(a,start+1))!=string::npos)
		rep(i,5) out[start+i]=p[i];
	start=-1;
	while((start=in.find(p,start+1))!=string::npos)
		rep(i,5) out[start+i]=a[i];
	cout << out << endl;
	return 0;
}