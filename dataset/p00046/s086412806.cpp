#include <iostream>
#define INF 1001001
using namespace std;

int main(){
	double ma=(double)-INF,mi=(double)INF;
	double tmp;
	while(cin>>tmp){
		ma=max(ma,tmp);
		mi=min(mi,tmp);
	}
	cout<<ma-mi<<endl;
}