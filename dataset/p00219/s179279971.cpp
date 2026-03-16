
#include<iostream>
using namespace std;

int main(){
	int n;
	while( cin >> n ){
		if( n == 0 )
			break;
		int cnt[10] = {0};
		for(int i = 0;i < n;i++ ){
			int num;
			cin >> num;
			cnt[num]++;
		}
		for(int i = 0;i < 10;i++ ){
			if( cnt[i] == 0 ){
				cout << "-" << endl;
			}
			else{
				for(int j = 0;j < cnt[i];j++)
					cout << "*";
				cout << endl;
			}
		}
	}
	return 0;
}