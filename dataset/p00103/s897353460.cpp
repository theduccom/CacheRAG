#include<stdio.h>
#include<iostream>
using namespace std;

int point;
int rui;
int oc;

void hit(){
  rui++;
  if(rui>3){
    point++;
    rui=3;
  }
}
void out(){
  oc++;
}

void home(){
  point+=1;
  point+=rui;
  rui=0;
}

int main(){
  int i,n;
  string event;
  point=0;
  rui=0;
  oc=0;

  cin >> n;
  for(i=0;i<n;i++){

    while(1){
      if(oc==3){
	rui=0;
	oc=0;
	break;
}
      cin >> event;
      if(event == "HIT"){
	hit();
      }else if(event == "OUT"){
	out();
      }else if(event == "HOMERUN"){
	home();
      }
    }
    cout << point << endl;
    point=0;
  }
  return 0;
}