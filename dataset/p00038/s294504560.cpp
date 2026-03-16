#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int check(vector<int> v) {
	sort(v.begin(), v.end());
	//for (int i = 0; i < v.size(); i++)cout << v[i] << "  ";
	if ((v[0] == v[1] && v[1] == v[2] && v[2]== v[3]) || (v[1] == v[2] && v[2]== v[3] && v[3] == v[4])) {//four cards
		return 1;
	}
	else if (((v[0] == v[1] && v[1] == v[2]) && (v[3] == v[4])) || ((v[0] == v[1]) && (v[2] == v[3] && v[3] == v[4]))) {//full house
		return 2;
	}
	else if (v[0] == v[1] - 1 && v[0] == v[2] - 2 && v[0] == v[3] - 3 && v[0] == v[4] - 4) {//straight
		return 3;
	}
	else if (v[0]==1 && v[1]==10 && v[2]==11 && v[3] == 12 && v[4] == 13) {//straight
		return 3;
	}
	else if (((v[0] == v[1] && v[1] == v[2]) || (v[1] == v[2] && v[2] == v[3])) || ((v[2] == v[3] && v[3] == v[4]))) {//three cards
		return 4;
	}
	else if ((v[0] == v[1] && v[2] == v[3]) || (v[0] == v[1] && v[3] == v[4]) || (v[1] == v[2] && v[3] == v[4])) {//two pair
		return 5;
	}
	else if ((v[0] == v[1]) || (v[1] == v[2]) || (v[2] == v[3]) || (v[3] == v[4])) {//one pair
		return 6;
	}
	else {
		return 7;
	}
}


int main()
{
	vector<int> v;
	int a, b, c, d, e;
	while (scanf("%d,%d,%d,%d,%d", &a, &b, &c, &d, &e) != EOF) {
		v.clear();
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		v.push_back(d);
		v.push_back(e);
		switch (check(v)) {
			case 1:cout << "four card" << endl; break;
			case 2:cout << "full house" << endl; break;
			case 3:cout << "straight" << endl; break;
			case 4:cout << "three card" << endl; break;
			case 5:cout << "two pair" << endl; break;
			case 6:cout << "one pair" << endl; break;
			case 7:cout << "null" << endl; break;
			default:cout << "Error" << endl; break;
		}
	}
    return 0;
}