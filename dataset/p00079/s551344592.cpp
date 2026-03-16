#include<iostream>
#include<cstdio>
#include<cmath>
#include<utility>
#include<vector>
#include<map>
  
using namespace std;
  
typedef pair<double,double> PBB;
typedef vector<PBB > VPBB;
typedef multimap<double,int> MDI;
typedef MDI::iterator MDII;
  
#define PUSH push_back
#define MDIVT MDI::value_type
#define PI 3.14159265359
#define INF 10000000000
#define NMAX 100
  
  
int main(){
  
    int n;
    int max,min;
    int cnt;
    double x,y;
	double ax,ay,bx,by,cx,cy;
    double ans;
    char gav;
    VPBB pin;
    MDI point;
    MDII ia,ib;

	n=0;
    while(cin>>x>>gav>>y){
		n++;
        pin.PUSH(PBB(x,y));
    }

    max=0;
    for(int i=1;i<n;i++){
        if(pin[max].second<pin[i].second) max=i;
        else if(pin[max].second==pin[i].second&&pin[max].first<pin[i].first) max=i;
    }

    for(int i=0;i<n;i++){
        if(i!=max){
            if(pin[i].second!=pin[max].second) point.insert(MDIVT(atan2(pin[i].second-pin[max].second,pin[i].first-pin[max].first),i));
            else point.insert(MDIVT(-1.0*PI,i));
        }
    }

	ia=point.begin(),ib=point.begin();
	ib++;
	ans=0;
	while(ib!=point.end()){
		ax=pin[max].first,ay=pin[max].second;
		bx=pin[(*ia).second].first,by=pin[(*ia).second].second;
		cx=pin[(*ib).second].first,cy=pin[(*ib).second].second;
		ans+=abs(((ax-cx)*(by-cy)-(ay-cy)*(bx-cx)))/2;
		///cout<<ax<<","<<ay<<","<<bx<<","<<by<<","<<cx<<","<<cy<<endl;
		///printf("%.6f\n",ans);
		ia++,ib++;
	}

	printf("%.6f\n",ans);

}