#include <cstdio>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	map <string, vector<int> > book;
	char s[30];
	int n;
	
	while(scanf("%s %d", s, &n) != EOF){
		string str = s;
		book[str].push_back(n);
	}
#ifdef ONLINE_JUDGE
	for (const auto& kv : book){
		puts(kv.first.c_str());
		sort(kv.second.begin(), kv.second.end());
		for (int i = 0; i < (int)it->second.size(); i++){
			printf("%d%c", kv.second[i], " \n"[i == (int)kv.second.size() - 1]);
		}
	}
#else
	for (map<string, vector<int> >::iterator it = book.begin(); it != book.end(); ++it){
		printf("%s\n", it->first.c_str());
		sort(it->second.begin(), it->second.end());
		for (int i = 0; i < (int)it->second.size(); i++){
			printf("%d%c", it->second[i], " \n"[i == (int)it->second.size() - 1]);
		}
	}
#endif
	return(0);
}