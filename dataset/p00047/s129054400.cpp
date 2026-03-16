#include<iostream>
#include<string>

using namespace std;

int main()
{
  int cup[3] = {1,0,0};
  string cupab("A,B");
  string cupba("B,A");
  string cupac("A,C");
  string cupca("C,A");
  string cupbc("B,C");
  string cupcb("C,B"); 
  string swapping;

  while (cin >> swapping){
    int temp;
    if(swapping == cupab || swapping == cupba){
      temp = cup[0];
      cup[0] = cup[1];
      cup[1] = temp;
    }
    else if(swapping == cupac || swapping == cupca){
      temp = cup[0];
      cup[0] = cup[2];
      cup[2] = temp;
    }
    else if(swapping == cupbc || swapping == cupcb){
      temp = cup[1];
      cup[1] = cup[2];
      cup[2] = temp;
    }
  }
  
  if(cup[0] == 1){
    cout<<"A"<<endl;
  }
  else if(cup[1] == 1){
    cout<<"B"<<endl;
  }
  else if(cup[2] == 1){
    cout<<"C"<<endl;
  }

  return 0;
}
