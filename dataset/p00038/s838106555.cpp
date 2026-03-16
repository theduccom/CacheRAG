#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

bool f_card(int *check);
bool f_house(int *check);
bool straight(int *check);
bool t_card(int *check);
bool t_pair(int *check);
bool o_pair(int *check);

int main()
{
  int c;
  
  while (~scanf("%d", &c)){
    int check[18] = {0};
    check[c]++;
    for (int i = 0; i < 4; i++){
      scanf(",%d", &c);
      check[c]++;
    }

    if (f_card(check)){
      printf("four card\n");
    }
    else if (f_house(check)){
      printf("full house\n");
    }
    else if (straight(check)){
      printf("straight\n");
    }
    else if (t_card(check)){
      printf("three card\n");
    }
    else if (t_pair(check)){
      printf("two pair\n");
    }
    else if (o_pair(check)){
      printf("one pair\n");
    }
    else {
      printf("null\n");
    }
  }

  return (0);
}

bool f_card(int *check)
{
  for (int i = 1; i <= 13; i++){
    if (check[i] == 4){
      return (true);
    }
  }

  return (false);
}

bool f_house(int *check)
{
  bool three = false, two = false;

  for (int i = 1; i <= 13; i++){
    if (check[i] == 3){
      three = true;
    }
    if (check[i] == 2){
      two = true;
    }
  }

  if (three && two){
    return (true);
  }
  else {
    return (false);
  }
}

bool straight(int *check)
{
  for (int i = 1; i <= 13; i++){
    if (check[i] == 1){
      if (check[i + 1] && check[i + 2] && check[i + 3] && check[i + 4]){
        return (true);
      }
      if (i == 10 && check[11] && check[12] && check[13] && check[1]){
        return (true);
      }
    }
  }

  return (false);
}

bool t_card(int *check)
{
  for (int i = 1; i <= 13; i++){
    if (check[i] == 3){
      return (true);
    }
  }

  return (false);
}

bool t_pair(int *check)
{
  for (int i = 1; i <= 13; i++){
    if (check[i] == 2){
      for (int j = 1; j <= 13; j++){
        if (j != i && check[j] == 2){
          return (true);
        }
      }
      break;
    }
  }

  return (false);
}

bool o_pair(int *check)
{
  for (int i = 1; i <= 13; i++){
    if (check[i] == 2){
      return (true);
    }
  }

  return (false);
}