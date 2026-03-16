#include<cstdio>
#include<iostream>
#include<cmath>

#define R 1
#define D 2
#define L 3
#define U 4

using namespace std;

int main(void){

	int card[14];
	int inp;
	int tmp;
	char gava;
	bool f1,f2,f3;

	while(cin>>inp>>gava){

		for(int i=0;i<14;i++) card[i]=0;
		card[inp]++;
		for(int i=0;i<3;i++){
			cin>>inp>>gava;
			card[inp]++;
		}
		cin>>inp;
		card[inp]++;
		f3=false;

		/*four card*/
		for(int i=0;i<14;i++){
			if(card[i]==4){
				f3=true;
				cout<<"four card"<<endl;
				break;
			}
		}
		if(f3) continue;

		/*full house*/
		f1=false,f2=false;
		for(int i=0;i<14;i++){
			if(card[i]==3) f1=true;
			if(card[i]==2) f2=true;
			if(f1==true&&f2==true){
				f3=true;
				cout<<"full house"<<endl;
				break;
			}
		}
		if(f3) continue;

		/*straight*/
		for(int i=0;i<14;i++){
			if(card[i]==0&&card[i+1]==1){
				tmp=i+1;
				f1=true;
				for(int j=0;j<5;j++){
					if(tmp==14){
						tmp=1;
						if(card[tmp+1]==1){
							f1=false;
							break;
						}
					}
					if(card[tmp]!=1) f1=false;
					tmp++;
				}
				if(f1){
					f3=true;
					cout<<"straight"<<endl;
					break;
				}
			}
		}
		if(f3) continue;

		/*three card*/
		for(int i=0;i<14;i++){
			if(card[i]==3){
				f3=true;
				cout<<"three card"<<endl;
				break;
			}
		}
		if(f3) continue;

		/*two pair */
		f1=false,f2=false;
		for(int i=0;i<14;i++){
			if(card[i]==2&&f1==false){
				f1=true;
				continue;
			}
			if(card[i]==2) f2=true;
			if(f1==true&&f2==true){
				cout<<"two pair"<<endl;
				f3=true;
				break;
			}
		}
		if(f3) continue;

		/*one pair*/
		for(int i=0;i<14;i++){
			if(card[i]==2){
				f3=true;
				cout<<"one pair"<<endl;
				break;
			}
		}
		if(f3) continue;

		/*null*/
		cout<<"null"<<endl;
	}

	return 0;
}