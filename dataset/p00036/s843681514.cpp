#include<iostream>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
char G[8][8];
bool p(int i, int j){
if ( !(0 <= i && i < 8 && 0 <= j && j < 8) ) return false;
return G[i][j] == '1';
}
main(){
    while( cin >> G[0][0] ){
	int si = 0, sj = 0;
	rep(i, 8) rep(j, 8) {
	    if (i + j == 0) continue;
	    cin >> G[i][j];
	    if(G[i][j] == '1') { si = i; sj = j;}
	}
	if ( p(si-3, sj) ) cout << "B" << endl;
	else if ( p(si, sj-3) ) cout << "C" << endl;
	else if ( p(si-2, sj+1)) cout << "D" << endl;
	else if ( p(si-1, sj-2)) cout << "E" << endl;
	else if ( p(si-2, sj-1)) cout << "F" << endl;
	else if ( p(si, sj-1) && p(si-1, sj+1) ) cout << "G" << endl;
	else cout << "A" << endl;
    }
}