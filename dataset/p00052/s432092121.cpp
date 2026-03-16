#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,f;
	while(true){
		cin>>n;
		if(n==0)
			break;
		f=0;
		for(int i=5;i<=n;i++){
			int j=5;
			while(true){
				if(i%j==0)
					f++;
				else
					break;
				j*=5;
			}
		}
		cout<<f<<endl;
	}
	return 0;
}