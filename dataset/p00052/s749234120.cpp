#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        int c=0,t=0,f=0,j;
        for(int i=1;i<=n;i++){
            j=i;
            while(j%10==0){c++;j/=10;}
            while(j%2==0){t++;j/=2;}
            while(j%5==0){f++;;j/=5;}
        }
        cout<<c+min(t,f)<<endl;
    }
}