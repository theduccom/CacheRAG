#include<iostream>
main(){
  int n,a,b,c,d,M[22][22],i,j,k;
  std::cin>>n>>k;
  for(i=0;i++<n;)for(j=0;j++<n;)M[i][j]=1<<29;
  for(;k+1;){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    if(k--){M[a][b]=c;M[b][a]=d;}
  }
  for(k=0;k++<n;)for(i=0;i++<n;)for(j=0;j++<n;)
    M[i][j]=std::min(M[i][j],M[i][k]+M[k][j]);
  printf("%d\n",c-d-M[a][b]-M[b][a]);
}