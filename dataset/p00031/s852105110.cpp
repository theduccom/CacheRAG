#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
	int n;
	while(cin>>n){
		int m[10]={0};
		int i=0;
		for(int max = 1024;max /= 2;max<1){
			if(n>=max){
//				cout<<max<<" "<<n<<endl;
				n=n-max;
				m[i++]=max;
//				cout<<max<<endl;
			}
		}
		
		sort(m,m+10);
		for(i=0;i<10;i++)
			if(m[i]!=0){
				cout<<m[i];
				break;
			}
		for(int j=i+1;j<10;j++)
			if(m[j]!=0)cout<<" "<<m[j];
		cout<<endl;
	}
}