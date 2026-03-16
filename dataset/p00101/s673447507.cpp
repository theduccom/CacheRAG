#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

static void inputSentences(std::vector<std::string>& sentences, int n)
{
  //fflush(stdin);
  std::string inputSentence;
  getline(std::cin, inputSentence);
  for (int i = 0; i < n; i++) {
    getline(std::cin, inputSentence);
    sentences.push_back(inputSentence);
  }
}

//static void convertSentencesCore(const std::string& targetBase,
//                                 const char afterConvert,
//                                 int convertPos,
//                                 std::vector<std::string>& sentences)
//{
//  for (std::vector<std::string>::iterator it = sentences.begin();
//    it != sentences.end();
//    ++it) {
//    /* ?????¬ */
//    if (*it == targetBase) {
//      it->at(convertPos) = afterConvert;
//      continue;
//    }
//    if (it->size() <= targetBase.size()) {
//      continue;
//    }
//    while(true) {
//      int find;
//      std::string targetStr;
//      bool findFlg = false;
//      /* ?????? */
//      targetStr = " " + targetBase + " ";
//      find = it->find(targetStr);
//      if (find != std::string::npos) {
//        it->at(find + convertPos + 1) = afterConvert;
//        findFlg = true;
//      }
//      /* ?????? */
//      targetStr = targetBase + " ";
//      find = it->find(targetStr);
//      if (find == 0) {
//        it->at(convertPos) = afterConvert;
//        findFlg = true;
//      }
//      /* ????°? */
//      targetStr = " " + targetBase;
//      find = it->find(targetStr);
//      if (find == it->size() - targetBase.size() - 1) {
//        it->at(find + convertPos + 1) = afterConvert;
//        findFlg = true;
//      }
//      if (findFlg == false) {
//        break;
//      }
//    }
//  }
//}
//
//static void convertSentences(std::vector<std::string>& sentences)
//{
//  convertSentencesCore("Hoshino", 'a', 6, sentences);
//  convertSentencesCore("Hoshino,", 'a', 6, sentences);
//  convertSentencesCore("Hoshino.", 'a', 6, sentences);
//}

static void convertSentences(std::vector<std::string>& sentences)
{
  const std::string from = "Hoshino";
  const std::string to = "Hoshina";
  for (std::vector<std::string>::iterator it = sentences.begin();
    it != sentences.end();
    ++it) {
    while (true) {
      std::string::size_type find = it->find(from);
      if (find == std::string::npos) {
        break;
      }
      else {
        //it->at(find + 6) = 'a';
        it->replace(find, from.size(), to);
      }
    }
  }
}

static void outputSentences(std::vector<std::string>& sentences)
{
  for (std::vector<std::string>::iterator it = sentences.begin();
    it != sentences.end();
    ++it) {
    std::cout << *it << std::endl;
  }
}

int main(void)
{
  int n;
  std::vector<std::string> sentences;

  std::cin >> n;

  inputSentences(sentences, n);
  convertSentences(sentences);
  outputSentences(sentences);

  return 0;
}