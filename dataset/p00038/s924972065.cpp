#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int card[14];
	int hand[5];
	char cm;
	while(1){
		fill(card,card+14,0);
		cin>>hand[0];
		card[hand[0]]++;
		if(cin.eof())
			break;
		for(int i = 1; i < 5; i++){
			cin>>cm>>hand[i];
			card[hand[i]]++;
		}

		int onepair=0;
		int threecard=0;
		int straight=0;

		int cont=0;
		bool f=false;

		if(card[1]==1&&card[10]==1&&card[11]==1&&card[12]==1&&card[13]==1){
			cout<<"straight"<<endl;
			continue;
		}

		for(int i = 1; i < 14; i++){
			if(card[i]==4){
				cout<<"four card"<<endl;
				f=true;
				break;
			}
			else if(card[i]==2){
				onepair++;
			}
			else if(card[i]==3){
				threecard++;
			}
			else if(card[i]==1){
				cont++;
				if(cont==5){
					straight++;
				}
			}
			else
				cont=0;
		}
		if(!f){
			if(onepair==2)
				cout<<"two pair"<<endl;
			else if(threecard==1){
				if(onepair==1)
					cout<<"full house"<<endl;
				else
					cout<<"three card"<<endl;
			}
			else if(straight){
				cout<<"straight"<<endl;
			}
			else if(onepair==1){
				cout<<"one pair"<<endl;
			}
			else
				cout<<"null"<<endl;
		}
	}
	return 0;
}