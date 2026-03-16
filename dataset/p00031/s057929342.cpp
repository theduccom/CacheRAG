#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int n , j=0;
	vector<int> v;
	while(cin>>n){
		for(int i=512 ; i>=1 ; i>>=1){
			if(n>=i){
				v.push_back(i);
				n-=i;
			}
		}
		sort(v.begin(),v.end());
		vector<int>::iterator it;
		for(it=v.begin();it!=v.end()-1;++it){
			cout << *it << " ";
		}
		cout << *it << endl;
		v.clear();
	}
	return 0; 
}