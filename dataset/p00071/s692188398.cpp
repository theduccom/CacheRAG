#include<iostream>
using namespace std;
char s[10][10];
void func(int x,int y){
	if(s[y][x]=='1'){
		s[y][x]='0';
		for(int i=x-3;i<x+4;i++){
			if(i==x||i<0||i>7)
				continue;
			else if(s[y][i]=='1'){
				func(i,y);
			}
		}
		for(int i=y-3;i<y+4;i++){
			if(i==y||i<0||i>7)
			continue;
			else if(s[i][x]=='1'){
				func(x,i);
			}
		}
	}
}
int main(){
	int n,x,y,temp;
	cin>>n;
	temp=n;
	while(n-->0){
		for(int i=0;i<8;i++){
			cin>>s[i];
		}
		cin>>x;
		cin>>y;
		func(x-1,y-1);
		cout<<"Data "<<temp-n<<':'<<endl;
		for(int i=0;i<8;i++)
		cout<<s[i]<<endl;
	}
	return 0;
}
		