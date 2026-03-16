#include <iostream>
using namespace std;
#define MAX 10005
#define MAXL 1000000
//const MAX  = 10001;
int ans[MAX];

int main(){
	int n;
	static bool c[MAXL]={true, true};
	for(int i = 2;i < MAXL;i++){
		if(!c[i]){
			for(int j = 2;i*j < MAXL;j++)c[i*j] = true;
		}
	}
	int j = 1;
	for(int i = 1;j < MAX;i++){
		if(!c[i])ans[j] += ans[j-1] + i, j++;
	}
	//for(int i = 0;i < 10;i++)cout << ans[i] << " ";
	while(cin >> n, n){
		cout << ans[n] << endl;
	}
	return 0;
}
/*
2
9
0
*/