#include<bits/stdc++.h>

using namespace std;

int main(){

  int d,w,h;

  while(cin>>d>>w>>h,d||w||h){
	int n,r;
	cin>>n;

	for(int i=0;i<n;++i){
	  cin>>r;

	  if(2*r > sqrt(d*d + h*h) || 2*r > sqrt(h*h + w*w) || sqrt(2*r > d*d + w*w))
		cout<<"OK"<<endl;
	  else
		cout<<"NA"<<endl;
		
	}
	
  }
  
}

