#include <cstdio>
#include <queue>
using namespace std;

int weight[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

int main(void)
{
    int sum;
    priority_queue < int, vector<int>, greater<int> > ans;
    
    while (scanf("%d", &sum) != EOF) {
        for (int i = 9; 0 <= i; i--){
            if (sum <= 1){
                if (sum == 1){
                    ans.push(sum);
                    break;
                }
            }
            else if (weight[i] <= sum){
                sum -= weight[i];
                ans.push(weight[i]);
            }
        }
        while (!ans.empty()){
            printf("%d", ans.top());
            ans.pop();
            if (ans.empty()) printf("\n");
            else printf(" ");
        }
    }
    
    return (0);
}