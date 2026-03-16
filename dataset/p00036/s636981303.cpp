#include <iostream>
#include <vector>
#include <string>
using namespace std;

string field[8];

bool ch(int i,int j)
{
	if(field[i][j] == '1') return true;
	return false;
}

bool Check_A(int i,int j)
{
	if(i+1 < 8 && j+1 < 8)
	{
		if(ch(i,j) && ch(i+1,j) && ch(i,j+1) && ch(i+1,j+1))  return true;
	}
	return false;
}

bool Check_B(int i,int j)
{
	if(i+1 < 8 && i+2 < 8 && i+3 < 8)
	{
		if(ch(i,j) && ch(i+1,j) && ch(i+2,j) && ch(i+3,j)) return true;
	}
	return false;
}

bool Check_C(int i,int j)
{
	if(j+1 < 8 && j+2 < 8 && j+3 < 8)
	{
		if(ch(i,j) && ch(i,j+1) && ch(i,j+2) && ch(i,j+3)) return true;
	}
	return false;
}

bool Check_D(int i,int j)
{
	if(j-1 >= 0 && i+1 < 8 && i+2 < 8)
	{
		if(ch(i,j) && ch(i+1,j) && ch(i+1,j-1) && ch(i+2,j-1)) return true;
	}
	return false;
}

bool Check_E(int i,int j)
{
	if(i+1 < 8 && j+1 < 8 && j+2 < 8)
	{
		if(ch(i,j) && ch(i,j+1) && ch(i+1,j+1) && ch(i+1,j+2)) return true;
	}
	return false;
}

bool Check_F(int i,int j)
{
	if(i+1 < 8 && i+2 < 8 && j+1 < 8)
	{
		if(ch(i,j) && ch(i+1,j) && ch(i+1,j+1)&& ch(i+2,j+1)) return true;
	}
	return false;
}

bool Check_G(int i,int j)
{
	if(i+1 < 8 && j+1 < 8 && j-1 >= 0)
	{
		if(ch(i,j) && ch(i+1,j) && ch(i,j+1) && ch(i+1,j-1)) return true;
	}
	return false;
}

int main()
{
	while(cin >> field[0])
	{
		for(int i=1;i<8;i++)
		{
			cin >> field[i];
		}
		
		bool flag = true;
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(Check_A(i,j) && flag)
				{
					cout << "A" << endl;
					flag = false;
				}

				if(Check_B(i,j) && flag)
				{
					cout << "B" << endl;
					flag = false;
				}

				if(Check_C(i,j) && flag)
				{
					cout << "C" << endl;
					flag = false;
				}

				if(Check_D(i,j) && flag)
				{
					cout << "D" << endl;
					flag = false;
				}				

				if(Check_E(i,j) && flag)
				{
					cout << "E" << endl;
					flag = false;
				}

				if(Check_F(i,j) && flag)
				{
					cout << "F" << endl;
					flag = false;
				}

				if(Check_G(i,j) && flag)
				{
					cout << "G" << endl;
					flag = false;
				}
			}
		}
	}
	return 0;
}