#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int nijyou(int i ){return i*i;}
int main() {
	while(1){
	int a[3];
	cin>>a[0] >>a[1]>>a[2];
	if(a[0]==0&&a[1]==0&&a[2]==0){break;}
	sort(a,a+3);
	int n;
	cin>>n;
	double y = sqrt(nijyou(a[0])+nijyou(a[1]));
	for(int i = 0;i<n;i++){
		double k;
		cin>>k;
		if(k*2>y){cout<<"OK"<<endl;}
		else{cout<<"NA"<<endl;}
	}
	}
	return 0;
}