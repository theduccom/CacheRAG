#include <iostream>
#include <string.h>
#define MAX_LINE 8
using namespace std;
void searchString(string box);
int main() {
    int count = 0;
    char str[8];
    string box;
    while(cin >> str){
        box.append(str);
        count++;
        if(count%MAX_LINE == 0){
            searchString(box);
            box = "";
        }
    }
}
void searchString(string box){
    string A("1100000011");
    string B("1000000010000000100000001");
    string C("1111");
    string D("1000000110000001");
    string E("11000000011");
    string F("100000001100000001");
    string G("110000011");
    if (box.find(A) != string::npos) {
        cout << "A" << endl;
    }
    else if(box.find(B) != string::npos) {
        cout << "B" << endl;
    }
    else if(box.find(C) != string::npos) {
        cout << "C" << endl;
    }
    else if(box.find(D) != string::npos) {
        cout << "D" << endl;
    }
    else if(box.find(E) != string::npos) {
        cout << "E" << endl;
    }
    else if(box.find(F) != string::npos) {
        cout << "F" << endl;
    }
    else if(box.find(G) != string::npos) {
        cout << "G" << endl;
    }
}


