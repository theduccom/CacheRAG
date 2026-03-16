#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, runner, out, score;
    string s;

    cin >> n;

    for (int i=0; i<n; i++) {
        runner = 0;
        out = 0;
        score = 0;

        while (out < 3) {
            cin >> s;

            if(s == "HIT") {
                runner++;
                if(runner > 3) {
                    score++;
                    runner = 3;
                }
            } else if(s == "HOMERUN") {
                score += runner+1;
                runner = 0;
            } else {
                out++;
            }
        }
        cout << score << endl;
    }

    return 0;
}