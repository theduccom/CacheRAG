#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	bool num[50001] = {0};
	for(int i=2; i<50001; i++){
		if(!num[i]){
			for(int j=i*2; j<50001; j+=i){num[j] = true;}
		}
	}
	for(;;){
		int n,sum = 0;
		cin >>n;
		if(n == 0){break;}
		for(int i=2; i<=n/2; i++){
			if(!num[i] && !num[n-i]){sum++;}
		}
		cout <<sum<<endl;
	}
	return 0;
}