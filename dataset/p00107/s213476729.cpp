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
    while(true){
        vector<int> a;
        rep(i,3){
            int tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        sort(a.begin(),a.end());
        if(a[0]==0 && a[1]==0 && a[2]==0)break;
    
        int n;
        cin>>n;
        
        rep(i,n){
            int x;
            cin>>x;
            if( pow( (a[0]/2) , 2 ) + pow( (a[1]/2) , 2 ) < pow(x,2))cout<<"OK"<<endl;
            else cout<<"NA"<<endl;
        }
    }

    return 0;
 }