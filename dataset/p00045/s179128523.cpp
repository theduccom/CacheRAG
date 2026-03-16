#include <iostream>
#include <cmath>
#include <utility>
#include <vector>
 
using namespace std;
 
int GetSum(const vector<pair<int,int> >& data){
  int sum=0;
  for(auto priceandnum:data)
    sum+=priceandnum.first*priceandnum.second;
  return sum;
}
 
int GetAve(const vector<pair<int,int> >& data){
  double sum=0;
  for(auto priceandnum:data)
    sum+=priceandnum.second;
  sum/=data.size();
  return round(sum);
}
 
int main(){
  vector<pair<int,int> > data;
  int price,num;
  char c;
  while(cin>>price>>c>>num){
    data.push_back(pair<int,int>(price,num));
  }
  cout<<GetSum(data)<<endl;
  cout<<GetAve(data)<<endl;
}