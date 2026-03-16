#include <iostream>
using namespace std;

class island
{
private:
  int num;
  char data[12][12];
  void calc_r(int x,int y)
  {
    if(data[x][y]=='1'){
      data[x][y]='0';
      if(x!=0)
	calc_r(x-1,y);
      if(y!=0)
	calc_r(x,y-1);
      if(x!=11)
	calc_r(x+1,y);
      if(y!=11)
	calc_r(x,y+1);
    }
  }
public:
  bool input()
  {
    num=0;
    string buf;
    for(int i=0;i<12;i++){
      if(!(cin >> buf))
	return false;
      for(int j=0;j<12;j++){
	data[i][j]=buf[j];
      }
    }
    return true;
    
  }
  int calc()
  {
    num=0;
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
	if(data[i][j]=='1'){
	  num++;
	  calc_r(i,j);
	}
      }
    }
    return num;
  }
};

int main(int argc, char **argv) 
{
  island obj;
  while(true){
    if(!obj.input())
      break;
    cout <<  obj.calc() << endl;
  }
}