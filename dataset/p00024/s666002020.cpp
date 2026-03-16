#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main(){
    double in;
    int ans;
    
    while(scanf("%lf",&in)!=EOF){
        ans=ceil(in*in/98);
        printf("%d\n",ans+1);
    }
    
    return 0;
}