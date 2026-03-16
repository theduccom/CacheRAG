#include <iostream>
using namespace std;

int main(){
    int a,b,c,n,r;

    while(cin>>a>>b>>c,a||b||c){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>r;
            if(a*a+b*b<4*r*r || a*a+c*c<4*r*r || b*b+c*c<4*r*r){
                cout<<"OK"<<endl;
            }else{
                cout<<"NA"<<endl;
            }
        }
    }

    return 0;
}