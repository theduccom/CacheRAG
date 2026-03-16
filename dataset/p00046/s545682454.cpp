#include<iostream>
using namespace std;
int main(){
    double h[50];
    
    int i;
    double x;
    for(i = 0;i < 50;i++){
        h[i] = 0;
    }
    for(i = 0; x != 0 && i < 50;i++){
        cin >> x;
        h[i] = x;
    }
    int max = 0;
    int min = 0;
    for(i = 1;i < 50;i++){
        if(h[i] != 0){
            if(h[i] > h[max]){
                max = i;
            }
            if(h[i] < h[min]){
                min = i;
            }       
        }

    }
    cout << h[max] - h[min];
}
