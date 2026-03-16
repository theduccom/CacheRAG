#include <iostream>
using namespace std;
int main(){
	int A,B,C,n,R;
	while(cin>>A>>B>>C,A+B+C){
		int t=min(A*A+B*B,min(B*B+C*C,C*C+A*A));
		cin>>n;
		while(n--){
			cin>>R;
			cout<<(t<4*R*R?"OK":"NA")<<endl;
		}
	}
}