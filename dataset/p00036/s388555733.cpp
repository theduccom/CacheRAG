#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

const int Ax[]={0,0,1,1};
const int Ay[]={0,1,0,1};
const int Bx[]={0,0,0,0};
const int By[]={0,1,2,3};
const int Cx[]={0,1,2,3};
const int Cy[]={0,0.0,0};
const int Dx[]={0,0,-1,-1};
const int Dy[]={0,1,1,2};
const int Ex[]={0,1,1,2};
const int Ey[]={0,0,1,1};
const int Fx[]={0,0,1,1};
const int Fy[]={0,1,1,2};
const int Gx[]={0,1,-1,0};
const int Gy[]={0,0,1,1};


char field[8][8];

string check(int x,int y){
	if(field[y][x]=='1'){
		bool f=true;
		// ¡ÌÀW©çTõ
		for(int k = 0; k < 4; k++){
			int nx=x+Ax[k];
			int ny=y+Ay[k];
			if(nx>=0&&ny>=0&&nx<8&&ny<8){
				if(field[ny][nx]!='1'){
					f=false;
					break;
				}
			}
			else{
				f=false;
				break;
			}
		}
		if(f){
			return "A";
		}
		f=true;
		// ¡ÌÀW©çTõ
		for(int k = 0; k < 4; k++){
			int nx=x+Bx[k];
			int ny=y+By[k];
			if(nx>=0&&ny>=0&&nx<8&&ny<8){
				if(field[ny][nx]!='1'){
					f=false;
					break;
				}
			}
			else{
				f=false;
				break;
			}
		}
		if(f){
			return "B";
		}
		f=true;
		// ¡ÌÀW©çTõ
		for(int k = 0; k < 4; k++){
			int nx=x+Cx[k];
			int ny=y+Cy[k];
			if(nx>=0&&ny>=0&&nx<8&&ny<8){
				if(field[ny][nx]!='1'){
					f=false;
					break;
				}
			}
			else{
				f=false;
				break;
			}
		}
		if(f){
			return "C";
		}
		f=true;
		// ¡ÌÀW©çTõ
		for(int k = 0; k < 4; k++){
			int nx=x+Dx[k];
			int ny=y+Dy[k];
			if(nx>=0&&ny>=0&&nx<8&&ny<8){
				if(field[ny][nx]!='1'){
					f=false;
					break;
				}
			}
			else{
				f=false;
				break;
			}
		}
		if(f){
			return "D";
		}
		f=true;
		// ¡ÌÀW©çTõ
		for(int k = 0; k < 4; k++){
			int nx=x+Ex[k];
			int ny=y+Ey[k];
			if(nx>=0&&ny>=0&&nx<8&&ny<8){
				if(field[ny][nx]!='1'){
					f=false;
					break;
				}
			}
			else{
				f=false;
				break;
			}
		}
		if(f){
			return "E";
		}
		f=true;
		// ¡ÌÀW©çTõ
		for(int k = 0; k < 4; k++){
			int nx=x+Fx[k];
			int ny=y+Fy[k];
			if(nx>=0&&ny>=0&&nx<8&&ny<8){
				if(field[ny][nx]!='1'){
					f=false;
					break;
				}
			}
			else{
				f=false;
				break;
			}
		}
		if(f){
			return "F";
		}
		f=true;
		// ¡ÌÀW©çTõ
		for(int k = 0; k < 4; k++){
			int nx=x+Gx[k];
			int ny=y+Gy[k];
			if(nx>=0&&ny>=0&&nx<8&&ny<8){
				if(field[ny][nx]!='1'){
					f=false;
					break;
				}
			}
			else{
				f=false;
				break;
			}
		}
		if(f){
			return "G";
		}
	}
	return "";
}

int main(){


	while(1){
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				cin>>field[i][j];
			}
		}
		if(cin.eof())
			break;
		bool f=false;
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				string ret=check(j,i);
				string com="";
				if(ret!=com){
					cout<<ret<<endl;
					f=true;
					break;
				}
			}
			if(f)
				break;
		}
	}

	return 0;
}