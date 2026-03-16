#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;
#define pb push_back
int main(void){
	char buf;
	int tmp;
	while(cin >> tmp){
		vector<int> list;
		if(cin.eof())
			break;
		list.pb(tmp);
		for(int i=0;i<4;i++){
			cin >> buf >> tmp;
			list.pb(tmp);
		}
		sort(list.begin(),list.end());
		int card[14]={0};
		for(int i=0;i<5;i++)
			card[list[i]]++;
		int cmax=0,cnmax=0,series=1;
		for(int i=1;i<=13;i++){
			if(cmax < card[i]){
				cnmax=cmax;
				cmax=card[i];
			}else if(cnmax < card[i])
				cnmax=card[i];
			if(card[i]&&card[i-1])
				series++;
			else if(series!=5)
				series=1;
		}
		if(series==4&&card[1])
			series++;
		
		if(cmax==4)
			cout << "four card"<< endl;
		else if(cmax==3&&cnmax==2)
			cout <<"full house" << endl;
		else if(series == 5)
			cout << "straight" << endl;
		else if(cmax==3)
			cout <<"three card" << endl;
		else if(cmax==2 && cnmax==2)
			cout <<"two pair" << endl;
		else if(cmax==2)
			cout <<"one pair" << endl;
		else
			cout <<"null" << endl;
	}
	return 0;
}