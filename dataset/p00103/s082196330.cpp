// 2011/01/05 Tazoe

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		int ots = 0;
		int sco = 0;
		int ba1 = 0, ba2 = 0, ba3 = 0;

		while(ots<3){
			string eve;
			cin >> eve;

			if(eve=="HIT"){
				sco += ba3;
				ba3 = ba2;
				ba2 = ba1;
				ba1 = 1;
			}
			else if(eve=="HOMERUN"){
				sco += (ba3+ba2+ba1+1);
				ba3 = ba2 = ba1 = 0;
			}
			else if(eve=="OUT"){
				ots++;
			}
		}

		cout << sco << endl;
	}

	return 0;
}