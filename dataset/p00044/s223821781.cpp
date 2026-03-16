#include<iostream>
using namespace std;

int main(){
	bool is_prime[100000];

	is_prime[0]=is_prime[1]=false;
	for(int i=2;i<100000;i++){
		is_prime[i]=true;
	}

	for(int i=2;i*i<100000;i++){
		if(is_prime[i]){
			for(int j=i*i;j<100000;j+=i){
				is_prime[j]=false;
			}
		}
	}

	while(true){

		int n;
		cin>>n;

		if(cin.eof()){
			break;
		}

		int tmp = n;
		while(true){
			tmp--;
			if(is_prime[tmp]==true){
				cout << tmp << " ";
				break;
			}
		}
		tmp = n;
		while(true){
			tmp++;
			if(is_prime[tmp]==true){
				cout << tmp << endl;
				break;
			}
		}
	}
	return 0; 
}
