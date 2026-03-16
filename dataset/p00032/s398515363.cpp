#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int side1, side2, diagonal, rectangle = 0, rhombus = 0;

  while(1){
    if(scanf("%d,%d,%d", &side1, &side2, &diagonal) != EOF){
      if(side1 * side1 + side2 * side2 == diagonal * diagonal){
	rectangle++;
      }
      if(side1 == side2){
	rhombus++;
      }
    }else{
      printf("%d\n%d\n", rectangle, rhombus);
      break;
    }
  }

  return 0;
}