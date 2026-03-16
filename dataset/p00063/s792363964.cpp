#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<stack>
#include<functional>
#include<string>
using namespace std;

int main(){
	int ans=0;
	string str;
    while(cin>>str){
		bool flag=true;
		int len = str.length();
		for(int i=0;i<len/2;i++){
			if(str[i]!=str[len-i-1]){
				flag=false;
				break;
			}
		}
		if(flag) ans++;
	}
	printf("%d\n",ans);
    return 0;
}