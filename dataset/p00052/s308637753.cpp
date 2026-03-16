#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main(){
	int num=0;
	while(1){
		cin>>num;
		if(num==0)break;
		int anum=0;
		for(int i=1;i<=num;i++){
			if(i%5==0){
				int cnt=i;
				while(cnt%5==0){
					anum++;
					cnt=cnt/5;
				}
			}
		}
		cout<<anum<<endl;
	}
	return 0;
}