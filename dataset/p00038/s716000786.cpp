#include <bits/stdc++.h>
using namespace std;

double eps = 1e-10;

int main() {
	int s[5];
	while(scanf("%d,%d,%d,%d,%d", &s[0], &s[1], &s[2], &s[3], &s[4]) != EOF){
		sort(s, s + 5);
		int cnt[16] = {0};
		for(int i = 0; i < 5; ++i)
			cnt[s[i]]++;
		sort(cnt, cnt + 16, greater<int>());
		if(cnt[0] == 4){
			cout << "four card" << endl;
		}
		else if(cnt[0] == 3 && cnt[1] == 2){
			cout << "full house" << endl;
		}
		else if((s[0] == 1 && s[1] == 2 && s[2] == 3 && s[3] == 4 && s[4] == 5) 
				|| (s[0] == 1 && s[1] == 10 && s[2] == 11 && s[3] == 12 && s[4] == 13)
				|| (s[0] + 1 == s[1] && s[1] + 1 == s[2] && s[2] + 1 == s[3] && s[3] + 1 == s[4])){
			cout << "straight" << endl;	
		}
		else if(cnt[0] == 3){
			cout << "three card" << endl;
		}
		else if(cnt[0] == 2 && cnt[1] == 2){
			cout << "two pair" << endl;
		}
		else if(cnt[0] == 2){
			cout << "one pair" << endl;
		}
		else{
			cout << "null" << endl;
		}
		
	}
	return 0;
}