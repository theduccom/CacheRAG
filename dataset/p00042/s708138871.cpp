#include <algorithm>
#include <array>
#include <iostream>
#include <tuple>
#include <vector>

using treasure_type = std::tuple<int, int>;

treasure_type maximum(const treasure_type& a, const treasure_type& b) {
  if (std::get<0>(a) == std::get<0>(b)) {
    return treasure_type{std::get<0>(a), std::min(std::get<1>(a), std::get<1>(b))};
  } else if (std::get<0>(a) > std::get<0>(b)) {
    return a;
  } else {
    return b;
  }
}

treasure_type solve(int wmax, const std::vector<treasure_type>& ts) {
  std::array<std::vector<treasure_type>, 2> dp{};
  dp[0].resize(wmax + 1);
  dp[1].resize(wmax + 1);
  for (auto i = 0u; i <= wmax; ++i) {
    dp[0][i] = treasure_type{0, 0};
  }

  for (auto i = 0u; i < ts.size(); ++i) {
    const auto& ti  = ts.at(i);
    const auto& dpp = dp.at(i % 2);
    auto& dpn       = dp.at((i + 1) % 2);
    for (auto j = 0u; j <= wmax; ++j) {
      if (j >= std::get<1>(ti)) {
        const auto& dppi2 = dpp[j - std::get<1>(ti)];

        dpn[j] = maximum(dpp.at(j), treasure_type{std::get<0>(ti) + std::get<0>(dppi2),
                                                  std::get<1>(ti) + std::get<1>(dppi2)});
      } else {
        dpn[j] = dpp.at(j);
      }
    }
  }

  return dp.at(ts.size() % 2).at(wmax);
}

auto main() -> int {
  for (int c = 1;; ++c) {
    int w;
    std::cin >> w;
    if (w == 0) break;

    int n;
    std::cin >> n;
    std::vector<treasure_type> ts{};
    for (int i = 0; i < n; ++i) {
      int vi, wi;
      std::scanf("%d,%d", &vi, &wi);
      ts.push_back(treasure_type{vi, wi});
    }

    const auto ans = solve(w, ts);
    std::cout << "Case " << c << ":\n"
              << std::get<0>(ans) << "\n"
              << std::get<1>(ans) << std::endl;
  }
}