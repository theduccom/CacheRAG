#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
using namespace std;

#define pb         push_back
#define mp         make_pair
#define ll         long long
#define PI         acos(-1.0)
#define ALL(A)     ((A).begin(), (A).end())
#define vsort(v)   sort(v.begin(),v.end())
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)

int main(){
    double v1, v2, l[10];
    while(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf", &l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v1,&v2)!=EOF){

        double p[11];
        p[0] = 0;
        FOR(i, 1, 11){
            p[i] = p[i-1] + l[i-1];
        }
        FOR(i, 0, 10){
            double vt = (p[10] * v1) / (v1 + v2);
            if(p[i] < vt && p[i+1] >= vt){
                cout << i+1 << endl;
                break;
            }
        }
    }
}