#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n,m,data[1001];
  while(cin>>n>>m&&n|m){
    int sum=0;
    for(int i=0;i<n;i++){
      cin>>data[i];
      sum+=data[i];
    }
    sort(data,data+n,greater<int>());
    for(int i=m-1;i<n;i+=m)sum-=data[i];
    cout << sum << endl;
  }
}