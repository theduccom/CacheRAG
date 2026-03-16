#include <iostream>

bool judgeUruyear(int year)
{

    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }

}
int a=1;
void printUruyear(int year_begin, int year_end)
{
if(a==0){
std::cout << std::endl;}a=0;
    int count_year = 0;

    // kono for loop no jyouken-siki ha "=" hituyou
    for (int i = year_begin; i <= year_end; i++) {
        
        if (judgeUruyear(i)) {

            count_year += 1;
            std::cout << i << std::endl;
        }    
    }

    if (count_year == 0) { 
        std::cout << "NA" << std::endl;

    
    }
    
}

int main()
{
    int year_begin, year_end;

    for (; true;) {

        std::cin >> year_begin >> year_end;

        if (year_begin == 0 && year_end == 0) {
            break;
        }

        printUruyear(year_begin, year_end);
    }
    
    return 0;
}