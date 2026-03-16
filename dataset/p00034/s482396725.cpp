#include<iostream>
using namespace std;

int main(){
    int k[10];
    char g;
    while(1){
        int s=0,c=0,a,b;
        double v,p=0;
        for(int i=0;i<10;i++) cin>>k[i]>>g,p+=k[i];
        cin>>a>>g>>b;
        if(cin.eof())break;
        p/=(a+b),p*=a;
        while(p>s) s+=k[c],c++;
        cout<<c<<endl;
    }
}