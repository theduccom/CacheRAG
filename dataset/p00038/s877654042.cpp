//32
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  for(;;){
    int occ[14]={};
    for(int i=0;i<5;i++){
      int h;
      cin>>h;
      cin.ignore();
      if(!cin)return 0;
      occ[h]++;
    }
    int me=*max_element(occ,occ+14);
    int c2=count(occ,occ+14,2);
    int *lr=find(occ,occ+14,1);
    if(me==4){
      cout<<"four card"<<endl;
    }else if(me==3 && c2){
      cout<<"full house"<<endl;
    }else if(count(lr,lr+5,1)==5 || count(occ+10,occ+14,1)==4&&occ[1]){
      cout<<"straight"<<endl;
    }else if(me==3){
      cout<<"three card"<<endl;
    }else if(c2==2){
      cout<<"two pair"<<endl;
    }else if(c2==1){
      cout<<"one pair"<<endl;
    }else{
      cout<<"null"<<endl;
    }
  }
  return 0;
}