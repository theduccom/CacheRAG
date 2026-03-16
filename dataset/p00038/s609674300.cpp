#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <map>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int card[5];
	while(1){
		rep(i, 5){
			if(scanf("%d,", &card[i]) == EOF)
				return 0;
		}
		
		sort(card, card+5);

		int cnt[4] = {0};
		rep(i, 5){
			cnt[0]++;
			int j=1;
			for(j=1; i+j<5 && card[i+j]==card[i]; ++j){
				cnt[j-1]--;
				cnt[j]++;
			}
			i += j-1;
		}
		if(cnt[3])
			puts("four card");
		else if(cnt[2] && cnt[1])
			puts("full house");
		else if(cnt[0]==5 && (card[4]-card[0]==4 || (card[0]==1 && card[1]==10)))
			puts("straight");
		else if(cnt[2])
			puts("three card");
		else if(cnt[1] == 2)
			puts("two pair");
		else if(cnt[1])
			puts("one pair");
		else
			puts("null");
	}
}