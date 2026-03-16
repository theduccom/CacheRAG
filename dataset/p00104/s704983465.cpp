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
	int N, M;
	vector<string>data;
	while (cin >> N >> M, N || M)
	{
		data.clear();
		data.resize(N);
		for (size_t i = 0; i < N; i++)
		{
			cin >> data[i];
		}
		int nowx = 0, nowy = 0;
		while (data[nowx][nowy] != '.' && data[nowx][nowy] != 1)
		{
			switch (data[nowx][nowy])
			{
				case '>':{
						data[nowx][nowy] = 0;
						nowy++;
						break;
					}
				case '<':{
						data[nowx][nowy] = 0;
						nowy--;
						break;
					}
				case '^':{
						data[nowx][nowy] = 0;
						nowx--;
						break;
					}
				case 'v':{
						data[nowx][nowy] = 0;
						nowx++;
						break;
					}
				case 0:{
						data[nowx][nowy] = 1;
						break;
					}
				default:break;
			}
		}
		if (data[nowx][nowy] == 1) cout << "LOOP" << endl;
		else cout << nowy << " " << nowx << endl;
	}
	return 0;
}