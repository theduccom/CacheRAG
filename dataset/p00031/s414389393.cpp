#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <map>
#define INF 100000000
#define rep(i,a) for(int i=0;i<(a);i++)

using namespace std;
typedef long long ll;

int hun[10]={512,256,128,64,32,16,8,4,2,1};

int main(){
    stack<int> ans;
    int n;
    while(cin>>n){
        rep(i,10){
            if(n>=hun[i]){
                n-=hun[i];
                ans.push(hun[i]);
            }
        }
        while(ans.size()){
            cout<<ans.top();
            ans.pop();
            if(ans.empty())cout<<endl;
            else cout<<" ";
        }
    }
    return 0;
}