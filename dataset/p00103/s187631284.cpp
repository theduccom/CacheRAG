#include<iostream>
#include<string>
using namespace std;

int main()
{
	string buf;
	getline(cin, buf);
	int N;
	N = stoi(buf);
	int runCount = 0;
	int Run = 0;
	int outCount = 0;

	while(1)
	{
		if(N == 0)
		{
			return 0;
		}
		string str;
		getline(cin, str);
		if(str == "HOMERUN")
		{
			Run += runCount + 1;
			runCount = 0;
		}
		else if(str == "HIT")
		{
			runCount++;
			if(runCount == 4)
			{
				Run++;
				runCount = 3;
			}

		}
		else if(str == "OUT")
		{
			outCount++;
			if(outCount == 3)
			{
				cout << Run << endl;
				outCount = 0;
				runCount = 0;
				Run = 0;
				N--;

			}

		}

	}



}