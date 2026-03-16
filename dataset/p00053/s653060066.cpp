#include <cstdio>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> prime;
    int n;
    
    prime.push_back(2);
    scanf("%d", &n);
    while (n != 0){
        int i;
        int sum = 0;
        int num;
        for (num = prime[prime.size() - 1] + 1; n > prime.size(); num++){
            for (i = 0; i < prime.size(); i++){
                if (num % prime[i] == 0){
                    break;
                }
            }
            if (i == prime.size()){
                prime.push_back(num);
            }
        }
        for (i = 0; i < n; i++){
            sum += prime[i];
        }
        printf("%d\n", sum);
        
        scanf("%d", &n);
    }
    
    return 0;
}