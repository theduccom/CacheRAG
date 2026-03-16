#include <iostream>
using namespace std;

int main()
{
	char s[16][16]={0};
	while(cin >> s[0])
	{
		int y,x; char c;
		for(y=1; y<8; y++)
		cin >> s[y];

		for(y=0; y<8; y++)
		for(x=0; x<8; x++)
		s[y][x]-='0';

		for(y=0; y<64; y++)
		if(s[y/8][y%8])break;

		x=y%8; y/=8;

		     if(s[y+3][x  ]) c='B';
		else if(s[y  ][x+3]) c='C';
		else if(s[y+1][x+2]) c='E';		
		else if(s[y+2][x+1]) c='F';
		else if(s[y+1][x+1]) c='A';
		else if(s[y  ][x+1]) c='G';
		else                 c='D';

		cout << c << endl;
	}
}