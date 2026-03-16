#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector <int>> G;

void create_edge(int a, int b, int c, int d);
int search(int st, int go);


int main(){

  int n,m;
  int start;
  int goal;
  int money;
  int pay;
  int g_money,b_money;
  int sarary;
  
    
  cin >> n;
  cin >> m;
  //cout << "ihjiwohjwi" << endl;
  
  G = vector <vector<int>>(20,vector<int>(20,1001));
  
  // cout << "1" << endl;

  for(int i = 0; m>i; ++i){
    int a,b,c,d;
    
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    create_edge(a,b,c,d);
  }

  //cout << "2" << endl;

  scanf("%d,%d,%d,%d",&start,&goal,&money,&pay);
  
  // cout << "money :" << money << endl;
  //cout << "pay :" << pay << endl;
  //cout << "koutuuhi :" << g_money + b_money << endl;

  g_money = search(start, goal);
  b_money = search(goal, start);
  
  sarary = money - (g_money + b_money + pay);
  
  //cout << "money :" << money << endl;
  //cout << "pay :" << pay << endl;
  //cout << "koutuuhi :" << g_money + b_money << endl;
 
  cout << sarary << endl;
  
  
}



void create_edge(int a, int b, int c, int d){

  G[a][b] = c;
  G[b][a] = d;

}



int search(int st, int go){

  int current;
  
  typedef pair < int, int > PII;
  vector <int>  cost(100, 1001);
  priority_queue < PII, vector < pair <int, int> >, greater < pair <int, int> > > que;
  //cout << "search" << endl;
  que.push(PII(0,st));
  cost[st] = 0;
  
  
  while(!que.empty()){
    current = que.top().second;
    que.pop();

    for(int k=0; k<20; k++){
      int temp;
      temp = G[current][k] + cost[current];

      if(G[current][k] != 1001 && temp < cost[k]){
	que.push(PII(temp,k));
	cost[k] = temp;
      }
    }  		 
  }
  
  return cost[go];
}
      
  



 