#include<iostream>

using namespace std;

int main()
{
	int w,h;
	char room[101][101];
	while(cin>>h>>w,h){
		for(int i=0;i<h;i++)	cin>>room[i];
		int x=0,y=0,cnt=0;
		while(1){
			if     (room[y][x]=='>')	x++;
			else if(room[y][x]=='<')	x--;
			else if(room[y][x]=='^')	y--;
			else if(room[y][x]=='v')	y++;
			else{
				cout<<x<<" "<<y<<endl;
				break;
			}

			if(cnt>w*h){
				cout<<"LOOP"<<endl;
				break;
			}
			cnt++;
		}
	}

	return 0;
}