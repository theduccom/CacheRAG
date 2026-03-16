#include <iostream>
#include <string>
#include <queue>
using namespace std;

class GameStatus{
public:
	int score;
	int out;
	queue<int> base;

	GameStatus(){
		score = 0;
		out = 0;
		for (int i = 0; i < 3; i++)
			base.push(0);
	}

	void Hit(){
		score += base.front();
		base.pop();
		base.push(1);
	}

	void Homerun(){
		for (int i = 0; i < 3; i++){
			score += base.front();
			base.pop();
			base.push(0);
		}

		score++;
	}
};

int main(){
	const string es[3] = { "HIT", "HOMERUN", "OUT" };
	int n;
	cin >> n;

	while (n){
		GameStatus gs;
		string e;
		while (gs.out < 3){
			cin >> e;
			if (e == es[0])
				gs.Hit();
			else if (e == es[1])
				gs.Homerun();
			else if (e == es[2])
				gs.out++;
		}
		cout << gs.score << endl;
		n--;
	}

	return 0;
}