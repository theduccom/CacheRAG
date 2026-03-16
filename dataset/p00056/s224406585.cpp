#include<bits/stdc++.h>
using namespace std;

vector <int> p(0);

void Prime(int n){

  bool flg[50000];
  int indx=2;

  flg[0]=flg[1]=0;
  for(int i=0; i<n; i++)flg[i]=0;
  

  while(indx<n){
    flg[indx]=1;
    p.push_back(indx);
    for(int i=2; i*indx<n; i++){
      flg[indx*i]=1;
    }

    while(flg[indx]==1 && indx<n)indx++;

  }
}

int main(){

  int n;
  int sum;

  Prime(50000);

  while(cin >> n,n){

    sum = 0;

    

      for(int i=0; i<(int)p.size(); i++){
	if(p[i]>=n)break;
	
	if( binary_search(p.begin()+i , p.end() , n-p[i])==true)sum++;

      }

    cout << sum << endl;
	  

    }


  return 0;
}