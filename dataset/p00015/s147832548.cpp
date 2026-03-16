#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char c1[1000],c2[1000];
        scanf("%s",&c1);
        scanf("%s",&c2);
        string s1,s2;
        s1=c1, s2=c2;
        if(s1=="0" && s2=="0"){
            printf("0\n");
            continue;
        }
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        int n=max(s1.size(),s2.size())+1;
        for(int i=s1.size();i<n;i++){
            s1+='0';
        }
        for(int i=s2.size();i<n;i++){
            s2+='0';
        }
        string res;
        int b=0;
        for(int i=0;i<max(s1.size(),s2.size());i++){
            int u=s1[i]-'0'+s2[i]-'0'+b;
            b=(u>=10); u%=10;
            res+=u+'0';
        }

        reverse(res.begin(),res.end());
        string res2;
        int j=0;
        while(res[j]=='0') j++;
        for(;j<res.size();j++){
            res2+=res[j];
        }

        if(res2.size()>80){
            printf("overflow\n");
        }else{
            printf("%s\n",res2.c_str());
        }
    }
    return 0;
}