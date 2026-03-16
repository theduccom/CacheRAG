#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(void) {
    map<char, int> roman;
    //ローマ文字について情報をmapに入れておく
    roman.insert(make_pair('I', 1)); roman.insert(make_pair('V', 5));
    roman.insert(make_pair('X', 10)); roman.insert(make_pair('L', 50));
    roman.insert(make_pair('C', 100)); roman.insert(make_pair('D', 500));
    roman.insert(make_pair('M', 1000));
    string input;
    while(cin >> input) {
        int sum = roman[input[0]];
        for(int r = 1; r < input.length(); r++) {
            if(roman[input[r]] > roman[input[r - 1]]) sum += roman[input[r]] - 2*(roman[input[r - 1]]);
            else                                      sum += roman[input[r]];
        }
        cout << sum << endl;
    }
    return(0);
}