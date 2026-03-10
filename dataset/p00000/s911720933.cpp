#include<iostream>
using namespace std;
int main(){
int a=1,b=1;
int c;
for(int i=0;i<9;i++){
b=1;
for(int j=0;j<9;j++){
c=a*b;
cout<<a<<"x"<<b<<"="<<c<<endl;
b++;
}
a++;
}
}