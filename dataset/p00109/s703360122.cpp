#include <iostream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
	char c[100],*st;
	int n,f,ca1,ca2,d;
	stack<int> as;
	stack<char> bs;
	cin >> n;
	for (n;n>0;n--) {
	cin >> c; st=c;
	while(true) {
		if (st[0]=='=') break;
		f=0; d=0;
		if (st[0]=='-') if (st==c) d=1; else if ((st-1)[0]=='(') d=1;
		if ((st[0]>='0' && st[0]<='9') || d==1) {
			as.push(atoi(st)); f=1; st++;
		    for (st;st[0]>='0' && st[0]<='9';st++);	}
		else { if (st[0]==')') { bs.pop(); f=1;} else bs.push(st[0]); st++;}
		if (bs.empty() || f==0) continue;
		while(true){
			if (bs.empty()) break; else if (bs.top()=='(') break;
            if (bs.top()=='*' || bs.top()=='/') {
				ca2=as.top(); as.pop(); ca1=as.top(); as.pop(); 
				if (bs.top()=='*') ca1=ca1*ca2; else ca1=ca1/ca2;
				as.push(ca1); bs.pop();	}
			else if (st[0]!='*' && st[0]!='/') {
                ca2=as.top(); as.pop(); ca1=as.top(); as.pop(); 
				if (bs.top()=='+') ca1=ca1+ca2; else ca1=ca1-ca2;
				as.push(ca1); bs.pop(); } else break;
		}
	}
		cout << as.top() << endl;
		as.pop();
	}
	return 0;
	}