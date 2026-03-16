#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;

signed main(){
    cin.tie(0); 
    ios::sync_with_stdio(false);
    
    int b1,b2,b3;
    cin>>b1>>b2>>b3;
    if(b1>0&&b2>0||b3>0){
      cout<<"Open"<<"\n";
    }
    else{
      cout<<"Close"<<"\n";
    }


    return 0;
}


