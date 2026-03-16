#include <iostream>
#include <string>
using namespace std;
string tiles[100];
int main()
{
	int X,Y;
	while(1)
	{
		cin >> Y >> X ;
		if(X==0 && Y==0) break;
		for(int i=0;i<Y;i++) cin >> tiles[i] ;
		bool Loop=false; bool flag[100][100]={false};

		int curr_x=0; int curr_y=0; flag[0][0]=true;
		while(tiles[curr_y][curr_x]!='.')
		{
			if(tiles[curr_y][curr_x]=='>') curr_x++;
			else if(tiles[curr_y][curr_x]=='<') curr_x--;
			else if(tiles[curr_y][curr_x]=='^') curr_y--;
			else if(tiles[curr_y][curr_x]=='v') curr_y++;
			if(flag[curr_y][curr_x]==true) {Loop=true; break;}
			else flag[curr_y][curr_x]=true;
		}
		if(Loop==true) cout << "LOOP" << endl;
		else cout << curr_x << ' ' << curr_y << endl;
	}
}