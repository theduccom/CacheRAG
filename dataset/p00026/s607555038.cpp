// 2014/09/08 Tazoe

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int F[14][14];
	for(int y=0; y<14; y++){
		for(int x=0; x<14; x++){
			F[y][x] = 0;
		}
	}

	while(true){
		string S;
		cin >> S;

		if(cin.eof())
			break;

		for(int i=0; i<2; i++){
			int loc = S.find(",");
			S.replace(loc, 1, " ");
		}

		istringstream is(S);
		int x, y, s;
		is >> x >> y >> s;

//		cout << x << ' ' << y << ' ' << s << endl;

		x = x+2;
		y = y+2;

		if(s==1){
			F[y][x]++;
			F[y-1][x]++;
			F[y+1][x]++;
			F[y][x-1]++;
			F[y][x+1]++;
		}
		else if(s==2){
			F[y][x]++;
			F[y-1][x]++;
			F[y+1][x]++;
			F[y][x-1]++;
			F[y][x+1]++;
			F[y-1][x-1]++;
			F[y-1][x+1]++;
			F[y+1][x-1]++;
			F[y+1][x+1]++;
		}
		else if(s==3){
			F[y][x]++;
			F[y-1][x]++;
			F[y+1][x]++;
			F[y][x-1]++;
			F[y][x+1]++;
			F[y-1][x-1]++;
			F[y-1][x+1]++;
			F[y+1][x-1]++;
			F[y+1][x+1]++;
			F[y-2][x]++;
			F[y+2][x]++;
			F[y][x-2]++;
			F[y][x+2]++;
		}
	}

	int cnt = 0;
	int F_max = -1;

	for(int y=0; y<10; y++){
		for(int x=0; x<10; x++){
			if(F[y+2][x+2]==0){
				cnt++;
			}

			if(F[y+2][x+2]>F_max){
				F_max = F[y+2][x+2];
			}
		}
	}

	cout << cnt << endl;
	cout << F_max << endl;

	return 0;
}