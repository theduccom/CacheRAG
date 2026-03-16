#include<bits/stdc++.h>
using namespace std;
int main(void){
    int b1,b2,b3;
    cin>>b1>>b2>>b3;
    string ans="Close";
    if((b1==0&&b2==0&&b3==1)||(b1==1&&b2==1)) ans="Open";
    cout<<ans<<endl;
}