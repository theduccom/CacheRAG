#include <iostream>
using namespace std;

int main(){
  int a,b,c,d,e,k[14],max,max2,str,straight;
  char s;
  while(cin>>a>>s>>b>>s>>c>>s>>d>>s>>e){
    for(int i=1;i<=13;i++)k[i]=0;
    k[a]++;
    k[b]++;
    k[c]++;
    k[d]++;
    k[e]++;
    max=0;
    max2=0;
    str=0;
    straight=0;
    for(int i=1;i<=13;i++){
      if(max<=k[i]){//??°???
	max2=max;
	max=k[i];
      }else if(max2<=k[i])max2=k[i];

      if(k[i]==1){
	str++;
	if(str==5)straight=1;
      }else str=0;
      
    }
    
    if(max==4&&max2==1)cout<<"four card"<<endl;
    else if(max==3&&max2==2)cout<<"full house"<<endl;
    else if(straight==1)cout<<"straight"<<endl;
    else if(k[10]==1&&k[11]==1&&k[12]==1&&k[13]==1&&k[1]==1)cout<<"straight"<<endl;
    else if(max==3&&max2==1)cout<<"three card"<<endl;
    else if(max==2&&max2==2)cout<<"two pair"<<endl;
    else if(max==2&&max2==1)cout<<"one pair"<<endl;
    else cout<<"null"<<endl;
    
							

  }
  return 0;
}