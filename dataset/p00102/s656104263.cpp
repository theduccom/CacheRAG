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
    while(cin>>n){
        if(n==0)break;
        int data[20][20]={};

        rep(i,n){
            rep(j,n){
                cin>>data[i][j];
            }
        }
        
        rep(i,n){
            int sum=0;
            rep(j,n)sum+=data[i][j];
            data[i][n]=sum;
        }
        
        rep(j,n+1){
            int sum=0;
            rep(i,n)sum+=data[i][j];
            data[n][j]=sum;
        }
        rep(i,n+1){
            rep(j,n+1){
                printf("%5d",data[i][j]);
            }
            cout<<endl;
        }
    }
    return 0;
 }