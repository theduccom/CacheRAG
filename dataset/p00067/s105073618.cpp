#include <iostream>
#include <stdio.h>
#include <sstream>
using namespace std;



int main(){
	//string a;

	for(;;){
		//if(a == "NULL") break;
		//		b= "000000000000";
		char cmap[2];
		int map[13][13]={0},flag[12][12]={0};
		int adjoin[100][100] = {0};
		//string linemap;


		//if(!fscanf(stdin,"%1d",&map[0][0])) break;
		//cout << map[0][0] <<endl;
		//if(!fscanf(stdin,"%1d",&map[0][0])) break;
		/*if(!fscanf(stdin,"%1d",&map[0][0])) break;
		cout << map[0][0] << endl;
		for(int j=1;j<12;j++){
		fscanf(stdin,"%1d",&map[0][j]);
		}*/
		for(int i=0;i<12;i++){
			//map[0][i] = a[i];
			for(int j=0;j<12;j++){
				//if(i ==0 && j == 0) continue;
				if(fscanf(stdin,"%1d",&map[i][j]) != EOF){
				//if(fgets(cmap,1,stdin)){
					//cout << i*13+j << " ";
					//sscanf(cmap,"%d",&map[i][j]);
				}
				else{
					//cout << "owatta" << endl;
					goto loop1;
				}
				//	fgets(&map[i][j],1,stdin)
			}
		}
		/*	if(map[0][0] == 'NULL'){
		cout << "break" << endl;
		break;
		}*/
		//cout << map[0][0] << endl;
		//if(map[0][0]==2) break;
		//		cout << map[0][2] << map[3][4] << endl;
		//		cout << endl;

		int count = 0;
		//Æè ¦¸¶Æãª éÈçêv³¹é
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(map[i][j] == 1){
					if(j>0 && map[i][j-1]==1){
						flag[i][j] = flag[i][j-1];
					}
					else if(i>0 && map[i-1][j]==1){
						flag[i][j] = flag[i-1][j];
					}
					else{
						flag[i][j] = ++count;
						//	count++;
					}
				}
			}
		}

		//ÔÌ×ÚÖWðmF
		for(int i=0;i<11;i++){
			for(int j=0;j<12;j++){
				//cout << map[i][j];
				//				if(map[i][j] == 1){
				if(map[i][j]*map[i+1][j] != 0 && flag[i][j]!=flag[i+1][j]){
					//					adjoin[flag[i][j]][flag[i+1][j]] = 1;
					if(adjoin[flag[i][j]][flag[i+1][j]] == 0){
						//cout << count << " " << i <<" " << j << endl;
						--count;
						adjoin[flag[i][j]][flag[i+1][j]] = 1;
					}
				}
				//}
			}
		}

		/*for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				cout << map[i][j] << " " ;
			}
			cout << endl;
		}*/
		//cout << endl;
		//if(!count) break;
		cout << count << endl;

	}
	loop1:;
}