#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;
int fac[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320};
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int answer[40325];
const int Inf = 0x3f3f3f3f;
int Cantor(int n, char num[])
{
    int sum = 0, cnt;
    for(int i = 0; i < n; i++)
    {
        cnt = 0;
        for(int j = i + 1; j < n; j++)
        {
            if(num[i] > num[j])
                cnt++;
        }
        sum += cnt * fac[n - i - 1];
    }

    return sum + 1;
}
struct Node
{
    char array[8];
    int cantorValue;
    int position;
    Node(char _array[], int _cantorValue, int _position)
    {
        memcpy(array, _array, sizeof(_array));
        cantorValue = _cantorValue;
        position = _position;
    }
};
void BFS()
{
    queue <Node> que;

    char number[8], temp[8];
    int code;
    memset(answer, 0x3f, sizeof(answer));

    for(int i = 0; i < 8; i++)
        number[i] = i + '0';

    code = Cantor(8, number);
    answer[code] = 0;

    que.push(Node(number, code, 0));

    while(!que.empty())
    {
        Node s = que.front();
        que.pop();

        int x = s.position / 4;
        int y = s.position % 4;

        for(int i = 0; i < 4; i++)
        {
            int tx = x + dx[i];
            int ty = y + dy[i];

            memcpy(temp, s.array, sizeof(s.array));

            if(tx >= 0 && tx < 2 && ty >= 0 && ty < 4)
            {
                swap(temp[tx * 4 + ty], temp[s.position]);
                code = Cantor(8, temp);
                if(answer[code] == Inf)
                {
                    que.push(Node(temp, code, tx * 4 + ty));
                    answer[code] = answer[s.cantorValue] + 1;
                }
            }
        }
    }
    return;
}
int main(void)
{

    char number[8];

    BFS();

    while(scanf("%d", &number[0]) != EOF)
    {
        number[0] += '0';

        for(int i = 1; i < 8; i++)
        {
            scanf("%d", &number[i]);
            number[i] += '0';
        }

        int code = Cantor(8, number);

        printf("%d\n", answer[code]);
    }

	return 0;
}

