// 2011/07/12 Tazoe

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
		int num[5];
		for(int i=0; i<5; i++)
			ist >> num[i];

		for(int i=0; i<4; i++)
			for(int j=i+1; j<5; j++)
				if(num[i]>num[j]){
					int tmp = num[i];
					num[i] = num[j];
					num[j] = tmp;
				}

		if(num[0]==num[1]&&num[1]==num[2]&&num[2]==num[3])
			cout << "four card" << endl;
		else if(num[1]==num[2]&&num[2]==num[3]&&num[3]==num[4])
			cout << "four card" << endl;
		else if(num[0]==num[1]&&num[1]==num[2]&&num[3]==num[4])
			cout << "full house" << endl;
		else if(num[0]==num[1]&&num[2]==num[3]&&num[3]==num[4])
			cout << "full house" << endl;
		else if(num[0]+1==num[1]&&num[1]+1==num[2]&&num[2]+1==num[3]&&num[3]+1==num[4])
			cout << "straight" << endl;
		else if(num[0]==1&&num[1]==10&&num[2]==11&&num[3]==12&&num[4]==13)
			cout << "straight" << endl;
		else if(num[0]==num[1]&&num[1]==num[2])
			cout << "three card" << endl;
		else if(num[1]==num[2]&&num[2]==num[3])
			cout << "three card" << endl;
		else if(num[2]==num[3]&&num[3]==num[4])
			cout << "three card" << endl;
		else if(num[0]==num[1]&&num[2]==num[3])
			cout << "two pair" << endl;
		else if(num[0]==num[1]&&num[3]==num[4])
			cout << "two pair" << endl;
		else if(num[1]==num[2]&&num[3]==num[4])
			cout << "two pair" << endl;
		else if(num[0]==num[1])
			cout << "one pair" << endl;
		else if(num[1]==num[2])
			cout << "one pair" << endl;
		else if(num[2]==num[3])
			cout << "one pair" << endl;
		else if(num[3]==num[4])
			cout << "one pair" << endl;
		else
			cout << "null" << endl;
	}

	return 0;
}