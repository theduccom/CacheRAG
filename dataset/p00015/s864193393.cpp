#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
   
using namespace std;
   
int main(){
       
    int n;
    cin>>n;
       
    while(n-- > 0){
        vector<int> ans;
        vector<int> a;
        vector<int> b;
           
        string c,d;
        cin>>c>>d;
           
        for(int i = 0; i < (int)c.size(); ++i){
            a.push_back(c[c.size()-1-i]-'0');
        }
        for(int i = 0; i < (int)d.size(); ++i){
            b.push_back(d[d.size()-1-i]-'0');
        }
           
           
        int kuri = 0;
        while(!a.empty() || !b.empty() || kuri!=0){
            int sum = kuri;
            kuri = 0;
               
            if(!a.empty()){
                sum += a[0];
                a.erase(a.begin());
            }
               
            if(!b.empty()){
                sum += b[0];
                b.erase(b.begin());
            }
               
            ans.push_back(sum%10);
            kuri += sum/10;
        }
           
        if(ans.size()>80)puts("overflow");
        else{
            for(int i = 0; i < (int)ans.size(); ++i){
                printf("%d",ans[ans.size()-1-i]);
            }puts("");
        }
    }
       
}