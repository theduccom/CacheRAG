#include <iostream>	
#include <vector>
#include <array>
#include <map>
#include <algorithm>
typedef unsigned LL;

typedef struct tuple{
    LL weight;
    LL value;
} tuple;

bool operator<(const tuple& t1, const tuple& t2){ return t1.value < t2.value; }
bool operator==(const tuple& t1, const tuple& t2){ return t1.value == t2.value; }
tuple operator+(const tuple& t1, const tuple& t2){ return tuple {t1.weight + t2.weight, t1.value + t2.value};}

const unsigned MAX_W = 1000;
const unsigned MAX_N = 1000;
std::array<std::array<tuple, MAX_W+1>, MAX_N+1> dp{};
std::array<std::array<bool, MAX_W+1>, MAX_N+1> isdpable{};

tuple rec(const std::vector<tuple>& items, LL w, LL i = 0) {
    if (isdpable[i][w]) {
        return dp[i][w];
    }
    tuple retval;
    if (items.size() <= i) {
        retval = tuple{0,0};
    }
    else if (w < items.at(i).weight) {
        retval = rec(items, w, i + 1);    //i?????????????????????????????????
    } else {
        retval = std::max( rec(items, w - items[i].weight, i + 1) + items[i], //i???????????????????????????
                           rec(items, w, i + 1),                              //i?????????????????????????????????
                           [](auto a,auto b){
                               if (a == b) return a.weight > b.weight;
                               else return a < b;
                           });
    }
    dp[i][w] = retval;
    isdpable[i][w] = true;
    return retval;
}

void show_res(const tuple& resault) { 
    static LL i{1};
    std::cout << "Case " << i << ":" << std::endl;
    std::cout << resault.value << std::endl;
    std::cout << resault.weight << std::endl;
    i++;
}
void show_tup(const tuple& t) {
    std::cout << t.value << std::endl;
    std::cout << t.weight << std::endl;
}

int main(int argc, char const* argv[])
{
    for(;;){
        LL W{}, N{};
        std::vector<tuple> items{};
        std::cin >> W >> N;
        if (W==0) {
            break;
        }
        items.resize(N);
        for (LL i = 0; i < N; i++) {
            tuple input{};
            std::cin >> input.value;
            std::cin.ignore();
            std::cin >> input.weight;
            std::cin.ignore();
            items[i] = (input);
        }
        auto resault = rec(items, W);
        show_res(resault);
        for (auto&& a : isdpable) {
            for (auto&& b : a) {
                b = false;
            }
        }
    }

    return 0;
}