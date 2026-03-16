#include<iostream>
using namespace std;
int main(){
	int n;
	string str;
	cin >> n;
	while(n--){
		int out=0,base[5]={},score=0;
		while(1){
			cin >> str;
			base[0] = 1;
			if(str=="OUT"){
				out++;
				if(out==3)	break;
			}
			else if(str=="HIT"){
				for(int i=4;i>=1;i--)	base[i]=base[i-1];
				if(base[4]>0){
					score++;
					base[4]=0;
				}
			}
			else{
				for(int i=0;i<4;i++){
					if(base[i]>0){
						score++;
						base[i] = 0;
					}
				}
			}
			//cout << base[1] << ' ' << base[2] << ' ' << base[3] << endl;
		}
		cout << score << endl;
	}
	return 0;
}
