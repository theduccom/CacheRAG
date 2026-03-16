#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <typeinfo>
#include <map>
#define INF 100000000
#define rep(i,a) for(int i=0;i<(a);i++)

using namespace std;
typedef long long ll;






int main(){
    string s;
    while(cin>>s){
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='@')ans+=s[i];
            else{
                for(int j=0;j<s[i+1]-'0';j++){
                    ans+=s[i+2];
                }
                i+=2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}