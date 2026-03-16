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
#define rep(i,a) for(int i=0;i<(a);i++)

using namespace std;
typedef long long ll;


int main(){
    int map[3]={};

    map[0]=1;
    char a,b;
    char hoge;
    while(cin>>a>>hoge>>b){
        swap(map[a-'A'],map[b-'A']);
    }
    rep(i,3){
        if(map[i])cout<<(char)(i+'A')<<endl;
    }
    return 0;
}