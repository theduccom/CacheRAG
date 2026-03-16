#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main(){

  int d, w, h;
  int n;
  int i;
  int tmp;
  int tmp_1, tmp_2;

  while(1){
    cin >> d >> w >> h;

    if(d==0 && w==0 & h==0)
      break;
    
    cin >> n;

    int r[n];

    if(d<=w && d<=h){
      tmp_1=d*d;
      if(w<=h){
	tmp_2=w*w;
      } else {
	tmp_2=h*h;
      }
    } else {
      tmp_1=w*w;
      tmp_2=h*h;
    }
       
    tmp=tmp_1+tmp_2;
    tmp=sqrt(tmp);
    tmp/=2;

    for(i=0;i<n;i++){
      cin >> r[i];
    }

    for(i=0;i<n;i++){
      if(r[i]>tmp){
	cout<< "OK" << endl;
      } else {
	cout<< "NA" << endl;
      }
    }
  }
}
