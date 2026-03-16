#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int Result(int cards[5]){
	int num_card[13];
	bool four=false, three=false, two=false;
	int	num_two=0;
	int min = 12,max = 0;

	for(int i=0;i<13;++i)num_card[i]=0;

	for(int i=0;i<5;++i){
		num_card[ cards[i] - 1 ] ++;
	}
	
	for(int i=0;i<13;++i){

		if(num_card[i]>0){
			if(i<min)min=i;
			if(i>max)max=i;

			if(num_card[i]==4)four=true;
			else if(num_card[i]==3)three=true;
			else if(num_card[i]==2){
				two=true;
				++num_two;
			}
		}
	}

	if(four)return 7;
	else if(three){
		if(two)return 6;
		else return 4;
	}
	else if(two){
		if(num_two == 2)return 3;
		else return 2;
	}

	if(max-min+1 == 5||(num_card[0]&&num_card[12]&&num_card[11]&&num_card[10]&&num_card[9]))
		return 5;
	return 1;
}

int main(){

	string res;
	int c[5];

	while(scanf("%d,%d,%d,%d,%d",&c[0],&c[1],&c[2],&c[3],&c[4])+1){
		
		
		switch( Result(c) ){
			case 1:res="null";break;
			case 2:res="one pair";break;
			case 3:res="two pair";break;
			case 4:res="three card";break;
			case 5:res="straight";break;
			case 6:res="full house";break;
			case 7:res="four card";break;
		}

		cout << res << endl;

	}

	return 0;
}