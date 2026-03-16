#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<string>
#include<utility>
#include<algorithm>
#include<stack>
#include<queue>

#define numof(array) (sizeof (array) / sizeof *(array))
using namespace std;

#define INF (1 << 29)
//static const int dx[] = {1, 0, -1, 0};
//static const int dy[] = {0, 1, 0, -1};
typedef pair<int, int> P;
typedef pair<string, int> PP;
static const int di[] = {1, -1, 4, -4};

//int puzzle[2][4];
//int d[2][4];

map<string, int> m;


string move(string str, const int zero, const int direction)
{
    str[zero] = str[zero + di[direction]];
    str[zero + di[direction]] = '0';

    //cout << str << endl;    
    return str;
}

int find_zero(string str)
{
    for (int i = 0; i < 8; i++) {
        if (str[i] == '0') return i;
    }
    
    return 0;   
}


void create_map(void)//"01234567"から何手で作れるかを調べる
{
    queue<PP> que;
    que.push(PP("01234567", 0));

    static int cnt = 0;

    while(que.size()) {
        pair<string, int> p = que.front();
        que.pop();

        if (cnt == 8*7*6*5*4*3*2) return;  

        if (m.find(p.first) != m.end()) continue;
        m.insert(map<string, int>::value_type(p.first, p.second));
        cnt++;

        int zero = find_zero(p.first);
        
        if (zero != 3 && zero != 7){//右
            que.push(PP(move(p.first, zero, 0), p.second+1));
        }
        if (zero != 0 && zero != 4){//左
            que.push(PP(move(p.first, zero, 1), p.second+1));
        }
        if (zero < 4){//下
            que.push(PP(move(p.first, zero, 2), p.second+1));
        }
        if (zero >= 4){//上
            que.push(PP(move(p.first, zero, 3), p.second+1));
        }
    }
    

}
              
    

int main(void)
{
    create_map();

    while (true) {
        string str;
        for (int i = 0; i < 8; i++) {
            string input;
            if(!(cin >> input)) return 0;
            str += input;
        }

        cout << m[str] << endl;
    }

	return 0;
}