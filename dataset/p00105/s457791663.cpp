#include<iostream>
#include<string>
using namespace std;
typedef struct{
  string first;
  int second;
}SI;
int main(){
  SI pa[101];
  int k=0;
  
  while(cin >> pa[k].first >> pa[k].second){
    k++;
  }

  for(int i=0;i<k-1;i++){
    for(int j=i+1;j<k;j++){
      if(pa[i].first > pa[j].first){
	  SI temp = pa[i];
	  pa[i] = pa[j];
	  pa[j] = temp;
      } else if(pa[i].first == pa[j].first && pa[i].second > pa[j].second){
	SI temp = pa[i];
	pa[i] = pa[j];
	pa[j] = temp;
      }
    }
  }

 
  cout << pa[0].first << endl << pa[0].second;
  for(int i=1;i<k;i++){
    if(pa[i-1].first == pa[i].first) cout << ' ' << pa[i].second;
    else cout << endl << pa[i].first << endl << pa[i].second;
  }
  cout << endl;
  return (0);
}