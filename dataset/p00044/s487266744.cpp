#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int n;
	while(cin>>n){
	if(n==3)
		cout<<"2 5"<<endl;
	else{
	int i=n-1;
	while(true){
		bool t=true;
		for(int j=2;j<1+(double)sqrt((double)i);j++){
			if(i%j==0)
				t=false;
		}
		if(t==true)
			break;
		i--;
	}
	cout<<i<<" ";
	i=n+1;
	while(true){
		bool t=true;
		for(int j=2;j<1+(double)sqrt((double)i);j++){
			if(i%j==0)
				t=false;
		}
		if(t==true)
			break;
		i++;
	}
	cout<<i<<endl;
	}
	}
	return 0;
}