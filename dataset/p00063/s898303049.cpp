#include <iostream>
using namespace std;

int solver(string str);

int solver(string str){
    int l, r;
    l = 0;
    r = str.size()-1;
    while(l<r){
        if(str.at(l) != str.at(r)) return 0;
        l++;
        r--;
    }
    return 1;
}

int main(){
    string str;
    int cnt = 0;
    while(cin >> str){
        cnt += solver(str);
    }
    cout << cnt << endl;
    return 0;
}