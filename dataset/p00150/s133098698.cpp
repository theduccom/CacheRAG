#include<iostream>
using namespace std;
bool flag[10000001];
int main(){
    for(int i=0;i <= 1000000;i++){
		if(i<=1)flag[i]=false;
		else flag[i]=true;
	}
	for(int i=2;i <= 1001 ;i++){
		if(flag[i]==true){
			for(int j=i*2 ; j<=1000000 ; j=j+i){
				flag[j] = false;
			}
		}
	}
	int n;
	while(cin>>n,n){
        for(int i=n;i!=1;i--){
            if(flag[i]&flag[i-2]){
                cout<<i-2<<" "<<i<<endl;
                break;
            }
        }
	}

    return 0;
}