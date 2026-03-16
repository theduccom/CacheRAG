#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct point{
  int x,y;
  point(const int x,const int y){
    this->x=x;
    this->y=y;
  }  
  point(const point& p){
    this->x=p.x;
    this->y=p.y;
  }

  point(){
    x=y=0;
  }
  ~point(){}
};
constexpr int row=8,col=8;
void bombchain(vector<string> &field,const point& p){
  if(p.x<0||col<=p.x||p.y<0||row<=p.y) return;
  if(field[p.y][p.x]=='1'){
    field[p.y][p.x]='0';
    for(int i=1;i<=3;i++){
      bombchain(field,point(p.x-i,p.y));
      bombchain(field,point(p.x+i,p.y));
      bombchain(field,point(p.x,p.y-i));
      bombchain(field,point(p.x,p.y+i));
    }
  }

}

int main(){
  int datasize;
  cin>>datasize;
  for(int idx=0;idx<datasize;idx++){
    vector<string> field(row);
    for(int i=0;i<row;i++){
      cin>>field[i];
    }
    point p;
    cin>>p.x>>p.y;
    p.x--,p.y--;
    bombchain(field,p);
    cout<<"Data "<<idx+1<<":"<<endl;
    for(int i=0;i<row;i++){
      cout<<field[i]<<endl;
    }
  }

}