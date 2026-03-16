#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b,c,sum;
	long long aa,bb;
	long long n;
	while(1){
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0)break;
		if(a<b){aa=a;if(b<c){bb=b;}else{bb=c;}}else{aa=b;if(a<c){bb=a;}else{bb=c;}}

		cin>>n;
		for (int i = 0; i < n; ++i) {
			cin>>sum;
			if(sqrt(aa*aa+bb*bb)<sum*2){cout<<"OK"<<endl;}
			else{cout<<"NA"<<endl;}
		}
	}
	return 0;
}