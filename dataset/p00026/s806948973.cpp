#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	int mas[14][14];
	for(int i=0; i<14; i++){
		for(int j=0; j<14; j++){
			mas[i][j] = 0;
		}
	}
	int size1x[] = {-1, 0, 1, 0};	
	int size1y[] = {0, -1, 0, 1};	
	int size2x[] = {-1, 1, 1, -1};	
	int size2y[] = {-1, -1, 1, 1};	
	int size3x[] = {-2, 0, 2, 0};	
	int size3y[] = {0, -2, 0, 2};	
	while(cin>>input){
		int x, y, size;
		sscanf(input.c_str(), "%d,%d,%d", &x, &y, &size);
		x += 2;
		y += 2;
		mas[x][y]++;
		for(int i=0; i<4; i++){
			if(size >= 1) mas[x+size1x[i]][y+size1y[i]]++;
			if(size >= 2) mas[x+size2x[i]][y+size2y[i]]++;
			if(size >= 3) mas[x+size3x[i]][y+size3y[i]]++;
		}
		/* //ツデツバツッツグツ用
		for(int i=2; i<12; i++){
			for(int j=2; j<12; j++){
				cout<<mas[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
		// */
	}
	int num = 100;
	int maxv = 0;
	for(int i=2; i<12; i++){
		for(int j=2; j<12; j++){
			if(mas[i][j]){
				num--;
				maxv = max(maxv, mas[i][j]);
			}
		}
	}
	cout<<num<<endl<<maxv<<endl;
	return 0;
}