#include<iostream>
using namespace std;
int main(){

	while(true){
		int n,max=0,num=0;
		cin>>n;
		if(n==0)break;
		for(int i=0;i<n;i++){
			int p,d1,d2;
			cin>>p>>d1>>d2;
			if(d1+d2>=max){
				max=d1+d2;
				num=p;
			}
		}
		cout<<num<<" "<<max<<endl;
	}
	return 0;
}