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
	double x,h;
	while(true){
	scanf("%lf%lf",&x,&h);if(x==0&&h==0)break;
	double ans=x*x+2*x*sqrt((x/2)*(x/2)+h*h);
	printf("%.50lf\n",ans);
	}

	return 0;
}