#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

bool prNum(int n){
	if(n<2)return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)return false;
	}
	return true;
}

int main(){
	int n;
	while(cin>>n){
		//cout<<n<<endl;
		for(int i=n-1; i>1; i--){
			if(prNum(i)){
				cout<<i<<" ";
				break;
			}
		}
		for(int i=n+1; ; i++){
			if(prNum(i)){
				cout<<i<<endl;
				break;
			}
		}
		if(cin.eof())break;
	}

}