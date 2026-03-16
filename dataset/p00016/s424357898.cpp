#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    ios::sync_with_stdio(false);
    char a;
    double x=0,y=0,num,deg1,deg=90;
    while(cin>>num>>a>>deg1,num||deg1){
        x+=(cos(deg*M_PI/180)*num);
        y+=(sin(deg*M_PI/180)*num);
                deg-=deg1;
    }
    cout << (int)x << "\n" << (int)y << "\n";
    return 0;
}