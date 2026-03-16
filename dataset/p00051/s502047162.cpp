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
    rep(loop,n){
        string num;
        string beg,en="";
        cin>>num;
        sort(num.begin(),num.end());
        beg=num;
        for(int i=num.size()-1;i>=0;i--){
            en+=num[i];
        }
        cout<<stoi(en)-stoi(beg)<<endl;

    }
    
    return 0;
}