#include <iostream>

using namespace std;

int main() {
    int M,scale[10];
    scale[0]=1;
    for(int i=1;i<10;i++){
    scale[i] = scale[i-1]*2;
    }
    while(cin >> M){
    int i=0;
    int count=2;
    while(true){
        if(M==0) break;
        if(M % count!=0){
            M -= scale[i];
            if(M != 0){
            cout << scale[i] << " ";
            }
            else{
            cout << scale[i] <<endl;
            }
        }
        i++;
        count *= 2;
    }
    }
}