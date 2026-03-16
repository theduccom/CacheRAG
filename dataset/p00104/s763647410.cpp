#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
//#include <map>
#include <vector>

using namespace std;



int H, W;
string map[101];


void saiki(int h, int w)
{
	
	//cout << "h = " << h << " : w = " << w << endl;
	
	if (map[h][w] == '.')
	{
		cout << w << " " << h << endl;
	} else if (map[h][w] == '1') {
		cout << "LOOP" << endl;
	} else if (map[h][w] == '>') {
		map[h][w] = '1';
		saiki(h, w + 1);
	} else if (map[h][w] == 'v') {
		map[h][w] = '1';
		saiki(h + 1, w);
	} else if (map[h][w] == '<') {
		map[h][w] = '1';
		saiki(h, w - 1);
	} else if (map[h][w] == '^') {
		map[h][w] = '1';
		saiki(h - 1, w);
	}
}


int main()
{
	while (cin >> H >> W)
	{
		if (H == 0 && W == 0) break;
		
		for (int i=0; i<H; i++)
		{
			cin >> map[i];
		}
		/*
		for (int i=0; i<H; i++)
		{
			cout << map[i] << endl;
		}
		*/
		saiki(0, 0);
	}
	
	return 0;
}