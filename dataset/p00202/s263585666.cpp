#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main(void){
	int n,lim;
	bool isprime[1000001];
	memset(isprime,true,sizeof(isprime));
	isprime[1] = false;
	for(int i=2;i<1000001;i++){
		if(isprime[i] == true){
			for(int j=2;j*i<1000001;j++){
				isprime[i*j] = false;
			}
		}
	}
	
	
	while(cin >> n >> lim){
		if((n|lim) == 0) break;
		vector<int> v;
		int tmp;
		bool creatable[lim+1];
		memset(creatable,false,sizeof(creatable));
		creatable[0] = true;
		
		for(int i=0;i<n;i++){
			cin >> tmp;
			v.push_back(tmp);
		}
		for(int i=0;i<lim;i++){
			if(creatable[i]){
				for(int j=0;j<v.size();j++){
					if(i+v[j] <= lim){
						creatable[i+v[j]] = true;
					}
				}
			}
		}
		
		for(int i=lim;i>=0;i--){
			if(i==0){
				cout << "NA" << endl;
				break;
			}
			if(isprime[i] && creatable[i]){
				cout << i << endl;
				break;
			}
		}
	}
}