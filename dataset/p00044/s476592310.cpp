#include "bits/stdc++.h"

using namespace std;
 
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

bool era[60000];

void makeERA(){
	for(int i=0;i<60000;i++){
		if(era[i]==true){
			for(int j=2;j*i<60000;j++){
				era[j*i]=false;
			}
		}
	}
}


int main(){
	for(int i=2;i<60000;i++){
		era[i]=true;
	}

	makeERA();


	vector<int> prime;

	for(int i=0;i<60000;i++){
		if(era[i]==true)prime.push_back(i);
	}


	int n;
	while(cin>>n){
	
		for(int i=0;i<prime.size();i++){
			if(prime[i]==n){
				cout<<prime[i-1]<<" "<<prime[i+1]<<endl;
				break;
			}
			else if(prime[i]>n){
				cout<<prime[i-1]<<" "<<prime[i]<<endl;
				break;
			}
		}
	}
	return 0;
}