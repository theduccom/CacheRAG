#include <cstdio>
#include <cstring>

using namespace std;

class Inning {
 public:
  enum class Event { Hit, Homerun, Out };
  Inning() : bases_({ false, false, false }), out_count_(0), score_(0) {}
  int GetScore() { return score_; }
  bool IsFinished() { return out_count_ >= 3; }
  void Update(Event event) {
    switch (event) {
      case Event::Hit:
        if (bases_[2]) { ++score_; }
        bases_[2] = bases_[1];
        bases_[1] = bases_[0];
        bases_[0] = true;
        break;
      case Event::Homerun:
        score_ += CountRunners() + 1;
        bases_[2] = false;
        bases_[1] = false;
        bases_[0] = false;
        break;
      case Event::Out:
        ++out_count_;
        break;
    }
  }
 private:
  int CountRunners() {
    int count = 0;
    for (int i = 0; i < 3; ++i) { if (bases_[i]) { ++count; } }
    return count;
  }
  bool bases_[3];
  int out_count_;
  int score_;
};

Inning::Event ToEvent(const char *event_name) {
  if (strcmp(event_name, "HIT") == 0) { return Inning::Event::Hit; }
  if (strcmp(event_name, "HOMERUN") == 0) { return Inning::Event::Homerun; }
  return Inning::Event::Out;
}

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    Inning inning;
    while (!inning.IsFinished()) {
      char event[40];
      scanf("%s", event);
      inning.Update(ToEvent(event));
    }
    printf("%d\n", inning.GetScore());
  }
  return 0;
}