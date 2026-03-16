#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin >> n){
		if(n==0)
			break;
		int ice[10] = {0};
		int icenum;
		for(int i=0;i<n;i++){
			cin >> icenum;
			ice[icenum]++;
		}
	
		for(int i=0;i<10;i++){
			if(ice[i]==0)
				cout << "-";
			for(int j=0;j<ice[i];j++){
				cout << "*" ;
			}
			cout << endl;
		}
	}
	return 0;
}