#include<iostream>
#include<cstdio>

using namespace std;

main(){
  char bef,af;
  char Ball = 'A';
  //int n=0;
  while(scanf("%c,%c\n",&bef,&af) != EOF){// \nツづーツ忘ツづェツづ按つ「ツ！ツ！ツ！ツ！ツ！ツ！ツ！ツ！ツ！ツ！ツ！ツ！ツ！ツ！ツ！ツ！ツ！
    
    if(Ball == bef)Ball = af;
    else if(Ball == af)Ball = bef;
    //n++;
    // cout << n<<" "<<  Ball << endl<< endl;
  }
  
  cout << Ball << endl;

  return 0;
}