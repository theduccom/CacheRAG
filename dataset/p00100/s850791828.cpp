#include <iostream>
#include <map>

using namespace std;

typedef long long ll;

int order[4000];
map<int, ll> sums;

int main(){
	while(true){
		int n;
		cin >> n;
		if(n == 0){ break; }
		int optr = 0;
		sums.clear();
		while(n--){
			int a;
			ll b, c;
			cin >> a >> b >> c;
			map<int, ll>::iterator it = sums.find(a);
			if(it == sums.end()){
				order[optr++] = a;
				sums.insert(pair<int, ll>(a, b * c));
			}else{
				(*it).second += b * c;
			}
		}
		bool isNA = true;
		for(int i = 0; i < optr; ++i){
			if(sums[order[i]] >= 1000000){
				cout << order[i] << endl;
				isNA = false;
			}
		}
		if(isNA){ cout << "NA" << endl; }
	}
	return 0;
}