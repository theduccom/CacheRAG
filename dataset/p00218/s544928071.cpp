#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	
	while(cin >> N && N){
		int m,e,j;
		for(int i=0;i<N;i++){
			cin >> m >> e >> j;
			if(max(m,max(e,j))==100 || (m+e)>=180 || m+e+j>= 240)
			cout <<"A" << endl;
			else if(m+e+j>=210 || (m+e+j>=150 && max(e,m)>=80))
			cout <<"B" << endl;
			else 
			cout << "C" << endl;
		}
	}
	return 0;
}