#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

using namespace std;

int main(){
	string input;
	int ang;
	double x,y;
	x=0;
	y=0;
	ang=90;
	do{
		cin>>input;
		if (input[0]!='0'){
			int h,k;
			int *p;
			h=0;
			k=0;
			p=&h;
			bool mi_flg=false;
			REP(i,input.length()){
				if (input[i]==','){
					p=&k;
				}
				else if (input[i]!='-'){
					*p*=10;
					*p+=input[i]-'0';
				}
				else{
					mi_flg=true;
				}
			}
			if (mi_flg){
				k*=-1;
			}
			x+=h*cos(ang/180.0*M_PI);
			y+=h*sin(ang/180.0*M_PI);
			ang-=k;
		}
	}while(input[0]!='0');
	cout<<(int)x<<endl<<(int)y<<endl;
}