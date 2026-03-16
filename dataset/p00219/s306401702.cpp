#include <iostream>
using namespace std;
int main()
{

	int n;

	while(true){
		cin >> n;
		if(n==0)
			break;

		int ice[10];
		int x;
		int c=0;
		
		for(int i=0 ;i<10 ;i++){
			ice[i] = 0;
		}
		for(int i=0 ;i<n ;i++){
			cin >> x;
		
			for(int j=0; j<10 ;j++){
				if(j==x){
					ice[j]++;
				}
			}
		}
		for(int i=0 ;i<10 ;i++){
			if(ice[i] > 0){
				for(int j=0 ;j<ice[i] ;j++){
					cout << '*' ;
				}
				cout << endl;
			}
			else if(ice[i] == 0)
				cout << '-' << endl;
		}
	}

	return 0;
}