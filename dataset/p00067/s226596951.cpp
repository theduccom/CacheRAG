#include<iostream>

using namespace std;

int island[14][14];
void field(int x,int y){
	if(island[x][y] == 0)	return;
	island[x][y] = 0;
	field(x+1,y);
	field(x-1,y);
	field(x,y+1);
	field(x,y-1);
}

int main(void){
	int n;  string s;
	
	while(cin>>s){
		bool f = true;
		for(int i = 0 ; i < 12 ; i ++){
			if(!f)	cin>>s;
			for(int j = 0 ; j < 12 ; j ++){
				island[i + 1][j + 1] = s[j]-'0';
			}
			f = false;
		}
		
		int cnt = 0 ;
		for(int i = 1 ; i < 13 ; i ++){
			for(int j = 1; j < 13 ; j ++){
				if(island[i][j] == 1){
					field(i,j);
					cnt ++;
				}
			}
		}
		cout<<cnt<<endl;
		getline(cin, s);
	}
	
	return 0;
}