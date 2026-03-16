#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;
#define SZ(n)  (int)n.size()
#define dump(x) cerr<<#x<<" = "<<(x)<<endl;
#define debug(x)cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define MP make_pair
#define PB push_back
char ta[10][10];
int main(){
	while(cin>>ta[1][1]){
		for(int i=1;i<=8;i++)for(int j=(i==1)+1;j<=8;j++)cin>>ta[i][j];
	
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				char ans='?';
				if(ta[i][j]=='1'){
				if(ta[i+1][j]=='1'&&ta[i][j+1]=='1'&&ta[i+1][j+1]=='1')ans='A';
				
				else if(ta[i+1][j]=='1'&&ta[i+1][j]=='1'&&ta[i+3][j]=='1')ans='B';
				
				else if(ta[i][j+1]=='1'&&ta[i][j+2]=='1'&&ta[i][j+3]=='1')ans='C';
				
				else if(ta[i+1][j]=='1'&&ta[i+1][j-1]=='1'&&ta[i+2][j-1]=='1')ans='D';
				
				else if(ta[i][j+1]=='1'&&ta[i+1][j+1]=='1'&&ta[i+1][j+2]=='1')ans='E';
				
				else if(ta[i+1][j]=='1'&&ta[i+1][j+1]=='1'&&ta[i+2][j+1]=='1')ans='F';
				
				else if(ta[i][j+1]=='1'&&ta[i+1][j]=='1'&&ta[i+1][j-1]=='1')ans='G';
				}
				if(ans!='?'){cout<<ans<<endl;goto next;}
			}
		}
	
	next:;
	}
	return 0;
}