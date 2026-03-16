#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double d,w,h;
  int x[3];
  int n;
  double r;
  while(1){
    cin >> d >> w >> h;
    if(d==0&&w==0&&h==0){
      return 0;
    }
    cin >> n;
    x[0]=pow((pow(d,2)+pow(w,2)),0.5)/2;
    x[1]=pow((pow(w,2)+pow(h,2)),0.5)/2;
    x[2]=pow((pow(d,2)+pow(h,2)),0.5)/2;
    int min=100000000;
    for(int i=0;i<3;i++){
      if(min>=x[i]){
        min=x[i];
      }
    }
    
    for(int i=0;i<n;i++){
      cin >> r;
      if(r>min){
        cout << "OK" <<endl;
      }else{
        cout << "NA" <<endl;
      }
    }
  }
}
  