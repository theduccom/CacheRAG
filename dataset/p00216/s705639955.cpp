#include <iostream>
using namespace std;

int main(){
int w,money,flag,i;
    while(1){
        money = 1150;
        cin >> w;
        if(w == -1){
            break;
        }
        if(w <= 10){
            cout << 4280 - money << endl;
        }
        else {
            w -= 10;
            flag = 9;
            for(i=w;i>=1;i--){
                flag++;
                if(flag < 20){
                    money += 125;
                }
                else if(flag < 30){
                    money += 140;
                }
                else if(flag < 40){
                    money += 160;
                }
                else if(flag >= 40){
                    money += 160;
                }
            }
            cout << 4280 - money << endl;
        }
    }
}