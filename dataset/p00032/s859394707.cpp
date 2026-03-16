#include <iostream>
#include <cstdio>
using namespace std;


int main(){
    int rectangle=0,diamond=0;
    int x1,x2,diagonal;
    while(scanf("%d,%d,%d",&x1,&x2,&diagonal)!=EOF){
        if(x1*x1+x2*x2==diagonal*diagonal){
            rectangle++;
            continue;
        }else if(x1+x2>diagonal&&x1==x2){
            diamond++;
            continue;
        }
    }
    cout << rectangle << endl;
    cout << diamond << endl;
    return 0;
}