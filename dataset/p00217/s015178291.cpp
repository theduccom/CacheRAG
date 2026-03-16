#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,p[10005],d1[10005],d2[10005],sum[10005];
  int max[55],max2[55],j=0;
  cin>>n;
  while(n!=0){
    max2[j]=0;
    for(int i=0;i<n;i++){
      cin>>p[i]>>d1[i]>>d2[i];
      sum[i]=d1[i]+d2[i];
      if(sum[i]>max2[j]){
	max2[j]=sum[i];
	max[j]=p[i];
      }
    }
    j++;
    cin>>n;
  }
  for(int i=0;i<j;i++){
    cout<<max[i]<<" "<<max2[i]<<"\n";
  }
  return 0;
}

