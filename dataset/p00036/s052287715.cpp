#include<iostream>
using namespace std;
string s[8];
bool m[8][8];
main()
{
	while(cin>>s[0])
	{
		for(int i=1;i<8;i++)cin>>s[i];
		for(int i=0;i<8;i++)for(int j=0;j<8;j++)m[i][j]=0;
		for(int i=0;i<8;i++)for(int j=0;j<8;j++)if(s[i][j]=='1')m[i][j]=1;
		for(int i=0;i<7;i++)for(int j=0;j<7;j++)
			if(m[i][j]&&m[i+1][j]&&m[i][j+1]&&m[i+1][j+1])cout<<'A'<<endl;
		for(int i=0;i<5;i++)for(int j=0;j<8;j++)
			if(m[i][j]&&m[i+1][j]&&m[i+2][j]&&m[i+3][j])cout<<'B'<<endl;
		for(int i=0;i<8;i++)for(int j=0;j<5;j++)
			if(m[i][j]&&m[i][j+1]&&m[i][j+2]&&m[i][j+3])cout<<'C'<<endl;
		for(int i=0;i<6;i++)for(int j=0;j<7;j++)
			if(m[i][j+1]&&m[i+1][j]&&m[i+1][j+1]&&m[i+2][j])cout<<'D'<<endl;
		for(int i=0;i<7;i++)for(int j=0;j<6;j++)
			if(m[i][j]&&m[i][j+1]&&m[i+1][j+1]&&m[i+1][j+2])cout<<'E'<<endl;
		for(int i=0;i<6;i++)for(int j=0;j<7;j++)
			if(m[i][j]&&m[i+1][j]&&m[i+1][j+1]&&m[i+2][j+1])cout<<'F'<<endl;
		for(int i=0;i<7;i++)for(int j=0;j<6;j++)
			if(m[i+1][j]&&m[i+1][j+1]&&m[i][j+1]&&m[i][j+2])cout<<'G'<<endl;
	}
}

