#include<iostream>
using namespace std;
int main(){
	bool num[1000000] = {0};
	for(int i=2; i<1000; i++){
		if(!num[i]){
			for(int j=i*i; j<1000000; j+=i){num[j] = 1;}
		}
	}
	for(;;){
		int n,sum = 0;
		cin >>n;
		if(n == 0){break;}
		for(int i=2; n>0; i++){
			if(!num[i]){n--;sum+=i;}
		}
		cout <<sum<<endl;
	}
	return 0;
}