// 2011/07/02 Tazoe

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	while(true){
		string str;
		cin >> str;
		if(cin.eof())
			break;

		for(int i=0; i<str.size(); i++)
			if(str[i]==',')
				str[i] = ' ';

		istringstream ist(str);
		int l[11], v1, v2;
		int tot = 0;
		for(int i=1; i<=10; i++){
			ist >> l[i];
			tot += l[i];
		}
		ist >> v1 >> v2;

		int pas = tot*v1;
		int sum = 0;
		for(int i=1; i<=10; i++){
			sum += l[i];
			if(sum*(v1+v2)>=pas){
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}