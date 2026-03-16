// 高校生一人旅.cpp : Defines the entry point for the console application.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <queue>
using namespace std;
queue<int> que;

int data[10000], suffix = 0;

int main(void)
{

	while (1) {
		int line, station;
		int cost[2][101][101] = { 0 };

		scanf("%d %d", &line, &station);
		if (line == 0 && station == 0) {
			break;
		}
		int a, b, value1, value2;
		for (int i = 1; i <= line; i++) {
			scanf("%d %d %d %d", &a, &b, &value1, &value2);
			cost[0][a][b] = value1;
			cost[0][b][a] = value1;
			cost[1][a][b] = value2;
			cost[1][b][a] = value2;
		}

		int question;
		scanf("%d", &question);

		for (int q = 0; q < question; q++) {
			int start, goal, type, min[101];
			bool visit = { false };
			scanf("%d %d %d", &start, &goal, &type);

			while (que.empty() == false) {
				que.pop();
			}

			que.push(start);
			for (int i = 0; i < 101; i++) {
				min[i] = 999999;
			}
			min[start] = 0;

			bool success = false;
			while (que.empty() == false) {
				int size = que.size();
				for (int n = 0; n < size; n++) {
					int front = que.front();
					for (int i = 1; i <= station; i++) {
						if (cost[type][front][i] != 0) {

							if (min[i] > min[front] + cost[type][front][i]) {
								min[i] = min[front] + cost[type][front][i];
								que.push(i);
							}
						}
					}
					if (success == true) {
						break;
					}
					que.pop();
				}
				if (success == true) {
					break;
				}
			}

			data[suffix++] = min[goal];
		}
	}

	for (int i = 0; i < suffix; i++) {
		printf("%d\n", data[i]);
	}

	return 0;
}