#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#ifdef __GXX_EXPERIMENTAL_CXX0X__
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#ifdef __GXX_EXPERIMENTAL_CXX0X__
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif


using namespace std;

int main()
{
	
	int W, N;
	int count = 1;
	while (1)
	{
		int data[1001][2] = {};
		cin >> W;
		if (W == 0)break;
		cin >> N;
		int a, b;

		for (size_t i = 0; i < N; i++)
		{
			scanf("%d,%d", &a, &b);
			for (size_t j = 0; j < 1001; j++)
			{

				data[j][1] = max(data[j][1], data[j][0]);
				if (j + b <= W)
				{
					data[j + b][1] = max(data[j + b][1], data[j][0] + a);
				}

			}
			for (size_t j = 0; j < 1001; j++)
			{
				data[j][0] = data[j][1];
			}
		}
		int ans = 0, memo;
		for (size_t i = 0; i < 1001; i++)
		{
			if (ans < data[i][0])
			{
				ans = data[i][0];
				memo = i;
			}
		}
		cout << "Case "<<count<<":"<<endl << ans << endl << memo << endl;
		count++;
	}return 0;
}