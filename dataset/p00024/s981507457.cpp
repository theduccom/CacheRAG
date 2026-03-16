#include<bits/stdc++.h>
using namespace std;
int serch(double speed,int floor)
{
    if(speed<9.8*sqrt((5*floor-5)/4.9))return floor;
    return serch(speed,floor+1);
}
int main()
{
    int n;
    double x,y,qux;
    while(cin>>qux){
        n=serch(qux,1);
        cout<<n<<endl;
    }
}