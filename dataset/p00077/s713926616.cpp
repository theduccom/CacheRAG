#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;


int main(void)
{
    string n;
    while(cin>>n){
        for(int i=0; i<n.length(); i++){
            if(n[i]=='@'){
                i++;
                int re=n[i]-'0';
                i++;
                for(int j=0; j<re; j++){
                    cout<<n[i];
                }
            }else{
                cout<<n[i];
            }
        }
        cout<<endl;
    }
    
}