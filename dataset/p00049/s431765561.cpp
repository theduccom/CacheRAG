#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    int ty[4] = {};
    int n;
    char s[3];
    while(scanf("%d,%s",&n,s)!=EOF){
        string str=s;
        if(str=="A"){
            ty[0]++;
        }else if(str=="B"){
            ty[1]++;
        }else if(str=="AB"){
            ty[2]++;
        }else if(str=="O"){
            ty[3]++;
        }
    }
    for(int i=0;i<4;i++){
        cout << ty[i] << endl;
    }
    return 0;
}