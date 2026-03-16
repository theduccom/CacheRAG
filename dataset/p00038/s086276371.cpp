#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
	int a[5],n;
	char com;
	while(cin>>a[0]>>com>>a[1]>>com>>a[2]>>com>>a[3]>>com>>a[4]){
		sort(a,a+5);
		int n=0;
		for(int i=0;i<5;i++)
			for(int j=i+1;j<5;j++)
				if(a[i]==a[j])n++;
		switch(n){
			case 1:cout<<"one pair"<<endl;break;
			case 2:cout<<"two pair"<<endl;break;
			case 3:cout<<"three card"<<endl;break;
			case 4:cout<<"full house"<<endl;break;
			case 6:cout<<"four card"<<endl;break;
			default:
				bool f=true;
				if(a[0]==1&&a[4]==13)a[0]=14;
				sort(a,a+5);
				for(int i=1;i<5;i++)if(a[0]+i!=a[i])f=false;
				if(f)cout<<"straight"<<endl;
				else cout<<"null"<<endl;
		}
	}
	return 0;
}