#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
int main() {
	int n,a,b,c;
	while(cin>>n){
		if(n==3){
			cout<<2<<" "<<5<<endl;
		}
		else{
		for(int i=n-1;i>1;i--){
			for(int j=2;j<i;j++){
				c=j;
				if(i%j==0){
					break;
				}
			}
			if(c==i-1){
				a=i;
				break;
				}
		}
		for(int i=n+1;i<100000;i++){
			for(int j=2;j<i;j++){
				c=j;
				if(i%j==0){
					break;
				}
				}
			if(c==i-1){
				b=i;
				break;			
			}
		}
		cout<<a<<" "<<b<<endl;
	}
  }
}