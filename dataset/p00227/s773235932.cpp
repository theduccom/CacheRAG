#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
 
int main(){
    u_int n, m;
    while(std::cin >> n >> m){
        //n??????m???0????????°??????
        if(n == 0 && m == 0){
            return 0;
        }
         
        std::vector<u_int> p(n);
        for(int i = 0; i < n; ++i){
            std::cin >> p[i];
        }
         
        std::sort(p.begin(), p.end(), std::greater<u_int>());
        //(m????????°) ????????????????????????
        for(int i = m; i <= n; i += m){
            p[i-1] = 0;
        }
         
        std::cout << std::accumulate(p.begin(), p.end(), 0) << std::endl;
    }
     
    return 0;
}