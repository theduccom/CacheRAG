#include<iostream>
#include<map>
using namespace std;

int main(){
	int n;
	while(1){
		map<int, long long> mp;
		bool isNA = false;
		cin >> n;
		if(n==0)break;
		while(n){
			int id,price,number;
			cin >> id >> price >> number;
			//cout << number;
			if(mp[id]<1000000 && mp[id]+(long long)price*number>=1000000){
				cout << id << endl;
				isNA =true;
			}
			mp[id]+=(long long)price*number;
			n--;
		}
		if(!isNA) cout << "NA" <<endl;
	}
	return 0;	
}