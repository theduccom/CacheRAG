#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	while(cin >> N && N!=-1){
	int sum=0;
		sum+=1150;
		if(N>10)
		sum+=(min(20,N)-10)*125;
		if(N>20)
		sum+=(min(30,N)-20)*140;
		if(N>30)
		sum+=(N-30)*160;
		cout << 4280-sum << endl;
	}
	return 0;
}