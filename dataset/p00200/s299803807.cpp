#include<iostream>
using namespace std;

const int INF = 1000000000;

int main(){

int n,m;
int a,b,c,t;


int k;
int p[200];
int q[200];
int r[200];

while(true){
 cin >> n >> m;
 if(n==0 && m==0) break;
 int C[100][100];
 int T[100][100];
 for(int i=0; i<m; i++){
  for(int j=0; j<m; j++){
   if(i==j){
    C[i][j] = T[i][j] = 0;
   }else{
    C[i][j] = T[i][j] = INF;
   }
  }
 }
 for(int i=0; i<n; i++){
  cin >> a >> b >> c >> t;
  C[a-1][b-1] = C[b-1][a-1] = c;
  T[a-1][b-1] = T[b-1][a-1] = t;
 }

 for(int x=0; x<m; x++){
  for(int y=0; y<m; y++){ 
   for(int z=0; z<m; z++){
    if(T[y][z]>T[y][x]+T[x][z]){
     T[y][z]=T[y][x]+T[x][z];
    }
    if(C[y][z]>C[y][x]+C[x][z]){
     C[y][z]=C[y][x]+C[x][z];
    }
   }
  }
 }



 cin >> k;
 for(int i=0; i<k; i++){
  cin >> p[i] >> q[i] >> r[i];
 }

 for(int i=0; i<k; i++){
  if(r[i]==0){
   cout << C[p[i]-1][q[i]-1] << endl;
  }else{
   cout << T[p[i]-1][q[i]-1] << endl;
  }
 }
} 

return 0;
}