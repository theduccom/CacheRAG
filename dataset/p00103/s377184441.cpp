#include<iostream>
#include<string>
using namespace std;
int main(void){
	int n;

	cin >> n;
	while(n-->0){
		int hits = 0;
		int inningScore = 0;
		int outNum = 0;
		while( outNum < 3 ){
			string s;
			cin >> s;
			if( s.compare("HIT") == 0 ){
				hits++;
				if( hits == 4 ){
					inningScore++;
					hits = 3;
				}
			}else if( s.compare("HOMERUN") == 0 ){
				inningScore += hits + 1;
				hits = 0;
			}else if( s.compare("OUT") == 0 ){
				outNum++;
				/* inning end */
				if( outNum == 3 ) break;
			}
		}
		cout << inningScore << '\n';
	}
	return 0;
}