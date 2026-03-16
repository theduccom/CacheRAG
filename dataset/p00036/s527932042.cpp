#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(void)
{
	string str[8];

	while(cin >> str[0]){

		int c[8][8];
		int p[4];
		int count = 0;

		for(int i=1; i<8; i++)
			cin >> str[i];

		for(int i=0; i<8; i++)
		{
			for(int j=0; j<8; j++)
			{
				c[i][j] = atoi(str[i].substr(j,1).c_str());
				if(c[i][j])
				{
					p[count] = i*10 + j;
					count++;
				}
			}
		}

		if( p[0] + 1 == p[1] && p[0] + 10 == p[2] && p[0] + 11 == p[3] )
			cout << "A" << endl;
		else if( p[0] + 10 == p[1] && p[0] + 20 == p[2] && p[0] + 30 == p[3] )
			cout << "B" << endl;
		else if( p[0] + 1 == p[1] && p[0] + 2 == p[2] && p[0] + 3 == p[3] )
			cout << "C" << endl;
		else if( p[0] + 9 == p[1] && p[0] + 10 == p[2] && p[0] + 19 == p[3] )
			cout << "D" << endl;
		else if( p[0] + 1 == p[1] && p[0] + 11 == p[2] && p[0] + 12 == p[3] )
			cout << "E" << endl;
		else if( p[0] + 10 == p[1] && p[0] + 11 == p[2] && p[0] + 21 == p[3] )
			cout << "F" << endl;
		else if( p[0] + 1 == p[1] && p[0] + 9 == p[2] && p[0] + 10 == p[3] )
			cout << "G" << endl;

	}

	return 0;
}