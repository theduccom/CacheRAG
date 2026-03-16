#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)

int main(){
	int n;
	cin>>n;

	for(int i = 0; i < n; i++){
		double xa,ya,ra,xb,yb,rb;
		cin>>xa>>ya>>ra>>xb>>yb>>rb;
		double dist=(ya-yb)*(ya-yb)+(xa-xb)*(xa-xb);
		// AÆBªdÈçÈ¢
		if(!EQ((ra+rb)*(ra+rb),dist)&&(ra+rb)*(ra+rb)<dist)
			cout<<0<<endl;
		// ~üªðíé
		else if(((abs(ra-rb))*(abs(ra-rb))<dist&&(ra+rb)*(ra+rb)>dist))
			cout<<1<<endl;
		else if(abs(ra-rb)*abs(ra-rb)>dist){
			// Ç¿ç©ªÉ¶Ý·é
			if(ra>rb)
				cout<<2<<endl;
			else
				cout<<-2<<endl;
		}
		else
			cout<<1<<endl;
	}

	return 0;
}