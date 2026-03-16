#include<iostream>
#include<string>
using namespace std;

struct Point{
	int x; int y; Point(){ x = 0; y = 0; }
};

int main(){
	const int h_max = 101;
	const int w_max = 101;
	int h, w;
	int a[h_max][w_max];

	while (cin >> h >> w , h*w != 0){

	for (int i = 0; i < h_max; ++i){
		for (int j = 0; j < w_max; ++j){
			a[i][j] = 0;
		}
	}

	
		string s;
		for (int i = 0; i < h; ++i){
			cin >> s;
			for (int j = 0; j < s.length(); ++j){
				switch ((int)s[j]){
				case (int)'>':
					a[j][i] = 1;
					break;
				case (int)'<':
					a[j][i] = 2;
					break;
				case (int)'^':
					a[j][i] = 3;
					break;
				case (int)'v':
					a[j][i] = 4;
					break;
				case (int)'.':
					a[j][i] = 5;
					break;
				}
			}
		}


		Point p;
		int count = 0; bool  is_loop = false;
		while (a[p.x][p.y] != 5 && is_loop == false){
			switch (a[p.x][p.y])
			{
			case 1:
				++p.x;
				break;
			case 2:
				--p.x;
				break;
			case 3:
				--p.y;
				break;
			case 4:
				++p.y;
				break;
			}

			++count;
			if (count > 101 * 101){
				is_loop = true;
			}
		}
		if (!is_loop){
			cout << p.x << " " << p.y << endl;
		}
		else{
			cout << "LOOP" << endl;
		}
	}
	
	/*
	for (int i = 0; i < h_max; ++i){
		for (int j = 0; j < w_max; ++j){
			cout << a[i][j];
		}
		cout << endl;
	}
	*/
	


	return 0;
}