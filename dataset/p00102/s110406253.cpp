#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
 
int ary[10][10];
 
int main() {
        while(1) {
                static int n;
                memset(ary, 0, sizeof(ary));
                scanf(" %d", &n);
                if(!n)
                        break;
                for(int y = 0; y < n; y++) {
                        for(int x = 0; x < n; x++) {
                                static int t;
                                scanf(" %d", &t);
                                ary[y][x] = t;
                        }
                }
                vector<int> width;
                vector<int> height;
                for(int i = 0; i < n; i++) {
                        int sum = 0;
                        for(int j = 0; j < n; j++) {
                                sum += ary[i][j];
                        }
                        width.push_back(sum);
                }
                for(int i = 0; i < n; i++) {
                        int sum = 0;
                        for(int j = 0; j < n; j++) {
                                sum += ary[j][i];
                        }
                        height.push_back(sum);
                }
                int result = accumulate(height.begin(), height.end(), 0);
                
                for(int y = 0; y < n; y++) {
                        for(int x = 0; x < n; x++) {
                                printf("%5d", ary[y][x]);                       
                        }
                        printf("%5d\n", width[y]);
                }
                for(int i = 0; i < n; i++)
                        printf("%5d", height[i]);
                printf("%5d\n", result);
        }
        return 0;
} 