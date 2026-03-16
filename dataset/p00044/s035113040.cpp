#include<iostream>
using namespace std;
bool notp[51001] = {true,true,false};
void prime(){
	int i,j;
	i=2;
	while(i<=226){
		j=i*i;
		while(j<=51000){
			notp[j] = true;
			j += i;
		}
		i++;
		while(i<=226){
			if(notp[i] == false) break;
			i++;
		}
	}
}

int main(){
	int i,up, low, n;
	prime();/*
	for(i=0;i<100;i++){
		if(notp[i]==false)cout<<i<<endl;
	}*/
	while(cin>>n){
		i=n+1;
		while(true){
			if(notp[i] == false){
				up=i;
				break;
			}
			i++;
		}
		i=n-1;
		while(true){
			if(notp[i] == false){
				low=i;
				break;
			}
			i--;
		}
		cout<<low<<" "<<up<<endl;
	}
	return 0;
}