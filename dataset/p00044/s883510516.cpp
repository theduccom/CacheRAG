#include<iostream>
#include<vector>
#define m 60000
using namespace std;
 int main(){
    int n,cnt=0;
    vector<bool>a(m+1,true);
    for(int i=2;i*i<=m;i++)
         if(a[i]) for(int j=i+i;j<=m;j+=i)  a[j]=false;   
    int p[50000];  
    for(int i=2;i<=m;i++){
            if(a[i]) { p[cnt]=i;cnt++; }
    }

    while(1){
        cin>>n;
        if(cin.eof()) break;
        for(int i=0;i<cnt;i++){
            if(p[i]<n && p[i+1]>n) {
		cout<<p[i]<<" "<<p[i+1]<<endl;
            }else if(p[i]==n) {
                cout<<p[i-1]<<" "<<p[i+1]<<endl;}
       } 
    }
    return 0;
}