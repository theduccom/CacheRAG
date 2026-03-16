#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector <vector <int> > a(15,vector<int>(15,0));
  int c,d,size,o=0;
  char s1,s2;
  while(cin>>c>>s1>>d>>s2>>size){
      c+=3;d+=3;
    if(size==1){
      a[c][d]++;
      a[c][d-1]++;
      a[c-1][d]++;
      a[c+1][d]++;
      a[c][d+1]++;
    }
    if(size==2){
      a[c][d]++;
      a[c][d-1]++;
      a[c-1][d]++;
      a[c+1][d]++;
      a[c][d+1]++;
      a[c-1][d-1]++;
      a[c+1][d+1]++;
      a[c-1][d+1]++;
      a[c+1][d-1]++;
    }
    if(size==3){
      a[c][d]++;
      a[c][d-1]++;
      a[c-1][d]++;
      a[c+1][d]++;
      a[c][d+1]++;
      a[c-1][d-1]++;
      a[c+1][d+1]++;
      a[c-1][d+1]++;
      a[c+1][d-1]++;
      a[c+2][d]++;
      a[c-2][d]++;
      a[c][d+2]++;
      a[c][d-2]++;
    }
  }
  int maxi = 0;
  for(int i = 3; i < 13; i++){
    int d = *max_element(a[i].begin(),a[i].end());
    maxi = max (maxi, d);
    for(int j = 3; j < 13; j++){
      if(a[j][i]==0) o++;
    }
  }
 cout<<o<<endl<<maxi<<endl;
}