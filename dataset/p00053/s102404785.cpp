#include <iostream>
#include <vector>
using namespace std;

bool isprime[1000001];

int main(){
	vector<int> v;
	// init
	for(int i = 0 ; i <= 1000000 ; i++)
		isprime[i] = true;
	isprime[0] = isprime[1] = false;
	
	// eratosuteneru
	for(int i = 2 ; i*i <= 1000000 ; i++){
		if( isprime[i] ){ 
			for(int j = i*i ; j <= 1000000 ; j += i ){
				isprime[j] = false;
			}
		}
	}
	
	for(int i = 0 ; i <= 1000000 ; i++){
		if( isprime[i] ){
			v.push_back(i);
		}
	}
	for(int i = 1 ; i < v.size() ; i++){
		v[i] = v[i] + v[i-1];
	}
	int n;
	while( cin >> n && n ){
		cout << v[n-1] << endl;
	}
}