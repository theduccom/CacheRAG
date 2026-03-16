#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
typedef long long int ll;

int main()
{
    for(;;){
		int n;
		cin >> n;
		if(n==0)return 0;
		for(int i=0;i<n;i++){
			int a,b,c;
			cin >> a >> b >> c;
			if(a==100||b==100||c==100)
				printf("A\n");
			else if(b+a>=180)
				printf("A\n");
			else if(a+b+c>=240)
				printf("A\n");
			else if(a+b+c>=210)
				printf("B\n");
			else if(a+b+c>=150&&(a>=80||b>=80))
				printf("B\n");
			else printf("C\n");
		}
	}
}