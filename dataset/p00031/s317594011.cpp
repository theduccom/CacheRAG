#include<iostream>
using namespace std;
main(){
	for(int W,i,f;cin>>W;cout<<endl)
		for(i=f=1;W/i;i*=2)
			W&i&&(cout<<" "+f<<i,f=0);
}
