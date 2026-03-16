#include <iostream>

using namespace std;

int main() {
	double a,m=0,s=1000000;
    while(cin>>a){
        m=max(m,a);
        s=min(s,a);
    }
    cout<<m-s<<endl;
	return 0;
}