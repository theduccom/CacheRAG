//Bombs Chain
#include<bits/stdc++.h>
using namespace std;

vector<string> mp;
int dir[4][2]={{-1,0}, {0,1}, {1,0}, {0,-1}};

void bomb(int x, int y){
  if(x<0||8<=x||y<0||8<=y)return;
  if(mp[x][y]=='0')return;
  mp[x][y]='0';
  for(int i=0; i<4; i++){
    for(int j=1; j<=3; j++){
      bomb(x+dir[i][0]*j, y+dir[i][1]*j);
    }
  }
}

int main(){
  string s;
  int n;
  cin>>n;
  for(int i=1; i<=n; i++){
    mp.clear();
    do{
      cin>>s;
    }while(s=="");
    mp.push_back(s);
    for(int j=0; j<7; j++){
      cin>>s;
      mp.push_back(s);
    }
    int x, y;
    cin>>x;
    cin>>y;
    bomb(y-1, x-1);
    cout<<"Data "<<i<<":"<<endl;
    for(int j=0; j<8; j++)cout<<mp[j]<<endl;
  }
  return 0;
}