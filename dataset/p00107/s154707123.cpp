#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	int a[3],n,w;
	while(true){
	cin>>a[0]>>a[1]>>a[2];
	if(a[0]==0&&a[1]==0&&a[2]==0)
		break;
	for(int i=0;i<2;i++){
        for(int j=2;j>i;j--){
	        if(a[j]<a[j-1]){
	        int tmp=a[j];
	        a[j]=a[j-1];
	        a[j-1]=tmp;
	        }
        }
    }
	double h=(double)sqrt((double)(a[0]*a[0])+(a[1]*a[1]))/2;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>w;
		if(h<w)
			cout<<"OK"<<endl;
		else
			cout<<"NA"<<endl;
	}
	}
    return 0;
}
 