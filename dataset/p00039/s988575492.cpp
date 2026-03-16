#include <bits/stdc++.h>
int from_roman(const std::string &s){
    static const std::map<char, int> m = {
        { 'I', 1 },
        { 'V', 5 },
        { 'X', 10 },
        { 'L', 50 },
        { 'C', 100 },
        { 'D', 500 },
        { 'M', 1000 }
    };
    static const auto get = [&](char c) {
        return m.find(c)->second;
    };
    int n=0;
    for(int i = 0; i < (int)s.size(); ++i){
        if(i == n-1 || get(s[i]) >= get(s[i+1])) n += get(s[i]);
        else n -= get(s[i]);
    }
    return n;
}

// int to_roman(int n){
//     std::vector<std::pair<std::string, std::string>> res;
//     while(n){
//         int d = n % 10;

//     }
// }

using namespace std;
int main(){
    string n;
    while(cin >> n){
        cout << from_roman(n) << endl;
    }
}