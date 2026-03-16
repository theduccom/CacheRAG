#include <iostream>
#include <string>
#include <stack>
#include <map>
#include <cstdlib>
#include <cctype>
#include <cstdio>
#include <cstring>

using namespace std;

int str2arr(char s[], string A[]) {
    bool flag = true;
    string t;
    int l = strlen(s);
    int n = 0;
    for (int i = 0; i < l; i++) {
        if (isdigit(s[i]) && flag) {
            t = "";
            int j = 0;
            while (isdigit(s[i+j])) {
                t += s[i+j];
                if (i+j == l-1)
                    break;
                j++;
            }
            A[n++] = t;
            flag = false;
        }
        else if (!isdigit(s[i])) {
            A[n++] = s[i];
            flag = true;
        }
    }
    return n;
}

int Generate_RPN(int n, string A[], string B[]) {
    map<string, int> table;
    table["*"] = 1;
    table["/"] = 1;
    table["+"] = 0;
    table["-"] = 0;
    table["("] = -1;
    table[")"] = -1;
    stack<string> S;
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (isdigit(A[i][0])) {
            B[j++] = A[i];
        }

        else if (A[i] == "(")
            S.push(A[i]);

        else if (A[i] == ")") {
            while (S.top() != "(") {
                B[j++] = S.top();
                S.pop();
            }
            S.pop();
        }
        else {
            while ((!S.empty()) && (table[S.top()] >= table[A[i]])) {
                B[j++] = S.top();
                S.pop();
            }
            S.push(A[i]);
        }
    }
    while (!S.empty()) {
        B[j++] = S.top();
        S.pop();
    }
    return j;
}

int calculate(int n, string s[]) {
    stack<double> St;
    double a, b;

    for (int i = 0; i < n; i++) {
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

int main()
{
    int n, l, t;
    string A[101], B[101];
    char s[101];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        s[strlen(s)-1] = '\0';

        l = str2arr(s, A);
        t = Generate_RPN(l, A, B);

        cout << calculate(t, B) << endl;
    }

    return 0;
}