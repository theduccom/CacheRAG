#include <iostream>
#include <queue>
#include <map>
using namespace std;

int main() {
    queue <string> Q;
    map <string, int> M;
    string start = "01234567";
    Q.push( start );
    M[start] = 0;
    int dr[4] = { 0, 0, 1, -1 };
    int dc[4] = { 1, -1, 0, 0 };
    while ( !Q.empty() ) {
        string node = Q.front();
        Q.pop();

        for ( int i = 0; i < 8; i++ ) {
            if ( node[i] != '0' ) continue;
            for ( int k = 0; k < 4; k++ ) {
                string next_node = node;
                int c = i%4;
                int r = i/4;
                int nr = r + dr[k];
                int nc = c + dc[k];
                if ( nr < 0 || nr >= 2 || nc < 0 || nc >= 4 ) continue;
                int ni = nr * 4 + nc;
                swap( next_node[i], next_node[ni] );
                if ( M.count( next_node ) ) continue;
                M[next_node] = M[node] + 1;
                Q.push( next_node );
            }
        }
    }

    int C[8];
    while ( cin >> C[0] ) {
        for ( int i = 1; i < 8; i++ ) cin >> C[i];
        string s;
        for ( int i = 0; i < 8; i++ ) s += (char)( C[i] + '0' );
        cout << M[s] << endl;
    }
}