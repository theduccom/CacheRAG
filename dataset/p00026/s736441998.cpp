#include <iostream>
#include <vector>
#include <map>

class DrawAreaStrategy
{
public:
	DrawAreaStrategy(){}
	virtual ~DrawAreaStrategy(){}

	DrawAreaStrategy(const DrawAreaStrategy&) = delete;
	DrawAreaStrategy& operator=(const DrawAreaStrategy&) = delete;

	DrawAreaStrategy(DrawAreaStrategy&&) = delete;
	DrawAreaStrategy& operator=(DrawAreaStrategy&&) = delete;

	virtual void Draw(std::vector<std::vector<int>>& draw_sheet, int x, int y) = 0;
};

class DrawAreaSmallStrategy
{
public:
	DrawAreaSmallStrategy() {}
	virtual ~DrawAreaSmallStrategy() {}

	DrawAreaSmallStrategy(const DrawAreaSmallStrategy&) = delete;
	DrawAreaSmallStrategy& operator=(const DrawAreaSmallStrategy&) = delete;

	DrawAreaSmallStrategy(DrawAreaSmallStrategy&&) = delete;
	DrawAreaSmallStrategy& operator=(DrawAreaSmallStrategy&&) = delete;

	virtual void Draw(std::vector<std::vector<int>>& draw_sheet, int x, int y)
	{
		static const std::vector<std::pair<int, int>> draw_list
		{
			{ 0,  0 },

			{ -1,  0 },
			{  1,  0 },
			{  0, -1 },
			{  0,  1 }
		};
		for (auto draw_point : draw_list)
		{
			int draw_x = draw_point.first + x;
			if (draw_x < 0 || draw_x >= 10){ continue; }

			int draw_y = draw_point.second + y;
			if (draw_y < 0 || draw_y >= 10) { continue; }

			draw_sheet[x + draw_point.first][y + draw_point.second]++;
		}
	}
};


class DrawAreaMiddleStrategy
{
public:
	DrawAreaMiddleStrategy() {}
	virtual ~DrawAreaMiddleStrategy() {}

	DrawAreaMiddleStrategy(const DrawAreaMiddleStrategy&) = delete;
	DrawAreaMiddleStrategy& operator=(const DrawAreaMiddleStrategy&) = delete;

	DrawAreaMiddleStrategy(DrawAreaMiddleStrategy&&) = delete;
	DrawAreaMiddleStrategy& operator=(DrawAreaMiddleStrategy&&) = delete;

	virtual void Draw(std::vector<std::vector<int>>& draw_sheet, int x, int y)
	{
		static const std::vector<std::pair<int, int>> draw_list
		{
			{ 0,  0 },

			{ -1,  0 },
			{ 1,  0 },
			{ 0, -1 },
			{ 0,  1 },

			{ -1, -1 },
			{ -1,  1 },
			{  1, -1 },
			{  1,  1 }
		};
		for (auto draw_point : draw_list)
		{
			int draw_x = draw_point.first + x;
			if (draw_x < 0 || draw_x >= 10) { continue; }

			int draw_y = draw_point.second + y;
			if (draw_y < 0 || draw_y >= 10) { continue; }

			draw_sheet[x + draw_point.first][y + draw_point.second]++;
		}
	}
};

class DrawAreaLargeStrategy
{
public:
	DrawAreaLargeStrategy() {}
	virtual ~DrawAreaLargeStrategy() {}

	DrawAreaLargeStrategy(const DrawAreaLargeStrategy&) = delete;
	DrawAreaLargeStrategy& operator=(const DrawAreaLargeStrategy&) = delete;

	DrawAreaLargeStrategy(DrawAreaLargeStrategy&&) = delete;
	DrawAreaLargeStrategy& operator=(DrawAreaLargeStrategy&&) = delete;

	virtual void Draw(std::vector<std::vector<int>>& draw_sheet, int x, int y)
	{
		static const std::vector<std::pair<int, int>> draw_list
		{
			{  0,  0 },

			{ -1,  0 },
			{  1,  0 },
			{  0, -1 },
			{  0,  1 },

			{ -1, -1 },
			{ -1,  1 },
			{  1, -1 },
			{  1,  1 },

			{ -2,  0 },
			{  2,  0 },
			{  0, -2 },
			{  0,  2 }
		};
		for (auto draw_point : draw_list)
		{
			int draw_x = draw_point.first + x;
			if (draw_x < 0 || draw_x >= 10) { continue; }

			int draw_y = draw_point.second + y;
			if (draw_y < 0 || draw_y >= 10) { continue; }

			draw_sheet[x + draw_point.first][y + draw_point.second]++;
		}
	}
};

int main()
{
	DrawAreaSmallStrategy small;
	DrawAreaMiddleStrategy middle;
	DrawAreaLargeStrategy large;

	std::vector< std::vector<int> > sheet(10, std::vector<int>(10));

	int x = 0, y = 0, s = 0;
	char a = 0;
	while (std::cin >> x >> a >> y >> a >> s)
	{
		switch (s)
		{
		case 1:
		{
			small.Draw(sheet, x, y);
			break;
		}
		case 2:
		{
			middle.Draw(sheet, x, y);
			break;
		}
		case 3:
		{
			large.Draw(sheet, x, y);
			break;
		}
		default:
			break;
		}
	}

	int empty_num = 0;
	int max_num = 0;

	for (auto line : sheet)
	{
		for (auto cell : line)
		{
			if (0 == cell)
			{
				empty_num++;
				continue;
			}
			if (max_num < cell)
			{
				max_num = cell;
			}
		}
	}
	std::cout << empty_num << "\n" << max_num << std::endl;

	return 0;
}