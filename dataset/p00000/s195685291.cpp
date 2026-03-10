#include<iostream>
using namespace std;

int main(){
int a;
int b;
a=1;
while(a<10){
b=1;
while(b<10){
cout << a <<"x"<< b << "="<<a*b<<endl;
b=b+1;}
a=a+1;}

    return 0;
}