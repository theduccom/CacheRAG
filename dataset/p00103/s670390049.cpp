#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    int flag=0,count=0,rui=0;
    cin>>n;
    while(flag<n*3){
        cin>>s;
        if(s=="OUT"){
            flag++;
            if(flag%3==0){
                cout<<count<<endl;
                count=0;rui=0;
            }
        }
        else if(s=="HIT"){
            if(rui<3)rui++;
            else count++;
        }
        else {
            count+=rui;++count;
            rui=0;
        }
    }
}