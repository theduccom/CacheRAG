#include <iostream>
#include <string>
#include <stack>
#include <map>
#include <cstdlib>
#include <cctype>
#include <cstdio>
#include <cstring>

using namespace std;

// 1+(4-25)*3= => ["1", "+", "(", "4", "-", "25", ")", "*", "3", "="]
void str2arr(string s, string A[]) {
    int n = 0;
    string tmp = "";

    for (int i = 0; s[i] != '=' ; i++) {
        if ('0' <= s[i] && s[i] <= '9') {
            tmp += s[i];
        }
        else {
            if (tmp != "") { 
                A[n++] = tmp;
                tmp = "";
            }
            A[n++] = s[i];
        }
    }
    if (tmp != "") { A[n++] = tmp; }
    A[n++] = "=";
}

// generate Reverse Polish Notation

void Generate_RPN(string A[], string B[]) {
    map<string, int> table;
    stack<string> St;
    table["*"] = 1;
    table["/"] = 1;
    table["+"] = 0;
    table["-"] = 0;
    table["("] = -1;
    table[")"] = -1;

    int i, j = 0;
    for (i = 0; A[i] != "="; i++) {
        if ('0' <= A[i][0] && A[i][0] <= '9') {
            B[j++] = A[i];
        }

        else if (A[i] == "(") {
            St.push(A[i]);
        }
        else if (A[i] == ")") {
            while (St.top() != "(") {
                B[j++] = St.top(); St.pop();
            }
            St.pop();
        }
        else {
            while ((!St.empty()) && (table[St.top()] >= table[A[i]])) {
                B[j++] = St.top(); St.pop();
            }
            St.push(A[i]);
        }
    }
    while (!St.empty()) {
        B[j++] = St.top(); St.pop();
    }
    B[j] = "=";
}

int Calculate_RPN(string s[]) {
    stack<double> St;
    double a, b;

    for (int i = 0; s[i] != "="; i++) {
        if (s[i] == "+") {
            b = int(St.top()); St.pop();
            a = int(St.top()); St.pop();
            St.push(a+b);
        }
        else if (s[i] == "-") {
            b = int(St.top()); St.pop();
            a = int(St.top()); St.pop();
            St.push(a-b);
        }
        else if (s[i] == "*") {
            b = int(St.top()); St.pop();
            a = int(St.top()); St.pop();
            St.push(a*b);
        }
        else if (s[i] == "/") {
            b = int(St.top()); St.pop();
            a = St.top(); St.pop();
            St.push(a/b);
        }
        else {
            St.push(atoi(s[i].c_str()));
        }
    }
    return int(St.top());
}

int main() {
    int n;
    string A[100], B[100];
    string in;

    cin >> n;

    while (n--) {
        cin >> in;
        str2arr(in, A);
        Generate_RPN(A, B);
        cout << Calculate_RPN(B) << endl;
    }

    return 0;
}