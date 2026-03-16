#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
using namespace std;

string st;
char peach[]={'p','e','a','c','h'},apple[]={'a','p','p','l','e'};

int main() {
	getline(cin,st);
	string sta=st,stp=st;
	int np=0,nq=0;
	for(int i=0;i<201;i++){
		int p=sta.find("apple"),q=stp.find("peach");
		if(p!=string::npos){
			for(int j=0;j<5;j++)st[p+np+j]=peach[j];
			sta=sta.substr(p+5);
			np+=p+5;
		}
		if(q!=string::npos){
			for(int j=0;j<5;j++)st[q+nq+j]=apple[j];
			stp=stp.substr(q+5);
			nq+=q+5;
		}
	}
	cout<<st<<endl;
}