#include <iostream>
#include <string>
using namespace std;
#define REP1(i,n1,n2) for (i=n1; i<n2; i++)
string M[14];
int bomb(int x,int y){
	string s=M[y];
	if (s[x]=='0') return 0;
	M[y]=s.substr(0,x)+"0"+s.substr(x+1);
	int i;
	REP1(i,1,4){
		bomb(x+i,y);
		bomb(x-i,y);
		bomb(x,y+i);
		bomb(x,y-i);
	}
	return 0;
}

int main(){
	int i,j,n;
	string s;
	REP1(i,0,14) M[i]="00000000000000";
	cin>>n;
	REP1(i,0,n){
		getline(cin,s);
		getline(cin,s);
		REP1(j,3,11){
			getline(cin,s);
			M[j]="000"+s+"000";
		}
		int x,y;
		cin>>x>>y;
		x+=2;
		y+=2;
		bomb(x,y);
		cout<<"Data "<<i+1<<":\n";
		REP1(j,3,11) cout<<M[j].substr(3,8)<<"\n";
	}
}