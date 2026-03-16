#include <iostream>
#include <string>
using namespace std;

int main(){
	int n , score , runner , outcount;
	cin >> n;
	for(int i=0 ; i<n ; i++){
		score=runner=outcount=0;
		string event;
		while(outcount<3){
			cin >> event;
			if (event=="HIT"){
				if(runner==3){
					score++;
				} else {
					runner++;
				}
			} else if (event=="HOMERUN"){
				score+=runner+1;
				runner=0;
			} else {
				outcount++;
			}
		}
		cout << score << endl;
	}
	return 0;
}