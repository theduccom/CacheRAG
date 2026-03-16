#include <iostream>
#include <string>
using namespace std;

int main(){
	int count, n;
	string moji;
	int s = 0;
	

	while(cin >> moji){

		count = moji.size();

		if(count % 2 == 0){
			n = count / 2;
		}
		else{
			n = count / 2 + 1;
		}

		bool flag = true;
		for(int i = 0; i < n; i++){
			if(flag){
				if(moji[i] == moji[count - 1]){
					count--;
					flag = true;
					continue;
				}
				else{
					flag = false;
				}
			}
			else{
				break;
			}
		}
		if(flag){
			s++;
		}
	}

	cout << s << endl;
}