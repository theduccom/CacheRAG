#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	vector<float> mountain;
	float rcv;
	while (EOF != fscanf(stdin, "%f", &rcv)) {
		mountain.push_back(rcv);
	}
	sort(mountain.begin(), mountain.end());
	const int list_size = static_cast<int>(mountain.size());
	printf("%.1f\n", mountain[list_size-1]-mountain[0]);
	return 0;
}