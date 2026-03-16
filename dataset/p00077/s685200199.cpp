#include <iostream>
#include <cstdio>

using namespace std;

int main(void){
    int i,j,k,l;
    int n;
    char n_tmp;
    char moji;
    char t[1000];
    
    while(true){
        if((moji=cin.get())==EOF)break;
        if(moji=='\n'){
            cout<<'\n';
            continue;
        }
        if(moji=='@'){
            n_tmp=cin.get();
            n=(int)n_tmp-'0';
            moji=cin.get();
            for(i=0;i<n;i++){
                cout<<moji;
            }
            continue;
        }
        cout<<moji;
    }
    return(0);
}