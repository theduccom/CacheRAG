#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

map<string, int> dic;

int d[] = {-1, 1, 4, -4};

void init(){
        string str = "01234567";
        dic[str] = 0;
        queue<string> que;
        que.push(str);
        while(!que.empty()){
                string n = que.front();
                que.pop();
                int p = 0;
                for (int i = 0; i < n.size(); i++){
                        if (n[i] == '0') p = i;
                }
                for (int i = 0; i < 4; i++){
                        int x = p + d[i];
                        if (x >= 0 && x <= 7 &&
                        !(p == 4 && x == 3) &&
                        !(p == 3 && x == 4)){
                                string temp = n;
                                swap(temp[p], temp[x]);
                                if (dic.find(temp) == dic.end()){
                                        dic[temp] = dic[n] + 1;
                                        que.push(temp);
                                }
                        }
                }
        }
}

int main(){
        init();
        string line;

        while (getline(cin, line)){
                remove(line.begin(), line.end(), ' ');
                line.erase(8, line.size());
                cout << dic[line] << endl;
        }
        return 0;
}