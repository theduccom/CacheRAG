#include<iostream>

using namespace std;

int main(){
    int a=1,b=0,c=0,tmp;
    char x,y,z;
    while(cin>>x>>z>>y){
        if(x=='A'){
            if(y=='B'){
                tmp = a;
                a = b;
                b = tmp;
            }else{
                tmp = a;
                a = c;
                c = tmp;
            }
        }else if(x=='B'){
            if(y=='A'){
                tmp = a;
                a = b;
                b = tmp;
            }else{
                tmp = b;
                b = c;
                c = tmp;
            }
        }else{
            if(y=='A'){
                tmp = a;
                a = c;
                c = tmp;
            }else{
                tmp = b;
                b = c;
                c = tmp;
            }
        }
    }
    if(a==1){
        cout << "A" << endl;
    }else if(b==1){
        cout << "B" << endl;
    }else{
        cout << "C" << endl;
    }
}
