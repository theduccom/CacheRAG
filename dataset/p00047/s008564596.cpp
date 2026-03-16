#include <iostream>

using namespace std;

int main(){
        char i1, i2, c;
        bool ball[3] = {false};
        ball[0] = true;
        while(cin >> i1){
                cin >> c;
                cin >> i2; 
                i1 -= 'A';
                i2 -= 'A';
                bool tmp = ball[i1];
                ball[i1] = ball[i2];
                ball[i2] = tmp;
        }   
        c = 0;
        while(!ball[c]){
                c++;
        }   
        cout << (char)(c+'A') << endl;
}