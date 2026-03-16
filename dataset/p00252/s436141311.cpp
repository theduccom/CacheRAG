#include<cstdio>
#include<cstring>
#include<functional>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main(void)
{
	int a,b,c;
	cin >> a >> b >> c;
	if(a==1 && b==0 && c==0) cout << "Close" << endl;
	else if(a==0 && b==1 && c==0) cout << "Close" << endl;
	else if(a==1 && b==1 && c==0) cout << "Open" << endl;
	else if(a==0 && b==0 && c==1) cout << "Open" << endl;
	else cout << "Close" << endl;
	exit(0);
}