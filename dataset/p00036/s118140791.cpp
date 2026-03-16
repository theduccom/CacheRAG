#include <iostream>

#define limit(A,X,C) ((X<A)?A:(C<X)?C:X)

char map[8+1][8]={'0'};

int pget(int x,int y)
{
	if(limit(0,x,7)==x && limit(0,y,7)==y)
		return map[y][x]-'0';
	return 0;
}

char check(int x, int y)
{
//	std::cout << ":" << x << y << std::endl;
	if(pget(x+1,y))
	{
		if(pget(x+2,y))
			return 'C';
		if(!pget(x,y+1))
			return 'E';
		if(pget(x+1,y+1))
			return 'A';
		return 'G';
	}
	if(pget(x,y+2))
		return 'B';
	if(pget(x+1,y+2))
		return 'F';
	return 'D';
}

int main(void)
{
	do
	{
		for(int i=0; i<8; i++)
			if(!(std::cin >> map[i]))
				return 0;
		int x,y;
		bool end=false;
		for(y=0; y<8; y++)
		{
			for(x=0; x<8; x++)
				if(map[y][x] == '1')
				{
					end=true;
					break;
				}
			if(end)
				break;
		}

		std::cout << check(x,y) << std::endl;
	}while(std::cin.getline(map[0],sizeof(map[0])));
	
	return 0;
}