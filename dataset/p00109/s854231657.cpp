#include <iostream>
#include <string>
#include <vector>

using namespace std;

int compute(string s) {
    int begin;
    int nest = 0;
    int n = 0;
    vector<int> children, children2;
    vector<char> operators, operators2;

    for (int i=0; i<(int)s.length(); i++) {
        if (s[i] == '(') {
            nest++;
            if (nest == 1) {
                begin = i+1;
            }
        }
        else if (s[i] == ')') {
            if (nest == 1) {
                string substr = s.substr(begin, i-begin);
                n = compute(substr);
            }
            nest--;
        }
        else if (nest == 0) {
            if ('0' <= s[i] && s[i] <= '9') {
                n *= 10;
                n += s[i]-'0';
            }
            else {
                children.push_back(n);
                operators.push_back(s[i]);
                n = 0;
            }
        }
    }
    children.push_back(n);
    children2.push_back(children[0]);
    for (int i=0; i<(int)operators.size(); i++) {
        if (operators[i] == '*') {
            children2[children2.size()-1] *= children[i+1];
        }
        else if (operators[i] == '/') {
            children2[children2.size()-1] /= children[i+1];
        }
        else {
            children2.push_back(children[i+1]);
            operators2.push_back(operators[i]);
        }
    }
    n = children2[0];
    for (int i=0; i<(int)operators2.size(); i++) {
        if (operators2[i] == '+') {
            n += children2[i+1];
        }
        else {
            n -= children2[i+1];
        }
    }
    return n;
}

int main() {
    int n;
    string s;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> s;
        cout << compute(s.substr(0, s.length()-1)) << endl;
    }
    return 0;
}