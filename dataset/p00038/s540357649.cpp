#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <numeric>
#include <cmath>
#include <climits>
#include <limits>
#include <cfloat>
#include <fstream>
using namespace std;

int main()
{
	const string yaku[] = {
		"null", "one pair", "two pair", "three card", "straight",
		"full house",	"four card" };
//	cut here before submit 
//	freopen("testcase.ph", "r", stdin);
	string str = "";
	while (getline (cin, str ) ){
		string res = "";
		if (str.empty() ){
			break;
		} // end if
		while (str.find(',') != string::npos ){
			str = str.replace(str.find(','), 1, " ");
		} // end while
		stringstream ss(str);
		vector <int> card (5, 0);
		int i,j;

		for (i = 0; i < 5; ++i){
			ss >> card[i];
		} // end for
		sort (card.begin(), card.end() );

//		for (i = 0; i < 5; ++i){
//			cout << card[i] << ' ';
//		} // end for
//		cout << endl;

		for (j = 0; j < 4; ++j){
			if (card[j + 1] == card[j] + 1){
				continue;
			}else{
				break;
			} // end if
		} // end for
		if (j == 4){
			res = yaku[4];	// "straight"
//			goto result;
		} // end if
		if (card[0] == 1 && card[1] == 10){
			for (j = 1; j < 4; ++j){
				if (card[j + 1] == card[j] + 1){
					continue;
				}else{
					break;
				} // end if
			} // end for
			if (j == 4){
				res = yaku[4];	// "straight"
//				goto result;
			} // end if
		} // end if
		if (res.empty() ){

			set <int> Card;
			for (i = 0; i < 5; ++i){
				Card.insert (card[i]);
			} // end for
//			set <int>::iterator it = Card.begin();
//			for (; it != Card.end(); ++it){
//				cout << *it << ' ';
//			} // end for
//			cout << endl;
//			cout << "card kind: " << Card.size() << endl;

			if (Card.size() == 5){
				res = yaku[0];		// null
			}else if (Card.size() == 4){
				res = yaku[1];		// one pair
			}else if (Card.size() == 3){
//				res = yaku[2];
				map<int, int> D;
				for (i = 0; i < 5; ++i){
					++D[card[i]];
				} // end for
				int maxnum = 0;
				map<int, int>::iterator it = D.begin();
				for (; it != D.end(); ++it){
					if (maxnum < (*it).second ){
						maxnum = (*it).second;
					} // end if
				} // end for
				if (maxnum == 2){
					res = yaku[2];	// two pair
				}else if (maxnum == 3){
					res = yaku[3];	// three card 
				} // end if

			}else{	// if (Card.size() == 2)
				map<int, int> D;
				for (i = 0; i < 5; ++i){
					++D[card[i]];
				} // end for
				int maxnum = 0;
				map<int, int>::iterator it = D.begin();
				for (; it != D.end(); ++it){
					if (maxnum < (*it).second ){
						maxnum = (*it).second;
					} // end if
				} // end for
				if (maxnum == 3){
					res = yaku[5];	// full house
				}else if (maxnum == 4){
					res = yaku[6];	// four card
				} // end if
			} // end if
		} // end if

		if (!res.empty() ){
			cout << res << endl;
		} // end if
	} // end while
		
	return 0;
}