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
    int in;
    char S[1000];
    
    while(NULL!=gets(S)){
    
    while(1){
        
        bool f = false;
        
        for(int i=0;S[i]!='\0';i++){
            if('a'<=S[i] && S[i]<='y'){
                S[i]++;
            }else if(S[i]=='z'){
                S[i]='a';
            }
            
            if(i>=2){
                if(S[i-2]=='t' && S[i-1]=='h' && S[i]=='e')
                    f=true;
            }
            if(i>=3){
                if(S[i-3]=='t' && S[i-2]=='h')
                    if((S[i-1]=='i' && S[i]=='s') || (S[i-1]=='a' && S[i]=='t'))
                        f=true;
            }
        }
        
        if(f) break;
    }
    
    printf("%s\n",S);
    }
    
    return 0;
}