#include <iostream>
#include <cmath>
 
int main(){
    int num;
    std::cin >> num;
     
    for(int i = 0; i < num; ++i){
        double xa, xb, ya, yb, ra, rb;
        std::cin >> xa >> ya >> ra >> xb >> yb >> rb;
        double d = hypot(xa - xb, ya - yb);
         
        int answer = 1;
        if(ra + rb < d){
            answer = 0;
        }
        else if(ra - rb > d){
            answer = 2;
        }
        else if(rb - ra > d){
            answer = -2;
        }
        std::cout << answer << std::endl;
    }
    return 0;
}