#include <iostream>
#include<stdio.h>
using namespace std;
int main(void){
    // Here your code !
float n,a=0,b=0;
cin>>n;
a=n;
b=n;
while(cin>>n){
cin>>n;
if(n>=a) a=n;
else if(n<b) b=n;
}
printf("%.1f\n",a-b);
return 0;
}