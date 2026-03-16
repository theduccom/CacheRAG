#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

bool check[101][101]={false};
int h,w;
char mas[101][101]={0};
pair<int, int> func(){
	/*for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				cout << mas[i][j];
			}
			cout << endl;
		}*/
	for(int i=0; i<h;){
		for(int j=0; j<w;){
			if(check[i][j]==true) return make_pair(-1,-1);
			check[i][j]=true;
			//cout << i << " " << j << endl;
			if(mas[i][j]=='>') j++;
			if(mas[i][j]=='<') j--;
			if(mas[i][j]=='v') i++;
			if(mas[i][j]=='^') i--;
			if(mas[i][j]=='.') return make_pair(i,j);
		}
	}
}

int main(){
	
	
	
	while(1){
		cin >> h >> w;
		if(h==0 && w==0) break;
		for(int i=0; i<h; i++){
			scanf("%s",&mas[i]);
		}
		
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				check[i][j]=false;
			}
		}
		pair<int, int> a=func();
		if(a.first==-1) cout << "LOOP" << endl;
		else cout << a.second << " " << a.first << endl;
	}
	return 0;
}