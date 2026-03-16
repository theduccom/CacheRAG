#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	int n;
	while(cin >> n && n){
		vector<pair<int,int> > p;
		int d1,d2, num;
		for(int i=0;i<n;i++){
			cin >> num >> d1 >> d2;
			p.push_back(make_pair(d1+d2,num));
		}
		sort(p.begin(), p.end());
		cout << p.back().second << " " << p.back().first << endl;
 	}
}