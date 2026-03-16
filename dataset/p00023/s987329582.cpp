#include <iostream>
#include <cmath>

class Point
{
public:
	double m_X;
	double m_Y;
	Point(double x, double y)
		: m_X(x)
		, m_Y(y)
	{}
};

class LineSegment
{
private:
	Point m_Start;
	Point m_End;
public:
	LineSegment(Point start, Point end)
		: m_Start(start)
		, m_End(end)
	{}
	double Distance()
	{
		return(std::sqrt(std::pow(m_End.m_X - m_Start.m_X, 2.0) + std::pow(m_End.m_Y - m_Start.m_Y, 2.0)));
	}
	double CalcSlope()
	{
		if (m_End.m_Y == m_Start.m_Y)
		{
			return 0.0;
		}

		if (m_End.m_X == m_Start.m_X)
		{
			return 9999999999.0;
		}

		return((m_End.m_Y - m_Start.m_Y) / (m_End.m_X - m_Start.m_X));
	}
};

int main()
{
	int n = 0;
	std::cin >> n;

	while (n--)
	{
		double x1, y1, r1, x2, y2, r2;
		std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		Point p1{ x1, y1 };
		Point p2{ x2, y2 };
		LineSegment line{ p1, p2 };
		double dist_center = line.Distance();

		if ((r1 + r2) < dist_center)
		{
			std::cout << 0 << std::endl;
			continue;
		}

		if ((r1 + r2) >= dist_center)
		{
			if (dist_center + r1 < r2)
			{
				std::cout << -2 << std::endl;
				continue;
			}
			if (dist_center + r2 < r1)
			{
				std::cout << 2 << std::endl;
				continue;
			}
			std::cout << 1 << std::endl;
			continue;
		}
	}

	return 0;
}