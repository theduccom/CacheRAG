#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
using namespace std;

#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)

int main(void){
  loop(i,1,10)
    loop(j,1,10)
    cout<<i<<"x"<<j<<"="<<i*j<<endl;
    //printf("%dx%d=%d\n",i,j,i*j);
    //*/
}