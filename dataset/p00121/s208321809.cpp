#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <iomanip>

#define ll long long int
#define pb push_back
#define mk make_pair
#define pq priority_queue

using namespace std;
typedef pair<int, int> P;
typedef pair<ll, int> Pl;
const int inf = 1e9;
const ll linf = 1LL << 50;

map<string, int> mp;
int dx[4] = {-1, 1, -4, 4};

void bfs(){
		queue<string> q;
		q.push("01234567");
		mp["01234567"] = 0;
		while(!q.empty()){
				string s = q.front(); q.pop();
				int zero = -1;
				for(int i = 0; i < 8; i++){
						if(s[i] == '0')zero = i;
				}
				for(int i = 0; i < 4; i++){
						int ni = zero + dx[i];
						if(ni < 0 || ni > 7)continue;
						if(ni == 4 && zero == 3)continue;
						if(ni == 3 && zero == 4)continue;
						string stt = s;
						stt[zero] = stt[ni];
						stt[ni] = '0';
						if(mp.find(stt) != mp.end())continue;
						mp[stt] = mp[s] + 1;
						q.push(stt);
				}
		}
}

int main(int argc, char const* argv[])
{
	string s = "01234556";
	int a;
	bfs();
	while(cin >> a){
			s[0] = a + '0';
			for(int i = 1; i < 8; i++){
					cin >> a;
					s[i] = a + '0';
			}
			cout << mp[s] << endl;
	}
	return 0;
}

