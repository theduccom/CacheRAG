#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<algorithm>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int straight(int c[]){
    int sum = 0;
    rep(i,5){
        sum += c[i];
    }
    if(sum / 5 == c[2]){
        return 1;
    }else if(sum == 47){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int c[5];
    char g;
    int p,k;

    while(cin >> c[0] >> g >> c[1] >> g >> c[2] >> g >> c[3] >> g >> c[4]){
        int count[5] = {0};
        k = 0;
        sort(c, c+5);
        p = c[0];
        for(int i = 0; i < 5; i++){
            if(p == c[i]){
                count[k]++;
            }else{
                p = c[i];
                k++;
                count[k]++;
            }
        }
        sort(count, count+5);
        if(count[4] == 2){
            if(count[3] == 2){
                cout << "two pair" << endl;
            }else{
                cout << "one pair" << endl;
            }
        }else if(count[4] == 3){
            if(count[3] == 2){
                cout << "full house" << endl;
            }else{
                cout << "three card" << endl;
            }
        }else if(count[4] == 4){
            cout << "four card" << endl;
        }else{
            if(straight(c) == 1){
                cout << "straight" << endl;
            }else{
                cout << "null" << endl;
            }
        }
    }
}