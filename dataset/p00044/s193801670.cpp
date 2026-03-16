#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool Prime(int in){
	for (int i = 3; i <= sqrt(in); i += 2){
		if (in%i == 0)	return false;
	}
	return true;
}

vector<int> kakunou(vector<int> in){
	in.push_back(2);
	in.push_back(3);

	for (int i = 5; i < 51000; i += 2){
		if (Prime(i))	in.push_back(i);
	}
	return in;
}

int main(){
	int in;
	vector<int> vec;

	vec = kakunou(vec);

	while (cin >> in, !cin.eof()){
		vector<int>::iterator it = vec.begin();
		while (1){
			if (*it >= in){
				--it;
				cout << *it << " ";
				++it;
				if (*it == in)	++it;
				cout << *it << endl;
				break;
			}
			++it;
		}
	}

	return 0;
}