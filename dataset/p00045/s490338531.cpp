#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

int x = 0, y = 0, s = 0, a = 0;
double sy = 0  , i = 0;

while(scanf("%d,%d",&x,&y)+1){
s = s + x * y;
sy = sy + y;
i++;
}

a=int(sy / i + 0.5);

cout <<  s  <<  endl <<  a  <<  endl;

return 0;
}