#include<iostream>
using namespace std;
int main(){
  int data[2][4000],n,i,f,id;
  long long a,b;
  while(1){
    cin>>n;
    if(n==0) break;
    for(i=0;i<4000;i++) data[0][i]=-1,data[1][i]=0;
    for(i=0;i<n;i++){
      cin>>id>>a>>b;
      if(a*b>999999) a=1000000,b=1;
      for(f=0;f<i+1;f++){
	if(data[0][f]==id){
	  data[1][f]+=(a*b);
	  break;
	}else if(data[0][f]==-1){
	  data[0][f]=id;
	  data[1][f]=(a*b);
	  break;
	}
      }
    }
    for(i=0,f=0;i<n;i++)
      if(data[1][i]>=1000000)cout<<data[0][i]<<"\n",f=1;
    if(f==0)cout<<"NA"<<endl;
  }
}