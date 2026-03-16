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
    int n;
    cin>>n;
    getchar();

    rep(i,n){
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(s[i]=='H' && s[i+1]=='o' && s[i+2]=='s' && s[i+3]=='h' && s[i+4]=='i' && s[i+5]=='n' && s[i+6]=='o'){
                s[i+6]='a';
            }
        }
        cout<<s<<endl;
    }
     return 0;
 }