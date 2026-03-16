#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,tmp[]={512,256,128,64,32,16,8,4,2,1};
	while(cin >> n){
		int cou[10]={0};
		for(int i=0;i<10;i++){
			if(n-tmp[i]>=0){
				n-=tmp[i];
				cou[i]++;
			}
			if(n==0) break;
		}
		int flag = 0;
		for(int i=9;i>=0;i--){
			if(cou[i] == 1){
				if(flag == 1) cout << " ";
				cout << tmp[i];
				flag = 1;
			}
		}
		cout << endl;
	}
}