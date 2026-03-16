#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	char s[50];
	int a, cnt = 0;
	pair <string, vector <int> > res[128];
	while (scanf("%s %d", s, &a) != EOF){
		bool flag = false;
		for (int i = 0; i < cnt; i++){
			if (res[i].first == s){
				res[i].second.push_back(a);
				flag = true;
				break;
			}
		}
		if (!flag){
			res[cnt].first = s;
			res[cnt].second.push_back(a);
			cnt++;
		}
	}
	sort(res, res + cnt);
	for (int i = 0; i < cnt; i++){
		sort(res[i].second.begin(), res[i].second.end());
	}
	
	for (int i = 0; i < cnt; i++){
		cout << res[i].first << endl;
		for (int j = 0; j < res[i].second.size(); j++){
			cout << res[i].second[j];
			if (j+1 != res[i].second.size()) cout << " ";
			else puts("");
		}
	}
	
	return 0;
}