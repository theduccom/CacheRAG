#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    char cup[3]={1,0,0};
    char from,to,c;

    while(cin>>from){
        cin>>c>>to;
        swap(cup[from-'A'],cup[to-'A']);
    }

    for(int i=0;i<3;i++){
        if(cup[i]==1){
            cout<<char(i+'A')<<endl;
        }
    }

    return 0;
}