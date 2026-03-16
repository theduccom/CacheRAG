// 2011/04/02 Tazoe

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cnt = 0;

	while(!cin.eof()){
		string str;
		getline(cin, str);
		if(str.empty())
			continue;

		bool pal = true;
		for(int i=0, j=str.size()-1; i<=j; i++, j--)
			if(str[i]!=str[j]){
				pal = false;
				break;
			}

		if(pal)
			cnt++;
	}

	cout << cnt << endl;

	return 0;
}