#include <iostream>
#include <string>
#include <stack>
using namespace std;

int eval(char a)
{
    return a - '0';
}

int main(void)
{
    string a, b;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        stack<int> c;
        cin >> a >> b;
        auto ia = a.rbegin();
        auto ib = b.rbegin();
        int g = 0;
        while (true) {
            int e = 0, f = 0;
            if (ia != a.rend())
                e = eval((char)*ia++);
            if (ib != b.rend())
                f = eval((char)*ib++);
            c.push((e + f + g)%10);
            g = (e + f + g >=10)? 1 : 0;
            if (ia == a.rend() && ib == b.rend())
            {
                if (g == 1)
                    c.push(1);
                break;
            }
        }
        int l = c.size();
        if (l > 80) {
            cout << "overflow" << endl;
            continue;
        }
        for (int i = 0; i < l; ++i) {
            cout << c.top();
            c.pop();
        }
        cout << endl;
    }
    return 0;
}




