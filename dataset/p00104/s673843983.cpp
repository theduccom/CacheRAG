#include <iostream>

int main(){
  int a,b;
  while(std::cin>>a>>b){
    if(!a&&!b)return 0;
    char c[101][101];
    for(int y=0;y<a;y++){
      std::string s;
      std::cin>>s;
      for(int x=0;x<b;x++)
        c[y][x] = s[x];
    }
    int r[101][101]={0},t_x=0,t_y=0;
    while(1){
      switch(c[t_y][t_x]){
      case '>':
        t_x++;
        break;
      case '<':
        t_x--;
        break;
      case 'v':
        t_y++;
        break;
      case '^':
        t_y--;
        break;
      }
      if(c[t_y][t_x]=='.'){
        std::cout<<t_x<<" "<<t_y<<std::endl;
        break;
      }
      if(r[t_y][t_x]){std::cout<<"LOOP"<<std::endl;break;}
      r[t_y][t_x]=1;
    }
  }
}