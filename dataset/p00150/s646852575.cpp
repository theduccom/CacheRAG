#include<iostream>

using namespace std;

bool prime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
	return true;
}

int main(){
	int n;
	while(cin>>n,n!=0){
		while(true){
			if(prime(n)&&prime(n-2)){
				cout<<n-2<<" "<<n<<endl;
				break;
			}
			n--;
		}
	}
	return 0;
}