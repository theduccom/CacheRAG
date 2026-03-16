// 素数を和を求めるプログラム
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

#include<queue>

using namespace std;

int main(void)
{
    bool flag = true;
    int n, num, last_num, total_num, sum;
    vector<int> prime;

    // 初期値の設定
    num = last_num = 2;
    prime.push_back(num);

    while(1)
    {
        cin >> n;

        if( n == 0 )
        {
            // 入力終了
            break;
        }

        num = last_num;
        total_num = prime.size();

        // 素数を探索する処理
        // ( ただし, 同じ素数を2回探索しないようする )
        while( total_num <= n )
        {
            num++;
            flag = true;

            for(unsigned int i = 0; i < prime.size(); i++)
            {
                if( num % prime[i] == 0 )
                {
                    // 素数で割り切れる数は, 素数ではない
                    flag = false;
                    break;
                }
            }

            if( flag == true )
            {
                // 素数が見つかった
                prime.push_back(num);
                // 見つかった最後の素数を記憶する
                last_num = num;
                total_num++;
            }
        }

        sum = 0;

        for(int i = 0; i < n; i++)
        {
            sum += prime[i];
        }

        printf("%d\n", sum);

    }

    return 0;
}

