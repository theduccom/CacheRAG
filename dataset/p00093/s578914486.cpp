#include <iostream>

bool isLY(int y)
{
    if (y%400 == 0) {
        return true;
    } else if (y%100 == 0) {
        return false;
    } else if (y%4 == 0) {
        return true;
    } else {
        return false;
    }
}

int main(){
    int a,b;
    bool noLY;
    bool firstSet=true;
    while (true) {
        noLY = true;
        std::cin >> a >> b;
        
        if (a==0 && b==0) {
            break;
        }
        
        if (!firstSet) {
            std::cout << std::endl;
        }

        for (int i=0; i <= (b-a); i++) {
            if (isLY(a+i)) {
                std::cout << a+i << std::endl;
                noLY = false;
            }
        }
        if(noLY){
            std::cout << "NA\n";
        }
        firstSet = false;
    }
    return 0;
}