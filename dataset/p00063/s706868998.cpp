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

bool is(string s){
    int len=s.size();
    string a="",b="";
    for(int i=0;i<len/2;i++)a+=s[i];
    for(int i=len-1;i>=(len+1)/2;i--)b+=s[i];
//    cout<<a<<" "<<b<<endl;
    
    if(a==b)return true;
    return false;
}


int main(){
    int sum=0;
    string f;
    while(cin>>f){
        if(is(f))sum++;
    }
    cout<<sum<<endl;
    return 0;
}