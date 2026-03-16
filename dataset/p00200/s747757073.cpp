#include<iostream>
using namespace std;
#define INFTY (1<<21)
#define MAX 100
void floyd(int m, int C[MAX][MAX], int T[MAX][MAX]){
for(int k = 0;k<m;k++)
for(int i = 0;i<m;i++)
for(int j = 0;j<m;j++){
C[i][j] = min( C[i][j], C[i][k] + C[k][j] );
T[i][j] = min( T[i][j], T[i][k] + T[k][j] );
}
}
main(){
int n, m, a, b, c, t, k, q, C[MAX][MAX], T[MAX][MAX];
while( cin >> n >> m && !(n == 0 && m == 0) ){
for(int i = 0;i<m;i++)
for(int j = 0;j<m;j++) { C[i][j] = T[i][j] = INFTY; }
for(int i = 0;i<n;i++){
cin >> a >> b >> c >> t;
C[a-1][b-1] = C[b-1][a-1] = c;
T[a-1][b-1] = T[b-1][a-1] = t;
}
floyd(m, C, T);
cin >> k;
for(int i = 0;i<k;i++){
cin >> a >> b >> q;
if ( q ) cout << T[a-1][b-1] << endl;
else cout << C[a-1][b-1] << endl;
}
}
}