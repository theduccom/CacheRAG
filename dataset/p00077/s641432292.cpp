// 2011/04/03 Tazoe

#include <iostream>
#include <string>
using namespace std;

int main()
{
	while(true){
		string str;
		cin >> str;
		if(cin.eof())
			break;

		for(int i=0; i<str.size(); i++){
			if(str[i]=='@'){
				i++;
				int n = str[i]-'0';
				i++;
				for(int j=0; j<n; j++)
					cout << str[i];
			}
			else{
				cout << str[i];
			}
		}
		cout << endl;
	}

	return 0;
}