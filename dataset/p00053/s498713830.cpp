#include <cstdio>
#include <vector>
using namespace std;

int main()
{
	vector<int> prime;
	int n;
	
	prime.push_back(2);
	for(int i = 3; prime.size() < 10000; i += 2){
		for (int j = 0; j < prime.size() ;j++){
			if (i%prime[j] == 0){
				break;
			}
			if (j == prime.size()-1){
				prime.push_back(i);
			}
		}
	}
	
	while(scanf("%d", &n), n != 0){
		
		int total=0;
		
		for(int i = 0; i < n; i++){
			total += prime[i];
		}
		
		printf("%d\n", total);
	}
	
	return (0);
}