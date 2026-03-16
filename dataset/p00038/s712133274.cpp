#include <iostream>
using namespace std;

int main() {
int a[5];
char q,w,e,r;
while(cin>>a[0]>>q>>a[1]>>w>>a[2]>>e>>a[3]>>r>>a[4]){
	for(int kk=0;kk<=3;kk++){
		for(int ll=kk+1;ll<=4;ll++){
			if(a[kk]>a[ll]){
				int t;
				t=a[ll];
				a[ll]=a[kk];
				a[kk]=t;
			}
		}
	}
	if(a[0]==a[3]||a[1]==a[4]){
		cout<<"four card"<<endl;
	}
	else{
		if((a[0]==a[2]&&a[3]==a[4])||(a[0]==a[1]&&a[2]==a[4])){
			cout<<"full house"<<endl;
		}
		else{
			if(((a[0]+1==a[1])&&(a[1]+1==a[2])&&(a[2]+1==a[3])&&(a[3]+1==a[4]))||(a[0]==1&&a[1]==10&&a[2]==11&&a[3]==12&&a[4]==13)){
				cout<<"straight"<<endl;
			}
			else{
				if(a[0]==a[2]||a[1]==a[3]||a[2]==a[4]){
					cout<<"three card"<<endl;
				}
				else{
					if((a[0]==a[1]&&a[2]==a[3])||(a[0]==a[1]&&a[3]==a[4])||(a[1]==a[2]&&a[3]==a[4])){
						cout<<"two pair"<<endl;
					}
					else{
						if(a[0]==a[1]||a[1]==a[2]||a[2]==a[3]||a[3]==a[4]){
							cout<<"one pair"<<endl;
						}
						else{
							cout<<"null"<<endl;
						}
					}
				}
			}
		}
	}
}
	return 0;
}