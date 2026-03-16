#include<iostream>
#include<cstring>
using namespace std;
#define MAX 1000
#define temp 85
int main(){
	int x,A[MAX],B[MAX],al,bl,sum[MAX],pre,now;
	char a[MAX],b[MAX];
	cin>>x;
	while(x-->0){
		for(int i=0;i<MAX;i++){
			A[i]=0;
			B[i]=0;
			sum[i]=0;
		}
		cin>>a;
		cin>>b;
		al=strlen(a);
		bl=strlen(b);
		for(int i=0;i<al;i++)
		A[i]=a[al-1-i]-'0';
		for(int i=0;i<bl;i++)
		B[i]=b[bl-1-i]-'0';
		if(al>bl)
		bl=al;
		pre=0;
		for(int i=0;i<=bl;i++){
			if(A[i]+B[i]+pre>9)
				now=1;
			else now=0;
			sum[i]=(A[i]+B[i]+pre)%10;
			pre=now;
		}
		if(sum[bl]!=0){
			if(bl>=80){
				cout<<"overflow"<<endl;
				continue;
			}
		for(int i=bl;i>=0;i--)
		cout<<sum[i];
		}
		else {
			if(bl-1>=80){
				cout<<"overflow"<<endl;;
				continue;
			}
		for(int i=bl-1;i>=0;i--)
		cout<<sum[i];
		}
		cout<<endl;
	}
	return 0;
}