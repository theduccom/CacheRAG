#include<iostream>
#include<vector>

using namespace std;

double abs(double a){
  if (a<0.0){
    return -a;
      }
  return a;
}

int main(){
  vector<vector<double > >a;

  double x,y;
  char comma;
  int data_num=0;
  for (int i=0;i<30;i++){
    while(cin >> x >> comma >>y ){
vector<double> hoge;
        hoge.push_back(x);
        hoge.push_back(y);
        a.push_back(hoge);
      data_num+=1;
    }
  }
  double x0,y0;
  x0=a[0][0];
  y0=a[0][1];
  for (int i=0;i< static_cast<int>(a.size()) ;i++){
    a[i][0]=a[i][0]-x0;
    a[i][1]=a[i][1]-y0;
  }
  double sum=0.0;
  for (int i=1;i<=data_num-2;i++){
    sum+=abs(a[i][0]*a[i+1][1]-a[i+1][0]*a[i][1])/2.0;
  }
  cout<<sum<<endl;
  return 0;
}