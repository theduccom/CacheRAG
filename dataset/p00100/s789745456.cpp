#include <iostream>
using namespace std;
typedef long long ll;

ll em[4000];
int flag[4000];

int main(){
	int n;
	while(true){
		int id,p,q;
		cin >> n;
		if(!n) return 0;
		for(int i = 0; i < n; i++){
			cin>>id>>p>>q;
			em[id-1] += (ll)p * q;
			flag[i] = id;
		}
		int f = 1;
		for(int i = 0; i < n; i++){
			if(em[flag[i]-1] >= 1000000){
				cout << flag[i] << endl;
				f = 0;
			}
			em[flag[i]-1] = 0;
		}
		if(f) cout << "NA" << endl;
	}
	return 0;
}