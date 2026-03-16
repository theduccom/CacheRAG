//#define LOCAL

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
#define SIZE 50000

using namespace std;

int map[8];
int factor[8];
int result[SIZE];
int dir[] = {-1, 1, -4, 4};

int cantor(){
	int ans = 0;

	for(int i = 0; i < 8; i++){
		int num = 0;
		for(int j = i + 1; j < 8; j++){
			if(map[i] > map[j])
				num++;
		}

		ans += factor[7 - i] * num;
	}

	return ans;
}

void inv_cantor(int num){
	bool visited[8] = {false};

	for(int i = 0; i < 8; i++){
		int divv = num / factor[7 - i];
		num %= factor[7 - i];

		int j;
		for(j = 0; j < 8; j++){
			if(visited[j] == false){
				if(divv == 0)
					break;
				divv--;
			}
		}

		map[i] = j;
		visited[j] = true; 
	}
}

void init(){
	factor[0] = 1;
	for(int i = 1; i < 8; i++)
		factor[i] = factor[i - 1] * i;

	memset(result, 0, sizeof(result));

	/*for(int i = 0; i < 8; i++)
		printf("%d ", factor[i]);
	printf("\n");*/
}

inline void updata(queue<int> &q, int cur,int p0,int p1)
{
    swap(map[p0], map[p1]);
    int s = cantor();
    if(!result[s]){
        result[s] = result[cur]+1;
        q.push(s);
    }
    swap(map[p0], map[p1]);
}

void bfs(){
	result[0] = 1;
	queue<int> q;
	q.push(0);

	while(!q.empty()){
		int temp = q.front();
		q.pop();

		inv_cantor(temp);
		/*for(int i = 0; i < 8; i++)
			printf("%d ", map[i]);
		printf("\n");*/

		int zero_pos;
		for(int i = 0; i < 8; i++){
			if(map[i] == 0){
				zero_pos = i;
				break;
			}
		}

		int r = zero_pos%4;
        if(r) {
            updata(q, temp,zero_pos-1,zero_pos);
        }
        if(r<3){
            updata(q, temp,zero_pos+1,zero_pos);
        }
        updata(q, temp,zero_pos,zero_pos+(zero_pos>3?-4:4));
		/*for(int i = 0; i < 4; i++){
			int new_pos = zero_pos + dir[i];

			if(0 <= new_pos && new_pos < 8 
				&& !(zero_pos == 2 && new_pos == 3) &&
				!(zero_pos == 3 && new_pos == 2)){
				swap(map[zero_pos], map[new_pos]);
				
				int r = cantor();
				if(result[r] == 0){
					result[r] = result[temp] + 1;
					q.push(r);
				}

				swap(map[zero_pos], map[new_pos]);
			}
		}*/
	}

}

int main(void){
#ifdef LOCAL
	freopen("data.in", "r", stdin);
#endif
	init();
	bfs();

	while(scanf("%d", &map[0]) != EOF){
		for(int i = 1; i < 8; i++)
			scanf("%d", &map[i]);

		int x = cantor();
		printf("%d\n", result[x] - 1);
	}

	return 0;
}
