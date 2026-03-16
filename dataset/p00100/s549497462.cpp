#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath> 
#include <algorithm> 
#include <cstdlib> 

using namespace std;

int main()
{
	int n,f,b;
	long long c,d;

	while(1){
		f=1;int k=0;
		long long a[4000][2]={0};
		cin>>n; if(n==0) return 0;

		for(int i=0;i<n;i++){
			cin>>b>>c>>d;
			for(int j=0;j<k;j++){
				if(a[j][0]==b){ a[j][1]+=c*d; f=0;}
			}
			if(f){
				a[k][0]=b; a[k++][1]=c*d;
			}
		}

		f=1;
		for(int i=0;i<k;i++){
			if(a[i][1]>=1000000) {cout<<a[i][0]<<endl; f=0;}
		}
		if(f) cout<<"NA"<<endl;
	}
}