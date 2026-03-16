#include<iostream>
#include<vector>
#include<algorithm>
#include<bitset>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        double xa,ya,ra,xb,yb,rb;
        cin>>xa>>ya>>ra>>xb>>yb>>rb;
        double a_b=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
        double rab=ra+rb;
        int ans;
        if(a_b-rab>0)ans=0;
        else if(rb-(a_b+ra)>0)ans=-2;
        else if(ra-(a_b+rb)>0)ans=2;
        else ans=1;
        cout<<ans<<endl;
    }

}