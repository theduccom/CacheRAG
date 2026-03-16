#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
	long long n, num, price, sale;

	while(cin>>n, n!=0){
		vector<long long> vec(4001, 0);
		vector<int> a;
		while(n--){
			cin>>num>>price>>sale;
			if(find(a.begin(), a.end(), num)==a.end())a.push_back(num);
			vec[num] += price*sale;
		}
		int count=0;
		for(int i=0; i<a.size(); i++){
			if(vec[a[i]] >= 1000000){
				cout<<a[i]<<"\n";
				count++;
			}
		}
		if(!count)cout<<"NA\n";
	}	
	return 0;
}