#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0) break;
		int p[2][10001], d1, d2;
		vector<int> pp;
		for(int i=0;i<n;i++){
			cin>>p[0][i]>>d1>>d2;
			p[1][i] = d1 + d2;
			pp.push_back(d1+d2);
		}

		sort(pp.begin(), pp.end());

		for(int i=0;i<n;i++){
			if(pp[pp.size()-1] == p[1][i]){
				cout<<p[0][i]<<" "<<p[1][i]<<endl;
				break;
			}
		}

	}
	return 0;
}