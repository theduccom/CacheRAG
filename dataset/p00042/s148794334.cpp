#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#define ll long long int
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> P;

string str;

int main()
{
  int w,n;
  int i=1,j,k;
  int max_value[1001][1001];
  int value,weight;

  while(1){
    cin>>w;
    if(w==0)break;
    cin>>n;
   
    rep(j,1001)
      rep(k,1001)
      max_value[j][k]=-1;

    max_value[0][0]=0;

    for(j=1;j<=n;j++){
      scanf("%d,%d",&value,&weight);
      for(k=0;k<=w;k++){
	//cout<<j<<" "<<k<<endl;
	if(max_value[j-1][k]<0)
	  continue;
       	//cout<<j<<" "<<k<<endl;
	max_value[j][k]=max(max_value[j][k],max_value[j-1][k]);//j????????????????????\?????????
	
	//cout<<" "<<j<<" "<<k<<endl;
	int a,b;
	/*
	cout<<"debug"<<endl;
	rep(a,n+1){
	  rep(b,w+1)
	    printf(" %2d",max_value[a][b]);
	  cout<<endl;
	}
	*/
       
	if(k+weight<=w)
	  max_value[j][k+weight]=max(max_value[j][k+weight],max_value[j-1][k]+value);//??\??????
	/*
	cout<<"debug"<<endl;
	rep(a,n+1){
	  rep(b,w+1)
	    printf(" %2d",max_value[a][b]);
	  cout<<endl;
	}
	*/
      }
    }


    cout<<"Case "<<i<<":"<<endl;

    int max=0;
    int maxi=w+1;

    for(j=n;j>=0;j--){
      for(k=w;k>=0;k--)
	//	cout<<max_value[j][k]<<" ";
	if(max_value[j][k]>=max && maxi>k){
	  max=max_value[j][k];
	  maxi=k;
	  //	  cout<<"maxi"<<k<<endl;
	}
      //	cout<<endl;
    }
    cout<<max<<endl;
    cout<<maxi<<endl;
    i++;
  }
}