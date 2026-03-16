#include <iostream>

int main()
{
    int a = 0,b = 0;
    bool flag1,flag2;
    flag2 = false;
    while (true){
        flag1 = false;
        std::cin >> a >> b;
        if (a == 0 && b == 0){
            break;
}       if (flag2 == true){
            std::cout << std::endl;
}       flag2 = true;
        for (int i = a;i <= b;i++){
            if (i % 4 == 0 && i % 100 != 0){
                std::cout << i << std::endl;
                flag1 = true;
}           else if (i % 400 == 0){
                std::cout << i << std::endl;
                flag1 = true;
}
}
        if (flag1 == false){
            std::cout << "NA" << std::endl;
}
}
    return 0;
}