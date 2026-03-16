#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int card[13]; // A ~ 13
	int data[5];
	while(cin >> data[0]){
		fill(card, card + 13, 0);
		++card[data[0] - 1];
		char c0;
		for(int i = 1; i < 5; ++i){
			cin >> c0 >> data[i];
			++card[data[i] - 1];
		}

		sort(card, card + 13, greater<int>());
		/*
		for(int i = 0; i < 13; ++i){
			cout << card[i] << " ";
		}
		cout << endl;
		*/
		switch(card[0]){
			case 4 :
				cout << "four card" << endl;
				break;

			case 3 :
				if(card[1] == 2)
					cout << "full house" << endl;
				else
					cout << "three card" << endl;
				break;

			case 2 :
				if(card[1] == 2)
					cout << "two pair" << endl;
				else
					cout << "one pair" << endl;
				break;

			default :
				sort(data, data + 5);
				if((data[0] == 1 && data[1] == 10 && data[4] == 13) || (data[0] + 4 == data[4]))
					cout << "straight" << endl;
				else
					cout << "null" << endl;
				break;
		}
	}
	return 0;
}