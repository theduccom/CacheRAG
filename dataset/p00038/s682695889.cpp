#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
	int c;
	int cards[14], pairs[5];
	while( scanf("%d", &c )!=-1 ){
		memset( cards, 0, sizeof(cards) );
		memset( pairs, 0, sizeof(pairs) );
		cards[c]++;
		for( int i=0; i<4; i++ ){
			scanf(",%d",&c);
			cards[c]++;
		}
		for( int i=1; i<=13; i++ ){
			pairs[cards[i]]++;
		}
		if( pairs[4] ){
			cout << "four card" << endl;
		}else if( pairs[3] && pairs[2] ){
			cout << "full house" << endl;
		}else if( pairs[1] == 5 ){
			int i=1;
			for( ; i<=10; i++ ){
				if( cards[i] && cards[i+1] && cards[i+2] && cards[i+3] && cards[((i+3)%13)+1] ){
					cout << "straight" << endl;
					break;
				}
			}
			if( i>10 )
				cout << "null" << endl;
		}else if( pairs[3] ){
			cout << "three card" << endl;
		}else if( pairs[2] == 2 ){
			cout << "two pair" << endl;
		}else if( pairs[2] ){
			cout << "one pair" << endl;
		}else{
			cout << "null" << endl;
		}
	}
	return 0;
}