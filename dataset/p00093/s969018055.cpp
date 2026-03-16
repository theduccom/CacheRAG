#include <stdio.h>
#include <stdbool.h>

int get_leap_years(int *lys, int begin, int end);
bool is_leap_year(int y);

int main()
{
    int leap_years_list[1000];
    bool first_set = true;

    while (true) {
        int year_begin, year_end;
        //読み込み
        scanf("%d %d", &year_begin, &year_end);

        //終了判定
        if (year_begin == 0 && year_end == 0) {
            break;
        }

        //閏年を計算する
        int leap_years_count = get_leap_years(leap_years_list, year_begin, year_end);

        //セットとセットの間には空行を入れる
        if (first_set) {
            first_set = false;
        } else {
            putchar('\n'); //ちなみにputcharは一文字だけ出力する関数です
        }

        //セットの閏年を出力
        if (leap_years_count == 0) {
            puts("NA"); //putsは単純に与えられた文字列を出力した後改行する関数です
            continue;
        }
        for (int i = 0; i < leap_years_count; i++) {
            printf("%d\n", leap_years_list[i]);
        }
        
    }
}

int get_leap_years(int *lys, int begin, int end)
{
    int count = 0;
    for (int y = begin; y <= end; y++) {
        if (is_leap_year(y)) {
            lys[count++] = y;
        }
    }
    return count;
}

bool is_leap_year(int y)
{
    if (y % 400 == 0) {
        return true; 
    } else if (y % 100 == 0) {
        return false;
    } else {
        return y % 4 == 0;
    }
}