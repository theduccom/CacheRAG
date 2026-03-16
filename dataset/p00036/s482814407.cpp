#include <iostream>
using namespace std;
int m[10][10]={0},a[5],k=0;

void dfs(int i,int j){
  if(m[i-1][j]==1){
    m[i-1][j]=0;
    a[k]=1;
    //cout<<"1"<<" ";////
    k++;
    dfs(i-1,j);
  }
  if(m[i][j-1]==1){
    //  cout<<"2"<<" ";////
    m[i][j-1]=0;
    a[k]=2;
    k++;
    dfs(i,j-1);
  }
  if(m[i+1][j]==1){
    //    cout<<"3"<<" ";////
    m[i+1][j]=0;
    a[k]=3;
    k++;
    dfs(i+1,j);  
  }
  if(m[i][j+1]==1){
    //    cout<<"4"<<" ";////
    m[i][j+1]=0;
    a[k]=4;
    k++;
    dfs(i,j+1); 
  }  
}

int main(){
  int ih=0,jh=0;
  char s;
  while(cin>>s){
    k=0;
    m[1][1]=s-'0';
    for(int i=1;i<=8;i++){
      for(int j=1;j<=8;j++){
	//cout<<i<<" "<<j<<endl;/////
	if(i==1&&j==1)continue;
	else cin>>s;
	m[i][j]=s-'0';
	
	if(m[i][j]==1){
	  ih=i;
	  jh=j;
	}
	
      }
    }
    m[ih][jh]=0;
    dfs( ih , jh );
    //cout<<endl<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;////
    if(a[0]==1&&a[1]==2&&a[2]==3)cout<<"A"<<endl;
    else if(a[0]==1&&a[1]==1&&a[2]==1)cout<<"B"<<endl;
    else if(a[0]==2&&a[1]==2&&a[2]==2)cout<<"C"<<endl;
    else if(a[0]==1&&a[1]==4&&a[2]==1)cout<<"D"<<endl;
    else if(a[0]==2&&a[1]==1&&a[2]==2)cout<<"E"<<endl;
    else if(a[0]==1&&a[1]==2&&a[2]==1)cout<<"F"<<endl;
    else if(a[0]==1&&a[1]==4&&a[2]==2)cout<<"G"<<endl;

  }
  return 0;
}