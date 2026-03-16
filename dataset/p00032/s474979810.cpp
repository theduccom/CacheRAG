#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
using namespace std;
int stoi(string x){stringstream ss;ss<<x;int tmp;ss>>tmp;return tmp;}
string itos(int x){stringstream ss;ss<<x;return ss.str();}
int main(){
	int a,b,c,d=0,e=0;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
	if(a*a+b*b==c*c)d++;
	if(a==b)e++;
	}
	printf("%d\n%d\n",d,e);
	return 0;
}