#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <set>
using namespace std;
char s[8][8];
int main(){
	

	while(cin>>s[0][0]){
		for(int j=1;j<8;j++){
			cin>>s[0][j];
		}
		for(int i=1;i<8;i++){
			for(int j=0;j<8;j++){
				cin>>s[i][j];
			}
		}
		for(int y=0;y<8;y++){
			for(int x=0;x<8;x++){
		if(s[y][x]=='1'&&s[y+1][x]=='1'&&s[y][x+1]=='1'&&s[y+1][x+1]=='1')
			cout<<"A"<<endl;
		else if(s[y][x]=='1'&&s[y+1][x]=='1'&&s[y+2][x]=='1'&&s[y+3][x]=='1')
			cout<<"B"<<endl;
		else if(s[y][x]=='1'&&s[y][x+1]=='1'&&s[y][x+2]=='1'&&s[y][x+3]=='1')
			cout<<"C"<<endl;
		else if(s[y][x]=='1'&&s[y+1][x]=='1'&&s[y+1][x-1]=='1'&&s[y+2][x-1]=='1')
			cout<<"D"<<endl;
		else if(s[y][x]=='1'&&s[y][x+1]=='1'&&s[y+1][x+1]=='1'&&s[y+1][x+2]=='1')
			cout<<"E"<<endl;
		else if(s[y][x]=='1'&&s[y+1][x]=='1'&&s[y+1][x+1]=='1'&&s[y+2][x+1]=='1')
			cout<<"F"<<endl;
		else if(s[y][x]=='1'&&s[y][x+1]=='1'&&s[y+1][x]=='1'&&s[y+1][x-1]=='1')
			cout<<"G"<<endl;
			}
		}
	}
}