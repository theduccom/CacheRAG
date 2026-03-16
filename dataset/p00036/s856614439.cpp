#include <iostream>
#include <vector>
using namespace std;
int cx[7][3]={{1,0,1}, {0,0,0}, {1,2,3}, {-1,0,-1}, {1,1,2}, {0,1,1}, {1,-1,0}};
int cy[7][3]={{0,1,1}, {1,2,3}, {0,0,0}, {1,1,2}, {0,1,1}, {1,1,2}, {0,1,1}};

int main(){
	char field[8][8];
	while(cin >> field[0][0]){
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++){
				if(i==0 && j==0) continue;
				cin >> field[i][j];
			}
		}
		int sx=-1, sy=-1;
		vector<int> x,y;
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++){
				if(field[i][j]=='1'){
					if(sx==-1){
						sx = j;
						sy = i;
					}else{
						x.push_back(j-sx);
						y.push_back(i-sy);
					}
				}
			}
		}
		
		for(int i=0; i<7; i++){
			bool flag = true;
			for(int j=0; j<3; j++){
				if(cx[i][j]!=x[j] || cy[i][j]!=y[j]){
					flag = false;
					break;
				}
			}
			if(flag){
				cout << (char)('A'+i) << endl;
				break;
			}
		}
	}
    return 0;
}