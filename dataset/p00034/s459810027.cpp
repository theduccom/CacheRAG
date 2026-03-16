#include <iostream>
#include <cstdio>

bool read_data(int* distances, int count, int& velocityA, int& velocityB)
{
	for (int i = 0; i < count; ++i) {
		if (scanf("%d,", &distances[i]) != 1) {
			return false;
		}
	}
	return (scanf("%d,%d", &velocityA, &velocityB) == 2);
}


int main()
{
	const int distance_count = 10;
	int distances[distance_count], velocityA, velocityB;

	while (read_data(distances, distance_count, velocityA, velocityB)) {
		int total_distance = 0;
		for (int i = 0; i < distance_count; ++i) {
			total_distance += distances[i];
		}
		int cross_point = (total_distance * velocityA + velocityA + velocityB - 1) / (velocityA + velocityB);
		int cumulative_distance = 0;
		for (int i = 0; i < distance_count; ++i) {
			cumulative_distance += distances[i];
			if (cross_point <= cumulative_distance) {
				std::cout << (i + 1) << std::endl;
				break;
			}
		}
	}

	return 0;
}