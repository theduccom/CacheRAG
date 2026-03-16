#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,d,ice[11];
	
	while(1){
		memset(ice,0,sizeof(ice));
		cin >> n;
		if(n == 0) break;
		for(int i=0;i<n;i++){
			cin >> d;
			ice[d]++;
		}
		for(int i=0;i<10;i++){
			if(ice[i] == 0)
				cout << "-";
			for(int j=0;j<ice[i];j++)
				cout << "*";
			cout << endl;
		}
	}
	return 0;
}