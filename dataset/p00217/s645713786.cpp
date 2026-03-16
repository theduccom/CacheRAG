#include<iostream>
#include<queue>

typedef std::pair<int, int>P;

int main(){

	int n;

	while (std::cin >> n, n){
		std::priority_queue<P>que;

		for (int i = 0; i < n; i++){
			int p, d1, d2;
			std::cin >> p >> d1 >> d2;
			que.push(P(d1 + d2, p));
		}

		std::cout << que.top().second << " " << que.top().first << std::endl;
	}

	return 0;
}