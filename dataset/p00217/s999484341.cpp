#include<iostream>

using namespace std;


int main(){
    int n;
    while(cin>>n,n){
        int maxi=-1000000;
        int ans=0;
        for(int i=0; i<n;i++){
            int a,b,c; cin>>a>>b>>c;
            if(maxi<b+c){
                maxi=b+c;
                ans=a;}
        }
        cout<<ans<<" "<<maxi<<endl;	
    }
}