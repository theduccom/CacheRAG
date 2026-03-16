#include<iostream>
#include<string>
using namespace std;

int main() {
    int A = 1;
    int B = 0;
    int C = 0;
    string s;
    while(cin >> s){
        if (s[0]=='A'){
           if(s[2]=='B'){
               int tmp;
               tmp = B;
               B = A;
               A = tmp;
           }
           else if(s[2]=='C'){
               int tmp;
               tmp = C;
               C = A;
               A = tmp;
           }
           }
        if (s[0]=='B'){
           if(s[2]=='A'){
               int tmp;
               tmp = A;
               A = B;
               B = tmp;
           }
           else if(s[2]=='C'){
               int tmp;
               tmp = C;
               C = B;
               B = tmp;
           }
           }
        else if (s[0]=='C'){
            if(s[2]=='A'){
               int tmp;
               tmp = A;
               A = C;
               C = tmp;
           }
           else if(s[2]=='B'){
               int tmp;
               tmp = B;
               B = C;
               C = tmp;
           }
           }
    }
    if (A==1){
        cout << "A" << endl;
    }
    else if (B==1){
        cout << "B" << endl;
    }
    else if (C==1){
        cout << "C" << endl;
    }
    return 0;
}
