#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <queue>

using namespace std;

int Dis[3];

void Set_Movable(int ind) {
	if (ind%4 == 0) {
		Dis[0] = -1;
		Dis[1] = ind+1;
	}
	else if (ind%4 == 3) {
		Dis[0] = ind-1;
		Dis[1] = -1;
	}
	else {
		Dis[0] = ind-1;
		Dis[1] = ind+1;
	}
	Dis[2] = (ind+4)%8;
}

int main(void) {
	map<string,int> all_data;
	queue<string> puzz;
	queue<int> index;
	queue<int> deep;
	puzz.push("01234567");
	index.push(0);
	deep.push(0);
	int ind,d;
	string str;
	string temp;
	while (!puzz.empty()) {
		str = puzz.front();
		ind = index.front();
		d = deep.front();
		Set_Movable(ind);
		puzz.pop();
		index.pop();
		deep.pop();
		for (int i = 0; i < 3; ++i) {
			temp = str;
			if (Dis[i] >= 0) {
				swap(temp[ind],temp[Dis[i]]);
				if (all_data[temp] == 0 && temp != "01234567") {
					all_data[temp] = d + 1;
					puzz.push(temp);
					index.push(Dis[i]);
					deep.push(d + 1);
				}
			}
		}
	}
	while (getline(cin,temp)) {
		string str = "";
		for (int i = 0; i < 8; ++i) {
			str += temp[2*i];
		}
		cout << all_data[str] << endl;
	}
	return 0;
}