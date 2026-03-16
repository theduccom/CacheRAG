#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,x=0,y=0;
    char g,m;
    while(cin>>a>>g>>b>>m>>c){
        if(c*c==a*a+b*b){
            x++;
        }else if(a==b){
            y++;
        }
    }
    cout<<x<<endl<<y<<endl;
    return 0;
}