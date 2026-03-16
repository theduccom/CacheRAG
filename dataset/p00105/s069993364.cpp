#include<iostream>
#include<string>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

static const int MAX_WORD_LEN = 30;
static const int MAX_PAGE_NUM = 1000;
static const int MAX_BOOK_NUM = 100;

static const int VOID_PAGE    = -1;

class BookIndex {
public:
  BookIndex() {}
  ~BookIndex() {}
  // ????????????????????°????????????
  void SetWord(string word_, int page_) {
    word_page.insert(M::value_type(word_, page_));
  }
  // ??¨??????????????????????????°?????????
  void PrintWords() {
    for (MIT it = word_page.begin(); it != word_page.end();) {
      cout << it->first << endl;
      int count = word_page.count(it->first);
      set<int> st;
      for (int i = 0; i < count; i++) {
        st.insert(it++->second);
      }
      set<int>::iterator st_it = st.begin();
      cout << *st_it++;
      for (; st_it != st.end();st_it++) {
        cout << " " << *st_it;
      }
      cout << endl;
    }
  }
private:
  typedef multimap<string, int> M;
  typedef M::iterator           MIT;
  M word_page;
};

int main() {
  BookIndex book;

  // ??\????????°
  string word;
  int    page;
  while (cin >> word) {
    cin >> page;
    book.SetWord(word, page);
  }
  book.PrintWords();
}