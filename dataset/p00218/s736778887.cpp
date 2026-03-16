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
	int a,b,c;
	int i,j;
	int n;
	while(1) {
		cin >> n;
		if(n==0)break;
		for(i=0;i<n;i++) {
			cin >>a>>b>>c;
			if(a==100 || b==100 || c==100) cout<<"A"<<endl;
			else if((a+b)/2>=90) cout<<"A"<<endl;
			else if((a+b+c)/3>=80) cout<<"A"<<endl;
			else if((a+b+c)/3>=70) cout<<"B"<<endl;
			else if((a+b+c)/3>=50 && a>=80 || b>=80) cout<<"B"<<endl;
			else cout<<"C"<<endl;
		}
	}
	exit(0);
}