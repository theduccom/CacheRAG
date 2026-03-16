#include <iostream>
#include <string>
#include <queue>


using namespace std;

int data[12+1+1][12+1+1];

int func(int y,int x){
	if(data[y][x] <= 0)return 0;
	queue<int> size;
	queue<int> posX;
	queue<int> posY;
	int dx[4] = {-1,0,1,0},dy[4] = {0,1,0,-1};

	size.push(1);
	posX.push(x);
	posY.push(y);

	while(true){
		if(posX.size()==0){
			break;
		}
		int tmpX = posX.front();
		int tmpY = posY.front();
		int tmpS = size.front();
		posX.pop();
		posY.pop();
		size.pop();
		if(data[tmpY][tmpX] <=0)continue;

		data[tmpY][tmpX] = -2;
		for(int i=0;i<4;i++){
			posX.push(tmpX+dx[i]);
			posY.push(tmpY+dy[i]);
			size.push(tmpS+1);
		}
	}
	return 1;
}

int main(){

	//初期化
	for(int i=0;i<=13;i++){
		for(int j=0;j<=13;j++){
			data[i][j] = 0;
			if(i==0 || i == 13 || j==0 || j==13){
				data[i][j] = -1;
			}
		}
	}

	string str;
	//データ入力
	while(cin>>str){
		for(int j=1;j<=12;j++){
			data[1][j] = str[j-1] - '0';
		}
		for(int i=2;i<=12;i++){
			cin>>str;
			for(int j=1;j<=12;j++){
				data[i][j] = str[j-1] -'0';
			}
		}
		int sum = 0;
		for(int i=1;i<=12;i++){
			for(int j=1;j<=12;j++){
				sum += func(i,j);
			}
		}

		cout<<sum<<endl;
	}

	return 0;
}