#include <cmath>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    string inp[2];
    int output[81],n;
    cin >> n;
    while(n--){
        cin >> inp[0] >> inp[1];
        if(inp[0].size()>80||inp[0].size()>80) cout << "overflow" << endl;
        else{
            fill(output,output+81,0);
            reverse(inp[0].begin(),inp[0].end());
            reverse(inp[1].begin(),inp[1].end());
            for(int i=0;i<81;i++){
                if(i<inp[0].size()) output[i]+=inp[0][i]-'0';
                if(i<inp[1].size()) output[i]+=inp[1][i]-'0';
                if(i!=80&&output[i]>9){
                    output[i+1]+=output[i]/10;
                    output[i]%=10;
                }
            }
            if(output[80]>0) cout << "overflow" << endl;
            else{
                bool flag=false;
                for(int i=79;i>=0;i--){
                    if((!flag&&output[i]!=0)||i==0) flag=true;
                    if(flag) cout << output[i];
                }
                cout << endl;
            }
        }
    }
    return 0;
}