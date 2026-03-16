#include<iostream>
#include<cstring>
using namespace std;

int main(){
  int n,ansc[100]={},o=0,hr=0,h=0,o2=0;
  string event;
  cin>>n;
  int i=0;
  int j=0;
  while(1){
    cin>>event;
    if(event=="OUT"){
      o++;
      o2++;
    }
    if(event=="HIT")h++;
    if(event=="HOMERUN")hr++;

    if(o2==3*n)break;

    if(h==4){
      ansc[j]++;
      h--;
    }
    else if(o==3){
      o=0;
      h=0;
      hr=0;
      j++;
    }
    else if(hr==1){
      ansc[j]+=h+1;
      h=0;
      hr=0;
    }
    i++;
  }
  for(int j=0;j<n;j++)
  cout<<ansc[j]<<endl;
  return 0;
}