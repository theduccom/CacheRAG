#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main(){
	
	int n;
	cin>>n;
	for(int iii=0;iii<n;iii++){
	int map[17][17]={};
	string str;
	for(int i=0;i<8;i++)
	{cin>>str;
	for(int j=0;j<8;j++)
		map[i+3][j+3]=str[j]-'0';
	}


	



	int x,y;
	cin>>x;cin>>y;
	x+=2;y+=2;
	map[y][x]=0;
	map[y][x+1]+=2;map[y][x+2]+=2;map[y][x+3]+=2;
	map[y][x-1]+=2;map[y][x-2]+=2;map[y][x-3]+=2;
	map[y-1][x]+=2;map[y-2][x]+=2;map[y-3][x]+=2;
	map[y+1][x]+=2;map[y+2][x]+=2;map[y+3][x]+=2;
	bool f=false;
	while(f==false){f=true;
	for(int i=0;i<8;i++)
	for(int j=0;j<8;j++){
		if(map[i+3][j+3]%2==1&&map[i+3][j+3]!=1){f=false;
			x=j+3;y=i+3;
			map[y][x]=0;
	map[y][x+1]+=2;map[y][x+2]+=2;map[y][x+3]+=2;
	map[y][x-1]+=2;map[y][x-2]+=2;map[y][x-3]+=2;
	map[y-1][x]+=2;map[y-2][x]+=2;map[y-3][x]+=2;
	map[y+1][x]+=2;map[y+2][x]+=2;map[y+3][x]+=2;

		}
	
	}

}
	/*
	for(int i=0;i<8;i++)
	{
	for(int j=0;j<8;j++)
		cout<<map[i+3][j+3];
	cout<<endl;
	}
	*/

	for(int i=0;i<8;i++)
	for(int j=0;j<8;j++)
		map[i+3][j+3]=map[i+3][j+3]%2;


	cout<<"Data "<<iii+1<<":"<<endl;
	for(int i=0;i<8;i++)
	{
	for(int j=0;j<8;j++)
		cout<<map[i+3][j+3];
	cout<<endl;
	}


	}
	return 0;
}