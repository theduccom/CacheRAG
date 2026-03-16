#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<stack>

using namespace std;

int main () {
	string st1;
	int ct=0;
	
	while(cin>>st1){
		if(cin.eof())
		break;
		string st2(st1);
		reverse(st2.begin(),st2.end());
		if(st1==st2)
		ct++;
	}
	printf("%d\n",ct);
}