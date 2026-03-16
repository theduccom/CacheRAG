#include <iostream>
using namespace std;

int main(){
    char mymap[101][101];
    int x, y;
    int px = 0; int py = 0; int step = 0;
    while (1){
	cin >> x >> y;
	if (!x && !y) break;
	for (int i = 0; i < x; i++){
	    for (int j = 0; j < y; j++){
		cin >> mymap[i][j];
	    }
	}
/*	for (int i = 0; i < x; i++){
	for (int j = 0; j < y; j++){
	cout << mymap[i][j];
	}
	cout << endl;
	}
*/
	step = px = py = 0;
	while (mymap[px][py] != '.' && step <= x*y){
	    switch (mymap[px][py]){
		case '>':
		    py++; break;
		case 'v':
		    px++; break;
		case '<':
		    py--; break;
		case '^':
		    px--; break;
		default: break;
	    }
	    step++;
	}
	if (step <= x*y)
	    cout << py << " " << px << endl;
	else
	    cout << "LOOP" << endl;
    }
}