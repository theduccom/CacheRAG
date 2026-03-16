#include <stdio.h>
#include <queue>
using namespace std;

int main()
{
	int n,no;
	long long many,yen;
	long long total[4001];
	bool update;
	queue<int> que;

	for(int i = 0; i <= 4000; i++){
		total[i] = 0;
	}

	scanf("%d",&n);

	while(n != 0){
		
		update = false;

		for(int i = 0; i < n; i++){
			scanf("%d%lld%lld",&no,&many,&yen);
			total[no] += many*yen;
			que.push(no);
		}

		while(!que.empty()){
			if(total[que.front()] >= 1000000){
				printf("%d\n",que.front());
				update = true;
			}
			total[que.front()] = 0;
			que.pop();
		}
		if(!update){
			printf("NA\n");
		}

		scanf("%d",&n);
	}

	return 0;
}