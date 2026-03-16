#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int numc[14];
	int in[5];

	while(1){
		
		for(int i=0; i<14; ++i){
			numc[i] = 0;
		}

		for(int i=0; i<5; ++i){
			
			int a;
			char c;
			
			cin >> a;

			if(cin.eof())
				return 0;

			numc[a]++;
			in[i] = a;

			if(i<4)
				cin >> c;
		}

		sort(numc, numc+14, greater<int>());
		sort(in, in+5);

		if(numc[0]>=4){
				cout << "four card" << endl;
				continue;
		}
		if(numc[0]==3&&numc[1]==2){
				cout << "full house" << endl;
				continue;
		}
		
		bool str = true;
			
		for(int i=0; i<4; ++i){
			
			if(in[i+1]-in[i]!=1){
				str = false;
				break;
			}
		}
				
		if(str||in[0]==1&&in[1]==10&&in[2]==11&&in[3]==12&&in[4]==13){
			cout << "straight" << endl;
			continue;
		}
		if(numc[0]>=3){
				cout << "three card" << endl;
				continue;
		}
		if(numc[0]>=2&&numc[1]>=2){
				cout << "two pair" << endl;
				continue;
		}
		if(numc[0]>=2){
				cout << "one pair" << endl;
				continue;
		}
		else{
				cout << "null" << endl;
				continue;
		}
	}

	return 0;
}