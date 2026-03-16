#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	double l[10],v1,v2,x;
	double ans;
	char c;
	while(cin>>l[0]>>c>>l[1]>>c>>l[2]>>c>>l[3]>>c>>l[4]>>c>>l[5]>>c>>l[6]>>c>>l[7]>>c>>l[8]>>c>>l[9]>>c>>v1>>c>>v2){
		x=0;
		for(int i=0;i<10;i++){
			x+=l[i];
		}
		ans=x*v1/(v1+v2);
		int n=0,s=0;
		while(1){
			s+=l[n];
			if(ans<=s){
				cout<<n+1<<endl;
				break;
			}
			n++;
		}
	}
	return 0;
}