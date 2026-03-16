#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;
const int MAX_N=5;
const int BINS=13;
int main(){ _;
  int a[MAX_N];
  int b[BINS+1];
  while(scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4])!=-1){
    REP(i,BINS+1) b[i]=0;
    REP(i,MAX_N) b[a[i]-1]++;
    b[13]=b[0];
    for(int i=0;i<BINS;i++)
      if(b[i]==4){
	cout<<"four card"<<endl;
	goto NEXT;
      }
    for(int i=0;i<BINS;i++)
      for(int j=0;j<BINS;j++)
	if(b[i]==2&&b[j]==3){
	  cout<<"full house"<<endl;
	  goto NEXT;
	}
    for(int i=0;i<10;i++)
      if(b[i]==1&&b[i+1]==1&&b[i+2]==1&&b[i+3]==1&&b[i+4]==1){
	cout<<"straight"<<endl;
	goto NEXT;
      }
    for(int i=0;i<BINS;i++)
      if(b[i]==3){
	cout<<"three card"<<endl;
	goto NEXT;
      }
    for(int i=0;i<BINS;i++)
      for(int j=0;j<BINS;j++)
	if(i!=j&&b[i]==2&&b[j]==2){
	  cout<<"two pair"<<endl;
	  goto NEXT;
	}
    for(int i=0;i<BINS;i++)
      if(b[i]==2){
	cout<<"one pair"<<endl;
	goto NEXT;
      }
    cout<<"null"<<endl;
  NEXT:;
  }
}