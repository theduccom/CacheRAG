#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int a[5];
    while(scanf("%d,%d,%d,%d,%d", &a[0], &a[1], &a[2], &a[3], &a[4])!=EOF){
        vector<int> hand(15, 0);
        for(int i=0; i<5; i++){
            hand[a[i]]++;
        }
        hand[14] = hand[1];
        int fs=0, sc=0;
        for(int i=1; i<=13; i++){
            if(hand[i] >= fs){
                sc = fs;
                fs = hand[i];
            }else if(hand[i] > sc){
                sc = hand[i];
            }
        }
        bool straight = false;
        for(int i=1; i<=10; i++){
            bool continued = true;
            for(int j=0; j<5; j++){
                if(hand[i+j]==0){
                    continued = false;
                    break;
                }
            }
            if(continued){
                straight = true;
                break;
            }
        }
        if(fs == 4){
            cout << "four card" << endl;
        }else if(fs==3 && sc==2){
            cout << "full house" << endl;
        }else if(straight){
            cout << "straight" << endl;
        }else if(fs==3){
            cout << "three card" << endl;
        }else if(fs==2 && sc==2){
            cout << "two pair" << endl;
        }else if(fs == 2){
            cout << "one pair" << endl;
        }else{
            cout << "null" << endl;
        }
    }
    return 0;
}

