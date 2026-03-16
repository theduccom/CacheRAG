#include <iostream>
using namespace std;

int main() {
	int x,y;
	int sum,i;
	int tmp;
	char c;
	sum=i=0;
	tmp=0;
	
	while(cin>>x>>c>>y){
		sum+=x*y;
		tmp+=y;
		i++;
	}
	
	cout<<sum<<endl;
	cout<<(int)(1.0*tmp/i+0.5)<<endl;
	return 0;
}