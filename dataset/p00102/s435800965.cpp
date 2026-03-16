#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int n;
    while (cin >> n && n != 0) {
        vector<int> row(n);
        vector<vector<int>> sheet(n);

        sheet.clear();
        for (auto i = 0; i < n; i++) {
            row.clear();
            for (auto j = 0; j < n; j++) {
                int in;
                cin >> in;
                row.push_back(in);
            }
            sheet.push_back(row);
        }

        vector<int> zero(n + 1, 0);
        sheet.resize(n + 1, zero);
        for (auto i = 0; i < n; i++) {
            sheet.at(i).resize(n + 1, 0);
            for (auto j = 0; j < n; j++) {
                sheet.at(n).at(i) += sheet.at(j).at(i);
                sheet.at(i).at(n) += sheet.at(i).at(j);
                sheet.at(n).at(n) += sheet.at(i).at(j);
            }
        }

        for (auto i = 0; i < n + 1; i++) {
            for (auto j = 0; j < n + 1; j++) {
                cout << setw(5) << sheet.at(i).at(j);
            }
            cout << endl;
        }
    }

    return 0;
}