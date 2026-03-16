#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

bool isprime(int x){
	if(x<=1)return false;
	if(x==2)return true;
	for(int i=2;i<sqrt(x)+1;i++){
		if(x%i==0)return false;
	}
	return true;
}

int main(void){
	int n;
	std::vector<int> v;
	for(int i=2;;i++){
		if(isprime(i)){
			v.push_back(i);
			if(i>50000)break;
		}
	}
	while(cin>>n){
		vector<int>::iterator it=lower_bound(v.begin(),v.end(),n+1);
		cout<<((*(it-1)==n)?(*(it-2)):(*(it-1)))<<" "<<*it<<endl;
	}
	return 0;
}