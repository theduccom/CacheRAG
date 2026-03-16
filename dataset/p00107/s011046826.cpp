#include<iostream>
#include<map>
using namespace std;

int main(){
    int a,b,c,n,r;
    while(cin>>a>>b>>c,a){
        cin>>n;
        while(n--){
            cin>>r;
            if(a*a+b*b<4*r*r||c*c+b*b<4*r*r||a*a+c*c<4*r*r)
                cout<<"OK"<<endl;
            else
                cout<<"NA"<<endl;
        }
    }
}