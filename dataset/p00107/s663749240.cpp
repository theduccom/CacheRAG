#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(void){
	std::ios_base::sync_with_stdio();
	int t,y,n;
	int data[3];
	double ja;
	int nn;
	int iri;

	while(cin>>t>>y>>n){
		if(t==0&&y==0&&n==0) break;
		data[0]=t,data[1]=y,data[2]=n;
		sort(data,data+3);
		ja=sqrt((data[1]*data[1])+(data[0]*data[0]));
		cin>>nn;
		for(int i=0;i<nn;i++){
			cin>>iri;
			if(2*iri>ja) cout<<"OK"<<endl;
			else cout<<"NA"<<endl;
		}
	}
	return 0;
}