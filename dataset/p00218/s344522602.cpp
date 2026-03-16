#include <iostream>

char aizu(int pm, int pe, int pj)
{
    if (pm==100 || pe==100 || pj==100) {
        return 'A';
    } else if ((pm+pe) >= 180){
        return 'A';
    } else if ((pm+pe+pj) >= 240){
        return 'A';
    } else if ((pm+pe+pj) >= 210){
        return 'B';
    } else if ((pm+pe+pj) >= 150 && (pm>=80 || pe>=80)) {
        return 'B';
    } else {
        return 'C';
    }
}

int main()
{
    int n,pm,pe,pj;
    while(1){
        std::cin >> n;
        if(n==0){
            break;
        }
        for (int i=0; i<n; i++) {
            std::cin >> pm >> pe >> pj;
            std::cout << aizu(pm, pe, pj) << std::endl;
        }
    }
}