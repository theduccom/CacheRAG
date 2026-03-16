#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<deque>

using namespace std;

int main(){
  int a,b,c;
  int n;

  while(1){
    //a,b,cの入力
    /*    char line[100];
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d %d %d",&a,&b,&c);
    */

    scanf("%d %d %d",&a,&b,&c);
    //a=b=c=0 なら終了
    if(a==0&&b==0&&c==0){
      break;
    }

    //対角線の半分を求め、その最大値を求める
    double d[3];
    d[0]=sqrt(a*a+b*b)/2;
    d[1]=sqrt(b*b+c*c)/2;
    d[2]=sqrt(c*c+a*a)/2;
    double mind=d[0];
    for(int i=0;i<2;i++){
      if(mind>d[i]) mind=d[i];
    }

    //nの入力
    cin>>n;

    //rの入力、判定
    for(int i=0;i<n;i++){
      double r=0;
      cin>>r;
      if(mind<r){
	cout<<"OK\n";
      }
      else{
	cout<<"NA\n";
      }
    }
  }
  return 0;
}