#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
  int n;cin>>n;
  for(int i=0;i<n;i++){
    string a;cin>>a;
    int aa=0;
    vector<int> aaa(8);
    for(int j=0;j<8;j++){
      aaa[j]=a[j]-'0';
    }
    sort(aaa.begin(),aaa.end());
    int m1=0;
    for(int j=0;j<8;j++){
      int ss=1;
      for(int k=j;k<7;k++)
	ss*=10;
      m1+=aaa[j]*ss;
    }
    sort(aaa.begin(),aaa.end(),greater<int>());
    int m2=0;
    for(int j=0;j<8;j++){
      int ss=1;
      for(int k=j;k<7;k++)
	ss*=10;
      m2+=aaa[j]*ss;
    }
    //cout<<m1<<" "<<m2<<endl;
    cout<<-m1+m2<<endl;
  }
  return 0;
}