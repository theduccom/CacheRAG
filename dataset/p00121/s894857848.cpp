#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    map<string, int> num;
    num["01234567"] = 0;
    queue<string> q;
    q.push("01234567");
    int k = 0;
    while(!q.empty()){
        ++ k;
        int n = q.size();
        for(int i=0; i<n; ++i){
            string s1 = q.front();
            q.pop();

            int j = s1.find('0');
            if(j < 4){
                string s2 = s1;
                swap(s2[j], s2[j+4]);
                if(num.find(s2) == num.end()){
                    q.push(s2);
                    num[s2] = k;
                }
            }else{
                string s2 = s1;
                swap(s2[j], s2[j-4]);
                if(num.find(s2) == num.end()){
                    q.push(s2);
                    num[s2] = k;
                }
            }
            if(j % 4 != 0){
                string s2 = s1;
                swap(s2[j], s2[j-1]);
                if(num.find(s2) == num.end()){
                    q.push(s2);
                    num[s2] = k;
                }
            }
            if(j % 4 != 3){
                string s2 = s1;
                swap(s2[j], s2[j+1]);
                if(num.find(s2) == num.end()){
                    q.push(s2);
                    num[s2] = k;
                }
            }
        }
    }

    for(;;){
        string s(8, ' ');
        for(int i=0; i<8; ++i){
            if(!(cin >> s[i]))
                return 0;
        }
        cout << num[s] << endl;
    }
}