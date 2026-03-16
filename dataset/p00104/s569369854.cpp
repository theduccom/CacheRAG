#include <iostream>
#include <vector>
#include <bitset>

using namespace std;
typedef pair<int, int> P;

void solve()
{
	int W, H;
	while(cin >> H >> W, W, H)
	{
		bool Flag[128][128];
		for(int i = 0; i < H; ++i)
		{
			for(int j = 0; j < W; ++j)
			{
				Flag[i][j] = false;
			}
		}
		vector< vector<char> > Field(H);
		for(int i = 0; i < H; ++i)
		{
			Field[i].resize(W);
		}
		for(int i = 0; i < H; ++i)
		{
			for(int j = 0; j < W; ++j)
			{
				cin >> Field[i][j];
			}
		}
		P Pos(0, 0);
		bool LoopFlag = false;
		while(true)
		{
			if(Flag[Pos.second][Pos.first] == true)
			{
				LoopFlag = true;
				break;
			}
			Flag[Pos.second][Pos.first] = true;
			if(Field[Pos.second][Pos.first] == '>')
			{
				++Pos.first;
			}
			else if(Field[Pos.second][Pos.first] == '<')
			{
				--Pos.first;
			}
			else if(Field[Pos.second][Pos.first] == '^')
			{
				--Pos.second;
			}
			else if(Field[Pos.second][Pos.first] == 'v')
			{
				++Pos.second;
			}
			else if(Field[Pos.second][Pos.first] == '.')
			{
				break;
			}
		}
		if(!LoopFlag)
		{
			cout << Pos.first << " " << Pos.second << endl;
		}
		else
		{
			cout << "LOOP" << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}