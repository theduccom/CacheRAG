#include<iostream>

int main()
{
	char tile[100][100];
	int n;
	while(1)
	{
		int r,c;
		std::cin>>r>>c;
		std::cin.ignore();
		if(r==0&&c==0)break;
		
		for(int i=0;i<r;i++)
		{
			char buf[101];
			std::cin.getline(buf,101);
			for(int j=0;j<c;j++)
			{
				tile[i][j]=buf[j];
			}
		}
		
		int x=0,y=0;
		bool moving=true;
		while(moving)
		{
			switch(tile[y][x])
			{
			case '.':
				std::cout<<x<<' '<<y<<std::endl;
				moving=false;
				break;
			case '>':
				tile[y][x]='1';
				x++;
				break;
			case '<':
				tile[y][x]='1';
				x--;
				break;
			case '^':
				tile[y][x]='1';
				y--;
				break;
			case 'v':
				tile[y][x]='1';
				y++;
				break;
			case '1':
				std::cout<<"LOOP"<<std::endl;
				moving=false;
				break;
			}
		}
	}
	return 0;
}