#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main(){

	char a[200] = {0};
	while(scanf("%s",a) != EOF){
	    char ans[10000] = {0};
	    int cnt = 0;
        for(int i = 0; i < strlen(a); i++){
            if(a[i] == '@'){
                fill(ans+cnt,ans+cnt+a[i+1]-'0',a[i+2]);
                cnt+=a[i+1]-'0';
                i += 2;
            }
            else{
                ans[cnt] = a[i];
                cnt++;
            }
        }
        cout << ans << endl;
        for(int i = 0; i < 200; i++) a[i] = 0;
	}

	return 0;
}