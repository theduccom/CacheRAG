#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int power10(int n){
	int m = 1;
	for(int i=0 ; i<n ; i++, m*=10);
	return m;
}

int main(){
	vector<int> hoge;
	char s[10];
	int n, min, max, ans;

	scanf("%d", &n);
	for(int i=0 ; i<n ; i++){
		hoge.clear();
		max = 0;
		min = 0;
		
		scanf("%s", s);

		for(int j=0 ; j<8 ; j++){
			hoge.push_back(s[j]-48);
		}
		sort( hoge.begin() , hoge.end() );
		for(int j=0 ; j<8 ; j++){
			max += hoge[7-j]*power10(7-j);
			min += hoge[j]*power10(7-j);
		}
		ans = max - min;
		printf("%d\n",ans);
	}	
	return 0;
}