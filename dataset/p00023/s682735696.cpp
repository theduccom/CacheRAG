#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main(void){


	int n;
	cin>>n;
	for(int i=0;i<n;i++){
        double xa,ya,ra,xb,yb,rb;
        cin>>xa>>ya>>ra>>xb>>yb>>rb;
        double d;
        d = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
        int ans;
        d<ra-rb ? ans=2 : d<rb-ra ? ans=-2 : d<=ra+rb ? ans=1 : ans=0;

        cout<<ans<<endl;


	}


	return 0;
}