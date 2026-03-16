#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <functional>
#include <queue>
#include <stack>
#include <cmath>
#define INF 100000000
#define MOD 1000000007
using namespace std;


int main(){
    while(true){
        int n;
        cin >> n;
        if(n==0){break;}
        
        int num[10]={};
        for(int i=0; i<n; i++){
            int a;
            cin >> a;
            num[a]++;
        }
        
        for(int i=0; i<10; i++){
            for(int k=0; k<num[i]; k++){
                cout<<'*';
            }
            if(num[i]==0){cout<<'-';}
            cout<<endl;
        }
    }
    
    return 0;
}

