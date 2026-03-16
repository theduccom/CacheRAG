//0073
#include <bits/stdc++.h>
using namespace std;

int main(){
	double x,h,S_ans,S_teimen,S_sokumen;
	while(cin>>x>>h,x != 0&&h != 0){
		S_teimen = x * x;
		S_sokumen = 2 * x * sqrt(pow(x/2,2)+pow(h,2));

		S_ans = S_teimen + S_sokumen;
		printf("%0.7f\n",S_ans );
	}
	return 0;
}