#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	vector<int> c(5);
	char a;
	while(cin >> c[0] >> a >> c[1] >> a >> c[2] >> a >> c[3] >> a >> c[4]){
		bool yaku=false;
		int cnt[5]={0};
		sort(c.begin(),c.end());
		if((c[0]==(c[1]-1) && c[0]==(c[2]-2) && c[0]==(c[3]-3) && c[0]==(c[4]-4)) || (c[0]==1 && c[1]==10 && c[2]==11 && c[3]==12 && c[4]==13)) {cout << "straight" << endl ; continue;} 
		for(int i=0;i<5;++i){
			for(int j=i+1;j<5;++j){
				if(c[i]==c[j] && c[i]!=-1) cnt[i]++, c[j]=-1; 
			}
		}
		for(int i=0;i<5;++i){
			if(cnt[i]==3) {cout << "four card" << endl;yaku=true; break;}
			else if(cnt[i]==2) {
				if(cnt[3]==1) {cout << "full house" << endl; yaku=true;  break;}
				else {cout << "three card" << endl; yaku=true; break;}
			}
			else if(cnt[i]==1) {
				if(cnt[2]==2) {cout << "full house" << endl;yaku=true; break;}
				else if (cnt[i+2]==1|| cnt[i+3]==1) {cout << "two pair" << endl; yaku=true; break;}
				else {cout << "one pair" << endl; yaku=true; break;} 
			}
		}
		if (!yaku) cout << "null" << endl;
	}
	return 0; 
}