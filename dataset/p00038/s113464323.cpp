#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip> 
#include <complex> 
#include <string>
#include <vector> 
#include <list>
#include <deque> 
#include <stack> 
#include <queue> 
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <utility>
#include <algorithm> 
#include <numeric> 
#include <typeinfo> 
#include <cstdio>
#include <cstdlib> 
#include <cstring>
#include <cmath>
#include <climits> 
#include <ctime>

using namespace std;

int main(void){
	int card[15],cards[5];
	int a[5];
	int b;
	bool y=false;
	while(~scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4])){
		for(b=0;b<=14;b++){
			card[b]=0;
		}
		for(b=0;b<=4;b++){
			cards[b]=0;
		}
		y=false;
		for(b=0;b<=4;b++){
			card[a[b]]+=1;
		}
		for(b=0;b<14;b++){
			cards[card[b]]+=1;
		}
		if(cards[4]==1)cout << "four card" << endl;
		else if(cards[3]==1 && cards[2]==1)cout << "full house" << endl;
		else if(cards[3]==1)cout << "three card" << endl;
		else if(cards[2]==2)cout << "two pair" << endl;
		else if(cards[2]==1)cout << "one pair" << endl;
		else{
			if(card[1]==1 && card[10]==1 && card[11]==1 && card[12]==1 && card[13]==1)cout << "straight" << endl,y=true;
			for(b=1;b<=9;b++){
				if(card[b]==1 && card[b+1]==1 && card[b+2]==1 && card[b+3]==1 && card[b+4]==1){
					cout << "straight" << endl;
					y=true;
				}
			}
			if(y==false)cout << "null" << endl;
		}
	}
	return 0;
}