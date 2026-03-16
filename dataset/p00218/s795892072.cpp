#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

double average(int a,int b,int c){
	return ((double)a+(double)b+(double)c)/3.0;
}
int main(){
	int n;
	while(cin>>n,n){
		int pe,pm,pj;
		char cls[n];
		rep(i,n){
			cin>>pm>>pe>>pj;
			if(pm==100 || pe==100 || pj==100)cls[i]='A';
			else if(average(pm,pe,pj)>=80 ||((double)pm+(double)pe)/2>=90)cls[i]='A';
			else if(average(pm,pe,pj)>=70 || (average(pm,pe,pj)>=50 && (pm>=80 || pe>=80)))cls[i]='B';
			else cls[i]='C';
		}
		rep(i,n)cout<<cls[i]<<endl;
	}
	return 0;
}