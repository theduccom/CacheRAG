#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };


class cordinate
{

public:
	int x;
	int y;

};

int main()
{
	while(1)
	{


		int w;
		int h;
		cin >> w >> h; 
		if(w == 0 && h == 0)
		{
			break;
		}
		w = 110;
		h = 110;
		
		int xs;
		int ys;
		cin >> xs >> ys;
		int xg;
		int yg;
		cin >> xg >> yg;
		int n;
		cin >> n;

		vector<vector<int >> vobj;

		for(int i = 0; i < h; i++)
		{
			vector<int> lineobj;
			for(int j = 0; j < w; j++)
			{

				lineobj.push_back(0);

			}
			vobj.push_back(lineobj);

		}
		for(int i = 0; i < n; i++)
		{
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			x--;
			y--;

			if(d == 0)
			{
				vobj[x][y] = c;
				vobj[x + 1][y] = c;
				vobj[x + 2][y] = c;
				vobj[x + 3][y] = c;
				vobj[x][y + 1] = c;
				vobj[x + 1][y + 1] = c;
				vobj[x + 2][y + 1] = c;
				vobj[x + 3][y + 1] = c;
			}
			else if(d == 1)
			{
				vobj[x][y] = c;
				vobj[x][y + 1] = c;
				vobj[x][y + 2] = c;
				vobj[x][y + 3] = c;
				vobj[x + 1][y] = c;
				vobj[x + 1][y + 1] = c;
				vobj[x + 1][y + 2] = c;
				vobj[x + 1][y + 3] = c;
			}
		}

		int startColor;
		startColor = vobj[xs - 1][ys - 1];
		queue<cordinate> que;

		cordinate obj;
		obj.x = xs - 1;
		obj.y = ys - 1;
		que.push(obj);
		bool flag = false;
		while(1)
		{
			if(startColor == 0)
			{
				break;
			}
			cordinate buf;
			buf = que.front();
			que.pop();

			int bx;
			int by;
			bx = buf.x;
			by = buf.y;
			if(bx == xg - 1 && by == yg - 1)
			{
				flag = true;
				break;
			}
			for(int i = 0; i < 4; i++)
			{
				if(bx + dx[i] >= 0 && bx + dx[i] <= h - 1)
				{
					if(by + dy[i] >= 0 && by + dy[i] <= w - 1)
					{
						if(vobj[bx + dx[i]][by + dy[i]] == startColor)
						{
							cordinate newObject;
							newObject.x = bx + dx[i];
							newObject.y = by + dy[i];
							que.push(newObject);

						}
					}
				}
			}
			vobj[bx][by] = -1;

			if(que.size() == 0)
			{
				break;
			}
		}


		if(flag == true)
		{
			cout << "OK" << endl;
		}
		else{
			cout << "NG" << endl;
		}
		/*for(int i = 0; i < w - 1; i++)
		{
			for(int j = 0; j < h - 1; j++)
			{
				cout << vobj[i][j] << " ";
			}
			cout << endl;
		}  */

	}



}