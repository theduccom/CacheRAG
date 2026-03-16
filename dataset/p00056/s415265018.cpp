#include <iostream>
using namespace std;

bool is_prime(int n){
	if(n<=1) return false;
	for(int i=2;i*i<n;i++){
		if(n%i==0) return false;
	}
 return true;
}
	
int main(){
	bool p[100000];
	p[0]=p[1]=false;
	for(int i=2;i<100000;i++){
		p[i]=true;
	}
	for(int i=2;i*i<100000;i++){
		if(p[i])
			for(int j=i*i;j<100000;j+=i){
				p[j]=false;
			}
	}

	while(1){
		int count=0;
		int N;
		cin>>N;
		if(N==0)
			break;
		for(int i=2;i<(N/2)+1;i++){
			if(p[i]&&p[N-i])
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}