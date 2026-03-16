#include <iostream>
using namespace std;
const int N = 8;
void bom(int,int);
int where[N][N];
int main(){
  int n,x,y,i,j,l,flag;
  string S[N];
  cin >> n;
  l=1;
  while(n){
    for(i=0;i<N;i++)
      for(j=0;j<N;j++)
	where[i][j]=0;//???????????±?????????????????¨??????=1
    for(i=0;i<N;i++){
      cin >> S[i];
    }
    cin >> x >> y;
    x--;
    y--;
    S[y][x]='0';
    bom(y,x);
    while(1){
      flag=0;
      for(i=0;i<N;i++){
	for(j=0;j<N;j++){
	  if(where[i][j]==1&&S[i][j]=='1'){
	    flag=1;
	    S[i][j]='0';
	    bom(i,j);
	  }
	}
      }
      if(flag==0) break;
    }
    cout << "Data " << l << ':' << endl;
    for(i=0;i<N;i++) cout << S[i] << endl;
    n--;
    l++;
  }
  return 0;
}
void bom(int y,int x){
  int cpy,cpx,cnt;
  where[y][x]=1;
  cpy=y;
  cnt=0;
  while(1){
    cpy--;
    if(cpy<0) break;
    where[cpy][x]=1;
    cnt++;
    if(cnt==3) break;
  }
  cpx=x;
  cnt=0;
  while(1){
    cpx--;
    if(cpx<0) break;
    where[y][cpx]=1;
    cnt++;
    if(cnt==3) break;
  }
  cpy=y;
  cnt=0;
  while(1){
    cpy++;
    if(cpy==N) break;
    where[cpy][x]=1;
    cnt++;
    if(cnt==3) break;
  }
  cpx=x;
  cnt=0;
  while(1){
    cpx++;
    if(cpx==N) break;
    where[y][cpx]=1;
    cnt++;
    if(cnt==3) break;
  }
}