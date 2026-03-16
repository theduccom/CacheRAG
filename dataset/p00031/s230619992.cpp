#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int n;
	while(cin>>n){
		int mul=1;
		vector<int> v;
		while(n!=0){
			if(n%2==1){
				v.push_back(mul);
			}
			mul*=2;
			n/=2;
		}
		for(int i = 0; i < v.size(); i++){
			cout<<v[i];
			if(i!=v.size()-1)
				cout<<" ";
			else
				cout<<endl;
		}
	}

	return 0;
}