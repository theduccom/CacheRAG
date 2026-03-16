#include<iostream>
#define N 110000
using namespace std;
int main(){
  	bool num[N] ;
	for(int i =0;i<N;i++)
		num[i] = true;
	num[0] = false; num[1] = false;
	for(int i=2;i*i<N;i++){
	if(num[i] == true){
		for(int k = i * 2;k<N;k +=i)
		num[k] = false;
	}
	}
	
	int n;
	while(1){
	cin >> n;
	if(n == 0){
	 return 0;
	}
	long long s =0;
	for(int i=0;i<n;i++){
		for(int k=0;i<n;k++){
		if(num[k] == true){
			s = s + k; i++;
			}
		}
	}
	 cout << s << endl;
	
	}

}