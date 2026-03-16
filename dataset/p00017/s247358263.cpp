#include <iostream>
#include <string>
#include <sstream>

using namespace std;

constexpr unsigned ALPH_NUM = 26;

string shift(const string& line, int n);
bool judge(string& word);

int main()
{
    string line;
    while(getline(cin, line)) {
        bool is_solved = false;
        for (auto i = 0; i < ALPH_NUM && !is_solved; i++) {
            string shifted = shift(line, i);

            stringstream ss(shifted);
            string word;
            while (ss >> word) {
                if (judge(word)) {
                    cout << shifted << endl;
                    is_solved = true;
                    break;
                }
            }
        }
    }

    return 0;
}

string shift(const string& line, int n)
{
    string shifted = line;

    for (auto i = 0; i < line.size(); i++) {
        if (line.at(i) >= 'a' && line.at(i) <= 'z') {
            shifted.at(i) = static_cast<char>('a' + (line.at(i) - 'a' + n) % ('z' - 'a' + 1));
        } else {
            shifted.at(i) = line.at(i);
        }
    }

    return shifted;
}

bool judge(string& word)
{
    if (word.at(word.size() - 1) == '.') {
        word.erase(word.end() - 1);
    }

    return ((word == "the" || word == "this" || word == "that")? true: false);
}