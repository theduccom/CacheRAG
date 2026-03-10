/*
 * main.cpp
 *
 *  Created on: 2011/04/01
 *      Author: satoki
 *      11:27 ~ 11:37 Accepted
 */
#include <iostream>

using namespace std;

int main() {
  int i, j;
  for (i = 1; i < 10; i++)
    for (j = 1; j < 10; j++)
      printf("%dx%d=%d\n", i, j, i * j);
  return 0;
}