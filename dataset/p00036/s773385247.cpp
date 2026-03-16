#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;


int main(void){

int cnt=0;
string  w[12];
string ans;

	while(!cin.eof()){
		ans = "G";
		rep(i,8)  cin >> w[i];
		if(cin.eof()) break;
		rep(i,8) rep(j,8) if(w[i][j] == '1'){
			if(w[i][j+1]=='1' &&  w[i][j+2]=='1' && w[i][j+3]=='1'){
				ans = "C";  break; }
			if(w[i][j+1] =='1' && w[i+1][j+1]=='1' &&  w[i+1][j]=='1' ){
				ans = "A";  break; }
			if(w[i+1][j-1]=='1' && w[i+1][j]=='1' && w[i+2][j-1]=='1'){
				ans = "D";  break; }
			if(w[i][j+1]=='1' && w[i+1][j+1]=='1' && w[i+1][j+2]=='1'){
				ans = "E";  break; }
			if(w[i+1][j]=='1' && w[i+1][j+1]=='1' && w[i+2][j+1]=='1'){
				ans = "F";  break; }
			if(w[i][j+1]=='1' && w[i+1][j-1]=='1' && w[i+1][j]=='1' ){
				ans = "G";  break; }
			if(w[i+1][j]=='1' && w[i+2][j]=='1' && w[i+3][j]=='1' ){
				ans = "B";  break; }
			}
		cout <<  ans << endl;
//		cnt++; if(cnt>40) break;
	}
	return 0;
	
	
}