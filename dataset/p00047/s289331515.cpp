#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<bool> cup(3);
    cup.at(0) = true;
    cup.at(1) = false;
    cup.at(2) = false;

    string s;
    int x1, y1;
    bool tmp;

    while(cin >> s){
        x1 = (int)(s.at(0) - 'A');
        y1 = (int)(s.at(2) - 'A');
        tmp = cup[x1];
        cup[x1] = cup[y1];
        cup[y1] = tmp;
    }

    for(int i=0; i<3; i++){
        if(cup[i]){
            cout << (char)(i+'A') << endl;
        }
    }
    return 0;
}