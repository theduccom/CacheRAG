#include <stdio.h>

int grading(int pm, int pe, int pj);

int main(void)
{
    int number;
    int pm, pe, pj;
    while (1) {
      scanf("%d", &number);// number of students to grade                                                                                                                            
      if (number == 0) {
        break;
      } else {
        for (int j = 0; j < number; j++) {
          int grade;
          scanf("%d %d %d", &pm, &pe, &pj);
          grade = grading(pm, pe, pj);
          if (grade == 1) {// grade 1 means class A                                                                                                                                  
            printf("A\n");
          } else if (grade == 2) {//grade 2 means class B                                                                                                                            
            printf("B\n");
          } else if (grade == 3) {//grade 3 means class C                                                                                                                            
            printf("C\n");
          }
        }
      }
    }
    return 0;
}

int grading(int pm, int pe, int pj)
{
    int grade;
    if ((pm == 100 || pe == 100 || pj == 100)) {
      grade = 1;
    } else if ((pm + pe) / 2 >= 90) {
      grade = 1;
    } else if ((pm + pe + pj) / 3 >= 80) {
      grade = 1;
    } else if ((pm + pe + pj) / 3 >= 70) {
      grade = 2;
    } else if ((pm + pe + pj) / 3 >= 50 && (pm >=80 || pe >=80)) {
      grade = 2;
    } else {
      grade = 3;
    }
    return grade;
}