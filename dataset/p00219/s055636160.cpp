#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

  int n;
  while(cin >> n){
    vector<int>co;
    int i;
    int no;
    if(n==0)
      break;
    for(i=0;i<10;i++)
      co.push_back(0);
    for(i=0;i<n;i++){
      cin >> no;
      co[no]++;
    }
    for(i=0;i<10;i++){
      int j;
      for(j=0;j<co[i];j++)
	cout << '*';
      if(co[i]==0)
	cout << '-';
      cout << endl;
    }
  }
}