#include<vector>
#include<iostream>

using namespace std;

const int W = 1001;
const int N = 1001; 

int table[W][N];

void solve(int n,int lim, vector<int> price, vector<int> weight){
  int maxi_p = 0,maxi_w = 0;
  for(int i = 0;i < W;i++){
    for(int j = 0;j < N;j++){
      table[i][j] = 0;
    }
  }
  
  for(int i = 0;i < n;i++){
    table[weight[i]][i] = price[i]; 
  }
  
  
  for(int i = 0;i <=lim;i++){
    for(int j = 1;j < n;j++){
      table[i][j] = table[i][j-1]; 
      if(i - weight[j] < 0)continue;
      table[i][j] =max(table[i - weight[j]][j-1]+price[j],table[i][j-1]);
    } 
  }

  for(int i = 0;i <= lim;i++){
    if(maxi_p < table[i][n-1]){
      maxi_p = table[i][n-1];
      maxi_w = i;
    }

    
  }
  cout << maxi_p << endl; 
  cout << maxi_w << endl;
}  

int main(){
  int count = 1;
  int lim;
  int n;
  int price,weight;  
  while(cin >> lim >> n &&lim){

    vector<int> a,b;
    int tmp;
    char damy;
    cout << "Case "<< count <<":"<<endl;
    for(int i = 0;i < n;i++){
      cin >> price >> damy >> weight;
      a.push_back(price);
      b.push_back(weight);
    }
    
    solve(n,lim,a,b);
    count++;
  }
  return 0;
}