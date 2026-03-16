#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
        double a;
        while(cin >> a){ 
                double s = a;
                for(int i = 2; i <= 10; i++){
                        if(i%2) a /= 3;
                        else a *= 2;
                        s += a;
                }   
                printf("%06f\n",s);
        }   
}