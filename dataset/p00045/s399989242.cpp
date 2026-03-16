#include <iostream>
using namespace std;
int main(){
	int sum,sold,num,count;char ch;
	sum=0;count=0;int nsum=0;
	while(cin >> sold >> ch >> num ){
		sum+=sold*num;count++;nsum+=num;
	};
	double ave;int ans;
	ave=(double)nsum/count;
	if((int)(ave*10)%10>=5) ans=(int)ave+1;
	else ans=(int)ave;
	cout << sum << '\n' << ans << '\n' ;
}