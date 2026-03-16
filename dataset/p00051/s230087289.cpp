#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void){
    char data[9];
    int max,min;
    int src;
    int n,i,j,k;
    
    cin>>n;
    for(i=0;i<n;i++){
        cin>>data;
        sort(data,data+8);
        min=0;
        max=0;
        j=1;
        for(k=0;k<8;k++){
            min+=(int)(data[7-k]-'0')*j;
            max+=(int)(data[k]-'0')*j;
            j=j*10;
        }
        src=max-min;
        cout<<src<<endl;
    }
    return(0);
}