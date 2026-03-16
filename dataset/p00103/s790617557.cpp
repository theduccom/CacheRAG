#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  cin>>n;
  int points[n];
  for(int i=0;i<n;i++){
    bool base[3]={false,false,false};int outs=0;
    string action;int point=0;
    while(outs!=3){
      cin>>action;
      if(action=="HIT"){
        if(base[0]==false)base[0]=true;
        else if(base[1]==false)base[1]=true;
        else if(base[2]==false)base[2]=true;
        else point++;
      }
      else if(action=="HOMERUN"){
        int runner=0;
        for(int k=0;k<3;k++){
          if(base[k]==true)runner++;
        }
        for(int k=0;k<3;k++){
          base[k]=false;
        }
        point=point+runner+1;
      }
      else if(action=="OUT"){
        outs++;
      }
    }
    points[i]=point;
  }
  for(int i=0;i<n;i++){
    cout<<points[i]<<endl;
  }
}