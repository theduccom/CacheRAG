#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>

using namespace std;
typedef long long ll;

int main(){
    int n;
    string S;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        
        int h=0,point=0,o=0;
        
        while(1){
            cin >> S;
            
            if(S == "HIT"){
                if(h>=3)
                    point++;
                else
                    h++;
            }else if(S == "HOMERUN"){
                point+=h+1;
                h=0;
            }else if(S == "OUT"){
                o++;
            }
            
            if(o>=3) break;
        }
        
        printf("%d\n",point);
    }
    
    return 0;
}