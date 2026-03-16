#include<iostream>
#include<algorithm>
using namespace std;
int saiki(int a, int b);
char  mas[8][8];
int main(){
  int a,b,c,i,j,n;
  cin >> n;
  for(c=1;c<=n;c++){
    for(i=0;i<8;i++){
      for(j=0;j<8;j++){
	cin >> mas[i][j];   
      }
    }
    cin >> a >> b;
    saiki(b-1,a-1);
    cout << "Data " << c << ':' << endl;
    for(i=0;i<8;i++){
      for(j=0;j<8;j++){
	cout << mas[i][j];
      }
      cout << endl;
    }
  }
}

int saiki(int a,int b){
  int t,r,i,j;
  mas[a][b]='0';
  for(i=-3;i<=3;i++){
    if(mas[a+i][b]=='1' && a+i<=7 && a+i>=0){
      saiki(a+i,b);
    }
    if(mas[a][b+i]=='1' && b+i<=7 && b+i>=0){
      saiki(a,b+i);
    }
  }
}