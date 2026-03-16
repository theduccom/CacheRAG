#include <iostream>
#include <string.h>

#define MAX_LINE 8
#define MAXA_DATA 50

using namespace std;

// プロトタイプ宣言
void searchString(string box);

int main() {
    int i, count = 0;
    int max = MAX_LINE * MAXA_DATA;
    char str[8];
    string box;
    for (i=0; i<max; i++) {
        cin >> str;
        box.append(str);
        //cout << str << endl;
        count++;
        if(count%8 == 0){
            //cout << box << endl << endl;
            // 文字列チェック
            searchString(box);
            box = "";
        }
        if((string)str == "finish"){
            break;
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
    if (box.find(A) != std::string::npos) {
        cout << "A" << endl;
    }
    else if(box.find(B) != std::string::npos) {
        cout << "B" << endl;
    }
    else if(box.find(C) != std::string::npos) {
        cout << "C" << endl;
    }
    else if(box.find(D) != std::string::npos) {
        cout << "D" << endl;
    }
    else if(box.find(E) != std::string::npos) {
        cout << "E" << endl;
    }
    else if(box.find(F) != std::string::npos) {
        cout << "F" << endl;
    }
    else if(box.find(G) != std::string::npos) {
        cout << "G" << endl;
    }
}
