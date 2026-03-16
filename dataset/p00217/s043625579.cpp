#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	while(true){
	cin>>n;
	if(n==0)
		break;
	int set,best=0;
	int p,d1,d2;
	for(int i=0;i<n;i++){
		cin>>p>>d1>>d2;
		if(d1+d2>best){
			best=d1+d2;
			set=p;
		}
	}
	cout<<set<<" "<<best<<endl;
	}
	return 0;
}