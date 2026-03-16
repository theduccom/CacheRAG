#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main(void){

	char a[10];
	int b,c;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
        for(int j=0;j<=8;j++){
            scanf("%c",&a[j]);
        }
        sort(a,a+9);
        b=atoi(a);
        reverse(a,a+9);
        c=atoi(a);

        cout<<c-b<<endl;


	}


	return 0;
}