//メモリ数確認したか?
#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
typedef long long int ll;

int main()
{
	while(true){
    string s[10];
	int n,a;
	scanf("%d",&n);
	if(n==0)return 0;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		s[a]+="*";
	}
	for(int i=0;i<10;i++){
		if(s[i].length()==0)printf("-\n");
		else cout << s[i] << "\n";
	}
	}
    return 0;
}
//メモリ数確認したか?