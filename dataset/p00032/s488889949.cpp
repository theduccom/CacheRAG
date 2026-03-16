#include<iostream>

using namespace std;
/*
struct data{
  int a;
  int b;
  int x;
};
*/
//int judge(int);
//struct data bord[10000];

main(){
  int i;
  i=0;
  int out1=0;
  int out2=0;
  int judge=0;
  int x2=0;
  int a, b, x;
  while(1){
    if(scanf("%d,%d,%d",&a,&b,&x)== EOF)break;
    //cout << bord[i].a << endl<< bord[i].b << endl << bord[i].x<< endl;
    x2 = x;
    x *= x;
    if(a != b && x == a*a + b*b )out1++;
    else if (a == b && x2 <= a+b)  out2++;
    //cout << out1 << endl << out2 << endl;
    
    /* 
       if(judge( i)==0)out1++;
       else out2++;
    */
    i++;
  }
  
  cout << out1 << endl << out2 << endl;


  return 0;
}

/*
judge(int i ){
  
  if(bord[i].a == bord[i].b )return 1;//()
  else return 0;
}
*/