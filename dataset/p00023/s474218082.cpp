#include <iostream>
#include <vector>
#include <cmath>
 
int state_circles(const std::vector<double> &a, const std::vector<double> &b){
    double d;
    d = sqrt(pow(a[0] - b[0], 2) + pow(a[1] - b[1], 2));
    if((a[2] + b[2]) < d)
        return 0;
        if(std::abs(a[2] - b[2]) > d){
        if(a[2] > b[2])
            return 2;
        else
            return -2;
    }
     
    else
        return 1;
}
 
int main(){
    std::vector<double> a(3), b(3);
    int data_num;
    std::cin >> data_num;
    for(int i = 0; i < data_num; ++i){ 
        std::cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
        std::cout << state_circles(a, b) << std::endl;
    }
     
    return 0;
}