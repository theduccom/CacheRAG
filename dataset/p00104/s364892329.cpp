#include<iostream>
using namespace std;
int w,h,v[200][200];
char s[200][200];
void func(int y,int x){
	v[y][x]=0;
	if(s[y][x]=='.')
		cout<<x<<' '<<y<<endl;
	else if(s[y][x]=='>'){
		if(v[y][x+1]==1)
			func(y,x+1);
		else
		cout<<"LOOP"<<endl;
	}
	else if(s[y][x]=='<'){
		if(v[y][x-1]==1)
			func(y,x-1);
		else
		cout<<"LOOP"<<endl;
	}
	else if(s[y][x]=='v'){
		if(v[y+1][x]==1)
			func(y+1,x);
		else
		cout<<"LOOP"<<endl;
	}
	else if(s[y][x]=='^'){
		if(v[y-1][x]==1)
			func(y-1,x);
		else
		cout<<"LOOP"<<endl;
	}
	
}

int main(){
	while(cin>>h>>w,w||h){
		for(int i=0;i<h;i++)
		cin>>s[i];
		for(int i=0;i<h;i++)
		for(int j=0;j<w;j++)
		v[i][j]=1;
		func(0,0);
	}
	return 0;
}