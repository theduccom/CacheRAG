#include <iostream>
#include <stdio.h>
using namespace std;

void Calc();

int main(){
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        Calc();
    }
    
    return 0;
}

void Calc(){
    int score = 0;
    int outCount = 0;
    string event;
    int runners[3]={};
    
    while(1){
        cin >> event;
        
        if(event == "HIT"){
            if(runners[2] == 1){
                score++;
            }
            
            for(int i=2; i>0; i--){
                runners[i] = runners[i-1];
            }
            runners[0] = 1;
        }
        
        else if(event == "HOMERUN"){
            score++;
            for(int i=0; i<3; i++){
                score += runners[i];
                runners[i] = 0;
            }

        }
        
        else{
            outCount++;
        }
        
        if(outCount == 3){
            cout << score << "\n";
            break;
        }
        
    }
    return;
}