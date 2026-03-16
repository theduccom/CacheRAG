#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <map>
#define INF 100000000

using namespace std;
typedef long long ll;

int main(){
    string s;
    getline(cin,s);
    int len=s.size();
    for(int i=0;i<len;i++) {
        if('a'<=s[i] && s[i]<='z')s[i]+='A'-'a';
    }
    cout<<s<<endl;
}