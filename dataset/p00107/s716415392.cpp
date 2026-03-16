#include<cstdio>
#include<algorithm>
#include<functional>
#include<iostream>
#include<cmath>
#define LL long long
using namespace std;
int main(void)
{
	LL d,w,h,i,j,k,in,n;
	LL dis1,dis2,dis3,T;

	while(1) {	
		cin>>d>>w>>h;
		if(!d&&!w&&!h) break;
		cin>>n;
		for(i=0;i<n;i++) {
			cin>>in;
			T=(in*2)*(in*2);
			dis1=(w*w)+(h*h);
			dis2=(w*w)+(d*d);
			dis3=(h*h)+(d*d);
			if(dis1<T||dis2<T||dis3<T) cout<<"OK\n";
			else cout<<"NA\n";
		}
	}
}