#include <iostream>
using namespace std;

int main(void){
	char array[100][100];
	int i,j,w,h;
	while(1){
		cin >> w;
		cin >> h;
		if(w == 0 || h == 0) break;
		for(i=0;i<w;i++) for(j=0;j<h;j++) cin >> array[i][j];		
		i=0;j=0;
		while(1){
			if(array[i][j] == '>'){ array[i][j] = '/'; j++;}
			else if(array[i][j] == '<'){ array[i][j] = '/'; j--;}
			else if(array[i][j] == '^'){ array[i][j] = '/'; i--;}
			else if(array[i][j] == 'v'){ array[i][j] = '/'; i++;}
			else break;
		}
		if(array[i][j] == '/'){ cout << "LOOP" << endl; }
		else { cout << j << " " << i << endl; }
	}
	return 0;
}