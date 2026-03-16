#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct data{
	string s;
	vector<int> vi;
};

bool comp(data d1, data d2){
	return d1.s < d2.s;
}

int main(){
	int n;
	vector<data> vd;
	string s;
	while(cin >> s >> n){
		int i = 0;
		while(i < vd.size() && vd[i].s != s) i++;
		if(i == vd.size()){
			data d;
			d.s = s;
			vd.push_back(d);
		}	
		vd[i].vi.push_back(n);
		sort(vd[i].vi.begin(), vd[i].vi.end());
	}
	sort(vd.begin(), vd.end(), comp);
	for(int i = 0; i < vd.size(); i++){
		cout << vd[i].s << endl;
		for(int j = 0; j < vd[i].vi.size(); j++){
			if(j != 0) cout << " ";
			cout << vd[i].vi[j];
		}
		cout << endl;
	}
	return 0;
}