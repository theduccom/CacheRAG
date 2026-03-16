#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double x=0,y=0,a,b,an=90;
    char c;
    while(cin>>a>>c>>b){
        if(a==0&&b==0)break;
        x+=a*cos(an/180.0*M_PI);
        y+=a*sin(an/180.0*M_PI);
        an-=b;
    }
    cout<<(int)x<<endl<<(int)y<<endl;
}