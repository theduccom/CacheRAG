#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <bitset>
#include <complex>
using namespace std;
 
const double EPS = 1e-9;
const double PI = 3.14159265359;
 
typedef complex<double> P;

typedef long long int li;

int main(){
	int n;

	while(cin >> n, n){
		vector<li> sales(4001);
		queue<int> in;
		int num;
		li tanka, kazu;
		for(int i = 0; i < n; i++){
			cin >> num >> tanka >> kazu;
			if(!sales[num]){
				in.push(num);
			}
			sales[num] += tanka*kazu;
		}

		bool NA = true;
		while(in.size()){
			if(sales[in.front()] >= 1000000){
				cout << in.front() << endl;
				NA = false;
			}
			in.pop();
		}
		if(NA){
			cout << "NA" << endl;
		}
	}

    return 0;
}