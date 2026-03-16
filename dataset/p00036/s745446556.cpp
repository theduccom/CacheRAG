#include <iostream>
using namespace std;

int ary[128];
int kat[7][3]={{1,8,9},{8,16,24},{1,2,3},{7,8,15},{1,9,10},{8,9,17},{1,7,8}};
int main(){
	while(true){
		char ch;
		for(int i=0;i<64;i++){
			cin>>ch;
			ary[i]=ch-'0';
		}
		if(cin.eof()) break;
		int res=-1;
		for(int i=0;i<64;i++){
			if(ary[i]){
				for(int j=0;j<7;j++){
					bool fla=true;
					for(int k=0;k<3;k++){
						if(!ary[i+kat[j][k]]) fla=false;
					}
					if(fla){
						res=j;
						goto aaa;
					}
				}
			}
		}
aaa:
		cout<<(char)('A'+res)<<endl;
	}
	return 0;
}