#include<bits/stdc++.h>

using namespace std;

int main()
{
  int times;
  cin>>times;

  for(int i = 0;i < times;++i){
    //cout<<endl;
    int place[8][8];
    bitset<8> bomb;

    for(int j = 0;j < 8;++j){
      cin>>bomb;
      for(int k = 0;k < 8;++k){
        place[j][k] = bomb[7-k];
      }
    }

    int x_hit,y_hit;
    cin>>x_hit;
    cin>>y_hit;

    vector<pair<int,int>> bplace;
    bplace.push_back(make_pair(x_hit - 1,y_hit - 1));
    place[y_hit - 1][x_hit - 1] = 0;

    while(1){
      bool con = false;
      for(pair<int,int> e : bplace){
        int x = e.first;
        int y = e.second;

        // 
        for(int j = x - 1;j > x - 4 && j >= 0;--j){
          if(place[y][j] == 1){
            bplace.push_back(make_pair(j,y));
            place[y][j] = 0;
            con = true;
          }
        }
        // 
        for(int j = x + 1;j < x + 4 && j <= 7;++j){
          if(place[y][j] == 1){
            bplace.push_back(make_pair(j,y));
            place[y][j] = 0;
            con = true;
          }
        }
        // 
        for(int j = y - 1;j > y - 4 && j >= 0;--j){
          if(place[j][x] == 1){
            bplace.push_back(make_pair(x,j));
            place[j][x] = 0;
            con = true;
         }
        }
        // 
        for(int j = y + 1;j < y + 4 && j <= 7;++j){
          if(place[j][x] == 1){
            bplace.push_back(make_pair(x,j));
            place[j][x] = 0;
            con = true;
          }
        }
      }
      if(con == false){
        break;
      }
    }

    cout<<"Data "<<i+1<<":"<<endl;
    for(int j = 0;j < 8;++j){
      for(int k = 0;k < 8;++k){
        cout<<place[j][k];
      }
      cout<<endl;
    }
  }

  return 0;
} 
