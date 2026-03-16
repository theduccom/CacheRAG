#include<bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	string s[20];
	while(cin>>s[5]){
		s[5]="00000"+s[5];
		for(int i=6;i<13;i++){
			cin>>s[i];
			s[i]="00000"+s[i];
		}
		for(int i=5;i<13;i++){
			for(int j=5;j<13;j++){
				if(s[i][j]=='1'){
					if(s[i+1][j+1]=='1'&&s[i+1][j]=='1'&&s[i][j+1]=='1'){cout<<'A'<<endl;goto L;}
					if(s[i+1][j]=='1'&&s[i+2][j]=='1'&&s[i+3][j]=='1'){cout<<'B'<<endl;goto L;}
					if(s[i][j+1]=='1'&&s[i][j+2]=='1'&&s[i][j+3]=='1'){cout<<'C'<<endl;goto L;}
					if(s[i+1][j]=='1'&&s[i+1][j-1]=='1'&&s[i+2][j-1]=='1'){cout<<'D'<<endl;goto L;}
					if(s[i+1][j+1]=='1'&&s[i][j+1]=='1'&&s[i+1][j+2]=='1'){cout<<'E'<<endl;goto L;}
					if(s[i+1][j]=='1'&&s[i+1][j+1]=='1'&&s[i+2][j+1]=='1'){cout<<'F'<<endl;goto L;}
					if(s[i+1][j]=='1'&&s[i+1][j-1]=='1'&&s[i][j+1]=='1'){cout<<'G'<<endl;goto L;}
				}
			}
		}L:;
	}
}