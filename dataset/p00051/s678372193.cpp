// 2011/03/24 Tazoe

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		string str;
		cin >> str;

		for(int j=0; j<7; j++)
			for(int k=j+1; k<8; k++)
				if(str[j]<str[k]){
					char tmp = str[j];
					str[j] = str[k];
					str[k] = tmp;
				}

		int max = 0;
		for(int j=0; j<8; j++)
			max = max*10+(str[j]-'0');

		int min = 0;
		for(int j=7; j>=0; j--)
			min = min*10+(str[j]-'0');

		cout << max-min << endl;
	}

	return 0;
}