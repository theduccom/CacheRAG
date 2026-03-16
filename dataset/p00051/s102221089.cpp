#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  int a;
  cin>>a;
  for(int i=0;i<a;i++){
    string numStr;
    int max=0; int min=0;
    cin>>numStr;
    int num[8];
    for(int j=0;j<8;j++){
      num[j]=numStr[j]-'0';
    }
    sort(num,num+8);
    for(int j=0;j<8;j++){
      max+=num[j]*pow(10.0,(double)j);
    }
    sort(num,num+8,greater<int>());
    for(int j=0;j<8;j++){
       min+=num[j]*pow(10.0,(double)j);
    }
    cout<<max-min<<endl;
  }
}