#include<iostream>
using namespace std;

int main()
{
	while(1)
	{
		int H, W;
		cin >> H>> W;

		if(H == 0 && W == 0)
		{
			break;
		}
		char map[200][200];
		/*for(int i = 0; i < 200; i++)
		{
			for(int j = 0; j < 200; j++)
			{
				map[i][j] = -1;
			}
		} */
		for(int iy = 0; iy < H; iy++)
		{
			for(int jx = 0; jx < W; jx++)
			{
				cin >> map[iy][jx];
			}
		}

		int px = 0;
		int py = 0;
		int count = 0;
		while(count < 10001)
		{
			if(map[py][px] == '>')
			{
				px++;
			}
			else if(map[py][px] == '<')
			{
				px--;
			}
			else if(map[py][px] == '^')
			{
				py--;
			}
			else if(map[py][px] == 'v')
			{
				py++;
			}
			else
			{
				cout << px << " " << py << endl;
				break;
			}
			count++;
		}
		if(count >= 10001)
		{
			cout << "LOOP" << endl;
		}

	}
	

}