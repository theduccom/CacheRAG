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
    int sq=0,hi=0;
    int x[3];
    char hoge;
    while(cin>>x[0]>>hoge>>x[1]>>hoge>>x[2]){
        if(x[0]==0)break;
        if(x[0]*x[0]+x[1]*x[1]==x[2]*x[2])sq++;
        else
        if(x[0]==x[1])hi++;

    }
    cout<<sq<<endl<<hi<<endl;
    return 0;
}