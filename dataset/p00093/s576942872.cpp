#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	
	int a,b,l=0;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==0&&b==0)return 0;
		if(l==1)cout<<endl;
		int k=0;
		for(int i=0;i<b-a+1;i++){
			if((a+i)%4==0&&(a+i)%400!=100&&(a+i)%400!=200&&(a+i)%400!=300){cout<<a+i<<endl;k=1;}
		}
		if(k==0)cout<<"NA"<<endl;
		l=1;
	}
}