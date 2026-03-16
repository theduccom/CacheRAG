#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(true){
    cin >>n>>m;
    if(n==0){
    	break;
    }
   
    int p[n];
    for(int i=0;i<n;i++){
        cin >>p[i];
    }
    
    
    sort(p,p+n);
    int mon=0;
    for(int i=0;i<n;i++){
        mon += p[i];
    }
    int wari = 0;
    int t=n-m;
    while(t>=0){
        wari += p[t];
        t -= m;
    }
    
    cout <<mon-wari<<endl;
    continue;
    
    }
return 0;
}