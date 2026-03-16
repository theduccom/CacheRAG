#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
#include<vector>
#include<stack>
#include<queue>
#include<iostream>
using namespace std;
int main(void)
{
	int n,i,j;
	int ice[9],p;
	while(1) {
		cin >> n;
		if(n==0)break;
		for(i=0;i<=9;i++) ice[i]=0;
		for(i=0;i<n;i++) {
			cin >>p;
			ice[p]++;
		}
		for(i=0;i<=9;i++) {
			if(ice[i]>0) {
				for(j=0;j<ice[i];j++) {
					cout << "*";
				}
				cout << endl;
			}
			else cout << "-" << endl;
		}
	}
	exit(0);
}