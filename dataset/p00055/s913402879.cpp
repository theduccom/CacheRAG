#include <iostream>
#include <stdio.h>
using namespace std;
double sumofs(double);

int main(){
    double x,y;
    while (cin >>x){
        if (cin.eof()){break;}
        y = sumofs(x);
        printf("%.7f\n",y);
    }
}

double sumofs(double x){
    double a[10];
    double sum=0;
    a[0] = x;

    for (int i=0;i<9;i++){
        if(i%2==0)
            a[i+1]=a[i]*2;
        else
            a[i+1]=a[i]/3;
    }
    for (int j=0;j<10;j++)
        sum +=a[j];
    return sum;
}