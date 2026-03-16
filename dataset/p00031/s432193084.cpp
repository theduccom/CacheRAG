#include <iostream>
#include <string>
using namespace std;

int main(){
	while (true)
	{
		int R[10], S[10], n, z=0;
		string str;
		R[0] = 1;
		S[0] = 0;
		for (int i = 1; i < 10; i++) {
			R[i] = R[i - 1] * 2;
			S[i] = 0;
		}
		cin >> n;
		if (cin.eof() || n == 0) { break; }
		for(int i=9;i>=0;i--){
			if(n>=R[i]){
				n -= R[i];
				S[i] += 1;
			}
		}
		for(int i=0;i<10;i++){
			if (S[i] == 1 && z==0) {
				str += to_string(R[i]);
				z = 1;
			}
			else if(S[i] == 1){
				str += " ";
				str += to_string(R[i]);
			}
		}
		cout << str << endl;
	}
	return 0;
}