#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	
	while(cin >> N && N){
		int ices[10]={};
		int tmp;
		for(int i=0;i<N;i++){
			cin >> tmp;
			ices[tmp]++;
		}
		for(int i=0;i<10;i++){
			for(int j=0;j<ices[i];j++)
				cout << '*';
			if(ices[i]==0)
				cout << '-';
				cout << endl;
		}
		
	}
	return 0;
}