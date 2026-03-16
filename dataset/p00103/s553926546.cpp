#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,a[5];
	string b;
	cin>>n;
	int out;
	for(int i=0;i<n;i++){
		out=0;
		for(int i=0;i<5;i++)
		a[i]=0;
		while(true){
			cin>>b;
			a[0]=1;
			if(b=="HIT"){
				a[4]+=a[3];
				a[3]=a[2];
				a[2]=a[1];
				a[1]=1;
		    }
			if(b=="HOMERUN"){
				a[4]+=a[3]+a[2]+a[1]+1;
				a[3]=0;
				a[2]=0;
				a[1]=0;
			}
			if(b=="OUT"){
				out++;
				if(out==3)
					break;
			}
		}
		cout<<a[4]<<endl;
	}
	return 0;
}