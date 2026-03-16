#include<iostream>
#include<algorithm>
using namespace std;

string paircard(int card[]){
		int num[13] = {0};
		for(int i=0;i<5;i++) num[card[i]-1]++;
		sort(num,num+13,greater<int>());
			if(num[0] == 4 && num[1] ==1) return "four card";
			if(num[0] == 3 && num[1] ==2) return "full house";
			if(num[0] == 3 && num[1] ==1) return "three card";
			if(num[0] == 2 && num[1] ==2) return "two pair";
			if(num[0] == 2 && num[1] ==1) return "one pair";
		return "null";
}

bool straight(int card[]){
	if(card[0] == 1 && card[1]==10 && card[2] == 11 && card[3] == 12 && card[4] == 13)
	return true;
	int ans = 1;
	for(int i=0;i+1<5;i++) if(card[0]+i+1 == card[i+1]) ans++;
	if(ans==5) return true;

	return false;
}

string poker(int card[]){
	if(straight(card)){return "straight";}
 	return paircard(card);
}

int main(){
	char k; int card[5];
	while(1){
		cin>>card[0]>>k>>card[1]>>k>>card[2]>>k>>card[3]>>k>>card[4];
				if(cin.eof())break;
		sort(card,card+5);
		cout << poker(card) << endl;
	}
}