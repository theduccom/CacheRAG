#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int a[6],c[5]={0};
  int i,count=0;
  char x;
  while(cin>>a[0]){
    if(a[0]==1)a[5]+=14;
    for(i=1;i<5;i++){
      cin>>x>>a[i];
      if(a[i]==1)a[5]=14;
    }
    
    c[0]=c[1]=c[2]=c[3]=c[4]=0;
    sort(&a[0],&a[5]);
			
    for(i=0;i<5;i++)
      if(a[i]==a[i+1])c[0]++; else break;
    for(i=i+1;i<5;i++)
      if(a[i]==a[i+1])c[1]++; else break;
    for(i=i+1;i<5;i++)
      if(a[i]==a[i+1])c[2]++; else break;
    for(i=i+1;i<5;i++)
      if(a[i]==a[i+1])c[3]++; else break;
    
    if(c[0]==0&&c[1]==0&&c[2]==0&&c[3]==0){
      for(i=0;i<4;i++)
	if(a[i]+1==a[i+1]){
	  count++;
	}else {
	  break;
	}
      if(count==4)c[4]=1;
      count=0;
      
      if(c[4]!=1){
	for(i=1;i<6;i++)
	  if(a[i]+1==a[i+1]){
	    count++;
	  }else {
	    break;
	  }
	if(count==4)c[4]=1;
	count=0;
      }
    }
    sort(c,c+4,greater<int>());
    if(c[0]==2&&c[1]==1)cout<<"full house";
    else if(c[0]==1&&c[1]==1)cout<<"two pair";
    else if(c[0]==1)cout<<"one pair";
    else if(c[0]==2)cout<<"three card";
    else if(c[0]==3)cout<<"four card";
    else if(c[0]==4)cout<<"five card";
    else if(c[4]==1)cout<<"straight";
    else cout<<"null";
    cout<<endl;
    a[5]=0;
  }  
}