#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int y);

int get_leap_years(int leap_years_list[1000], int year_begin, int year_end);

int main()
{
  int leap_years_list[1000]; //A.D. 0 - A.D. 3000 の間に閏年は高々1000個しかない                                                                                                     

  bool first_set = true; //一つ目のセットの前にだけは改行を入れてはいけないので                                                                                                      

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
      putchar('\n'); //putcharは一文字だけ出力する関数です                                                                                                                           
    }

    //閏年を出力                                                                                                                                                                     
    if (leap_years_count == 0) {
      puts("NA"); //putsは与えられた文字列を出力した後改行する関数です                                                                                                               
    } else {
      for (int i = 0; i < leap_years_count; i++) {
        printf("%d\n", leap_years_list[i]);
      }
    }

  }
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

int get_leap_years(int leap_years_count[1000], int year_begin, int year_end)
{
    int k = 0;
    for (int n = year_begin; n <= year_end ; n++) {
      if ( is_leap_year(n) == false ) {
        //false の時何も処理しない                                                                                                                                                   
      } else {
        leap_years_count[k] = n;  //k番目のメモリに閏年の年を入力する                                                                                                                
        k++;
      }
    }
    return k;  //使ったメモリの数を返す                                                                                                                                              
}