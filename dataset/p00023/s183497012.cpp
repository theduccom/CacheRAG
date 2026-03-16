#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    double xa,ya,ra,xb,yb,rb;
    
    while((cin>>xa>>ya>>ra>>xb>>yb>>rb)){
        double l = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
        if(l>ra+rb){
            cout<<0<<endl;
        }else if(l+rb<ra){
            cout<<2<<endl;
        }else if(l+ra<rb){
            cout<<-2<<endl;
        }else{
            cout<<1<<endl;
        }
    }
    return 0;
}