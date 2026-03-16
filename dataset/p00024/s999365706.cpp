#include <iostream>
using namespace std;

int main()
{
	double v;
	while(cin>>v){
		double t = v/9.8;
		double y = 4.9*t*t;
		int N;
		for(N=1;;N++){
			if(5*N-5>=y) break;
		}
		cout<<N<<endl;
	}
	return 0;
}