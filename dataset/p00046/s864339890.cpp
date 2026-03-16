#include <cstdio>
#include <queue>
using namespace std;

int main()
{
	int i;
	double temp,res;
	priority_queue<double> pq;
	for (i = 1; scanf("%lf",&temp) != EOF;i++) {
		pq.push(temp);
	}
	res = pq.top();
	for (int j = 0; j < i - 1; j++)pq.pop();
	res -= pq.top();
	printf("%lf",res);
	return 0;
}