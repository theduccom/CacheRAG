#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	char p[8][9];
	int i,j;
	while(cin>>p[0]>>p[1]>>p[2]>>p[3]>>p[4]>>p[5]>>p[6]>>p[7]){
		for(i=0; i<8 ; ++i){
			for(j=0 ;j < 9 ; ++j){
				if(p[i][j]=='1') goto next; 
			}
		}
		next:
		if (p[i][j+1]=='1' &&p[i+1][j]=='1' && p[i+1][j+1]=='1') cout << 'A' << endl;
		else if (p[i+1][j]=='1' && p[i+2][j]=='1' && p[i+3][j]=='1') cout << 'B' << endl;
		else if (p[i][j+1]=='1' && p[i][j+2]=='1' && p[i][j+3]=='1') cout << 'C' << endl;
		else if (p[i+1][j]=='1' && p[i+1][j-1]=='1' && p[i+2][j-1]=='1' ) cout << 'D' << endl;
		else if (p[i][j+1]=='1' && p[i+1][j+1]=='1' && p[i+1][j+2]=='1' ) cout << 'E' << endl;
		else if (p[i+1][j]=='1' && p[i+1][j+1]=='1' && p[i+2][j+1]=='1' ) cout << 'F' << endl;
		else if (p[i][j+1]=='1' && p[i+1][j]=='1' && p[i+1][j-1]=='1' ) cout << 'G' << endl;
	}
	return 0; 
}