#include <iostream>
#include <string>
#include <math.h>
#include <map>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
#include <stdlib.h>
#include <stack>
#include <queue>
#include <bitset>
#include <memory.h>

using namespace std;



int sosuu(int x){
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0)return 0;
    }
    return 1;
}


int main() {
    
    int x, y;
    int sum=0;
    int all=0;
    int cou=0;
    while(scanf("%d,%d",&x,&y)!=EOF){
        sum+=x*y;
        all+=y;
        cou++;
    }
    cout<<sum<<endl;
    cout<<(int)(((double)all)/cou+0.9)<<endl;
    return 0;
}