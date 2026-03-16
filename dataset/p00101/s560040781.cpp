#include <iostream>
#include <string>

/**
* @brief インタフェース
*/
class IAizuPR
{
public:
    virtual std::string& executeEx() = 0;
};

/**
* @brief 文字列を操作する
*/
class AizuPR final : public IAizuPR
{
public:
    /**
    * @brief コンストラクタ
    */
    AizuPR(std::string& ss) :
        str(ss) ,
        bufCnt(0) {}

    /**
    * @brief デストラクタ
    */
    ~AizuPR() {}

public:
    /**
    * @fn std::string& executeEx()
    * @brief 文字列からHoshinoを検索し、Hoshinaへ変換する
    * @return std::string& 変換後の文字列
    */
    std::string& executeEx();

private:
    /**
    * @fn bool isFind(int& index)
    * @brief Hoshinoが含まれるか検索する
    * @param[out] index 開始位置
    * @return bool 含まれる場合はtrueを、そうでなければfalseを返す
    */
    bool isFind(int& index);

    /**
    * @fn void replace(int index)
    * @brief HoshinoをHoshinaに置き換える
    * @param[in] index 開始位置
    */
    void replace(int index);

private:
    //! "Hoshino"
    static const std::string Hoshino;

    //! "Hoshina"
    static const std::string Hoshina;

private:
    //! ターゲット文字列
    std::string str;

    //! バッファカウント
    int bufCnt;
};

const std::string AizuPR::Hoshino("Hoshino");
const std::string AizuPR::Hoshina("Hoshina");

std::string& AizuPR::executeEx()
{
    int tIdx = 0;
    std::string tStr(str);

    while (isFind(tIdx)) {
        replace(tIdx);
    }

    return str;
}

/**
* @brief コントロール
*/
class Control
{
public:
    /**
    * @fn void executeEx()
    * @brief データセット回文字列を読み込み、HoshinoをHoshinaへ変換し、表示する
    */
    void executeEx();

};

bool AizuPR::isFind(int& index)
{
    
    if (std::string::npos == (index = str.find(Hoshino, bufCnt))) {
        index = 0;
        return false;
    }

    bufCnt = index + Hoshina.length();

    return true;
}

void AizuPR::replace(int index)
{
    str.replace(index, Hoshino.length(), Hoshina);
}

void Control::executeEx()
{
    std::string in("");
    std::string out("");

    int size = 0;

    std::cin >> size;
    std::cin.ignore();

    for (int i = 0; i < size; i++) {
        std::getline(std::cin, in);

        IAizuPR* pAizuPR = new AizuPR(in);

        out = pAizuPR->executeEx();

        std::cout << out << std::endl;

        in.clear();

        out.clear();
        delete pAizuPR;
    }
}

/**
* @fn int main()
* @brief エントリポイント
*/
int main()
{
    Control().executeEx();
}

