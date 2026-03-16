#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

#define PSI pair<string,int>

vector<PSI> book;

int main(void){
	int x;
	char tmp[1024];
	while(scanf("%s%d",tmp,&x)!=EOF){
		string a;
		a = tmp;
		book.push_back(PSI(a,x));
	}
	
	sort(book.begin(),book.end());
	
	for(int i = 0; i < book.size(); i++){
		vector<int> ans;
		puts(book[i].first.c_str());
		ans.push_back(book[i].second);
		while(i+1<book.size() && book[i+1].first==book[i].first){
			i++;
			ans.push_back(book[i].second);	
		}
		sort(ans.begin(),ans.end());
		for(int j = 0; j < ans.size(); j++){
			if(j != 0)printf(" ");
			printf("%d",ans[j]);
		}puts("");
		
	}
	return 0;
}