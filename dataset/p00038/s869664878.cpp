#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int c[5];
	while( scanf("%d,%d,%d,%d,%d", &c[0], &c[1], &c[2], &c[3], &c[4]) != EOF){
		map<int, int> card;
		int mex = 0;
		for(int i=0;i<5;i++){
			card[ c[i] ]++;
			mex = max( mex, card[ c[i] ] );
		}
		bool full = true;
		bool A = false, B = false;
		for(int i=0;i<5;i++){
			if(c[i]==1) A = true;
			if(c[i]==13) B = true;
		}
		if( A && B ){
			for(int i=0;i<5;i++){
				if(c[i]==1) c[i]=14;
			}
		}
		sort(c, c+5);
		for(int i=0;i<4;i++){
			if(c[i]+1 != c[i+1]) full = false;
		}
		
		// 判定
		if( mex == 4){
			cout<<"four card"<<endl;
		}else if( mex==3 && card.size()==2 ){
			cout<<"full house"<<endl;
		}else if( full ){
			cout<<"straight"<<endl;
		}else if( mex==3){
			cout<<"three card"<<endl;
		}else if( card.size()==3 ){
			cout<<"two pair"<<endl;
		}else if( mex==2 ){
			cout<<"one pair"<<endl;
		}else{
			cout<<"null"<<endl;
		}
		
	}
	return 0;
}