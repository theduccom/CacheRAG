#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    float n,t,y,h;
    while(cin>>n){
        t=n/9.8;
        y=4.9*t*t;
        h=(y+5)/5;
        cout<<fixed<<(int)h+1<<endl;
        
    }
    return 0;
}