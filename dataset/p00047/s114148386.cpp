#include <iostream>
using namespace std;
int main(){
    int a=1,b=0,c=0;
    int tmp=0;
    char x,q,y;
    while(cin>>x>>q>>y){
        if(x=='A'&&y=='B'||x=='B'&&y=='A'){
            tmp=a;
            a=b;
            b=tmp;
        }
        if(x=='A'&&y=='C'||x=='C'&&y=='A'){
            tmp=a;
            a=c;
            c=tmp;
        }
        if(x=='B'&&y=='C'||x=='C'&&y=='B'){
            tmp=c;
            c=b;
            b=tmp;
        }
    }
    if(a==1)cout<<"A"<<endl;
    if(b==1)cout<<"B"<<endl;
    if(c==1)cout<<"C"<<endl;
}