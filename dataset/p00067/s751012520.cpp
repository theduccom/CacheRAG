#include<map>
#include<list>
#include<stack>
#include<queue>
#include<cmath>
#include<string>
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

char tmap[12][12];
int c;

void Terrain(int i,int l){

	if (tmap[i][l] == '0'||i < 0 || i > 11 || l < 0 || l > 11) return;

	tmap[i][l] = '0';

	Terrain(i + 1, l);
	Terrain(i - 1, l);
	Terrain(i, l + 1);
	Terrain(i, l - 1);

	return;

}
int main(){
	int cunt = 0;
	while (cin >> tmap[0]){
		for (int i = 1; i < 12; i++) cin >> tmap[i];
		for (int i = 0; i < 12; i++){
			for (int l = 0; l < 12; l++){
				if (tmap[i][l] == '1'){
					Terrain(i, l);
					cunt++;
				}
			}
		}
		cout << cunt << endl;
		cunt = 0;
	}
	return 0;
}