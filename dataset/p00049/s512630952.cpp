// 2011/07/01 Tazoe

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int cnt[4] = {0};

	while(true){
		string str;
		cin >> str;
		if(cin.eof())
			break;

		for(int i=0; i<str.size(); i++)
			if(str[i]==',')
				str[i] = ' ';

		istringstream ist(str);
		string num, bld;
		ist >> num >> bld;

		if(bld=="A")
			cnt[0]++;
		else if(bld=="B")
			cnt[1]++;
		else if(bld=="AB")
			cnt[2]++;
		else if(bld=="O")
			cnt[3]++;
	}

	for(int i=0; i<4; i++)
		cout << cnt[i] << endl;

	return 0;
}