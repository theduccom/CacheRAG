#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#define rep(i,a,b) for(int i = (a); i < (b); i++)
#define range(i,b) rep(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
	char str[101];
	int ans = 0;
	bool inp;

	while(cin >> str){
		inp = true;
		if( strlen(str) == 1){
			ans++;
		}else{
			range(i, strlen(str) / 2){
				if(str[i] != str[ strlen(str) - 1 - i]){
					inp = false;
				}
			}
			if(inp) ans++;
		}
	}
	cout << ans << endl;
}