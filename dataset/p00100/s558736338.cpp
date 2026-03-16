#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;
typedef pair<int, ll> P;
 
int n;
 
int main(){
	while(scanf("%d", &n),n){
		vector<P> vec;
		for(int i = 0; i < n; i++){
			int x; ll p, q;
			scanf("%d%lld%lld", &x, &p, &q);
			bool ok = true;
			for(int j = 0; j < vec.size(); j++){
				if(vec[j].first == x){
					vec[j].second += p*q;
					ok = false;
					break;
				}
			}
			if(ok) vec.push_back(P(x,p*q));
		}
		bool ok = true;
		for(int i = 0; i < vec.size(); i++){
			if(vec[i].second >= 1000000){
				ok = false;
				printf("%d\n", vec[i].first);
			}
		}
		if(ok) printf("NA\n");
	}
	return 0;
}