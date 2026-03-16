#include    <iostream>
#include    <string>
#include    <map>

using namespace std;

int main() {
    map<char,int> roman;

    // ローマ数字とアラビア数字の紐づけ
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    // ローマ数字のゼロに相当する文字を'_'と仮定する
    // (本来は存在しない)
    roman['_'] = 0;

    // 入力
    while(1) {
        string input;

        cin >> input;
        if(cin.eof()) break;

        char prev = '_';
        int sum = 0;
        for(auto c : input) {
            // 入力された数字はとりあえず合計に加算する
            sum += roman[c];

            // 0でない今の数字が前の数字よりも大きい場合(例えばIX)は、今の数字から前の数字を引いてあげる。
            // ここで前の数字を２つ分多く足している状態なので、この分を引き算で取り除くと都合がよい事になる。
            // (引き算は前の1文字分のみ考えればよい。即ち、IIXは10-2=8ではなく、1+10-1=10となる点に注意)
            if(roman[prev] == 0 || roman[c] <= roman[prev])
                prev = c;
            else {
                sum -= roman[prev] * 2;
                prev = '_';
            }
        }

        cout << sum << endl;
    }

    return 0;
}
