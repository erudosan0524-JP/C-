#include <iostream>
#include <string>

using namespace std;

class Test {
  string name;
  public:
    Test(string s); //インライン関数
    void print() const;
};

Test::Test(string s):name(s){} //変数nameを作るとき引数sの値を代入するよ！

void Test::print() const {
  cout << "こんにちは。私の名前は" << name << "です" << endl;
}

int main() {
  string s;
  cout << "AIを生成します。名前を入力してください" << endl;
  cin >> s;

  Test ai(s);
  cout << "あなたの名付けたAIがメモリに生成されました" << endl;
  ai.print();
}
