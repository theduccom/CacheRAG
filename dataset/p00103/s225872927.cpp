#include<iostream>
#include<string.h>
using namespace std;

class Game{
	int flag;
	int point;
	int out;
	int count;
	char sta[10];

public:
	int IN(const char *);
	int OUT();
	void Reset();
};

int Game::IN(const char *str){
	if(strcmp("HIT",str) == 0){
		if(count < 3)count++;
		else point++;
	}
	else if(strcmp("HOMERUN",str) == 0){
		point += count + 1;
		count = 0;
	}
	else{
		out++;
		if(out >= 3){
			flag++;
			return flag;
		}
	}
	return 0;
}

int Game::OUT(){
	return point;
}
void Game::Reset(){
	flag = 0;
	point = 0;
	out = 0;
	count = 0;
}


int main(){
	int i,f,set = 0;
	int po[50];
	char sta[10];
	Game ini;

	cin >> set;

	for(i = 0; i < set; i++ ){
		ini.Reset();
		f = 0;
		while(1){
			cin >> sta;
			f = ini.IN(sta);
			if(f == 1)break;
		}
		po[i] = ini.OUT();

	}

	for(i = 0; i < set ; i++)
		cout << po[i] << endl;

	return 0;
}