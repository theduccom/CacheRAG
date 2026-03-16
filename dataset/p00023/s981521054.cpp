#include <iostream>
#include <cmath>
#include <vector>

struct Vector2D {
	double x;
	double y;
	double abs() const {
		return std::sqrt(x * x + y * y);
	}
	Vector2D& operator-=(const Vector2D& rhs) {
		x -= rhs.x;
		y -= rhs.y;
		return *this;
	}
};

Vector2D operator-(const Vector2D& lhs, const Vector2D& rhs)
{
	return Vector2D(lhs) -= rhs;
}

int main()
{
	int data_count = 0;
	std::cin >> data_count;
	for (int i = 0; i < data_count; ++i) {
		Vector2D a, b;
		double ra, rb;
		if (std::cin >> a.x >> a.y >> ra >> b.x >> b.y >> rb) {
			double rab = (b - a).abs();
			int result;
			if (ra > rab + rb) {
				result = 2;
			} else if (rb > rab + ra) {
				result = -2;
			} else if (ra + rb < rab) {
				result = 0;
			} else {
				result = 1;
			}
			std::cout << result << std::endl;
		}
	}

	return 0;
}