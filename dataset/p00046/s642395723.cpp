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
typedef long long ll;

#define PI 3.141592653

int main(){
    double h[100000]={0};
    int n;
    
    for(int i=0;EOF!=scanf("%lf",&h[i]);i++) n++;
    
    sort(h,h+n);
    
    printf("%lf\n",h[n-1]-h[0]);
    
    return 0;
}