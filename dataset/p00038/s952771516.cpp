#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
int main(){
	std::vector<int> cards(5);
	while(scanf("%d,%d,%d,%d,%d",&cards[0],&cards[1],&cards[2],&cards[3],&cards[4])!=EOF){
		int n=0;
		for(int i=0;i<4;i++){
			for(int j=i+1;j<5;j++){
				if(cards[i]==cards[j]){
					n++;
				}
			}
		}
		switch(n){
			case 1:
				std::cout<<"one pair"<<std::endl;
				break;

			case 2:
				std::cout<<"two pair"<<std::endl;
				break;

			case 3:
				std::cout<<"three card"<<std::endl;
				break;

			case 4:
				std::cout<<"full house"<<std::endl;
				break;

			case 6:
				std::cout<<"four card"<<std::endl;
				break;

			default:
				std::sort(cards.begin(),cards.end());
				if(cards[0]==cards[4]-4)std::cout<<"straight"<<std::endl;
				else if(cards[0]==1&&cards[1]==10&&cards[4]==13)std::cout<<"straight"<<std::endl;
				else std::cout<<"null"<<std::endl;
				break;
		}
	}
	return 0;
}