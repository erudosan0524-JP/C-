#include <iostream>
#include <string>

using namespace std;

class Sample { //クラス
  private: 
    string name; //メンバ変数

  public: 
    Sample(string s){ //コンストラクタ
      name = s;
    }
    void print(){ //メンバ関数
      cout << "こんにちは。私は" << name << "です。" << endl;
    }
};

int main(){
  Sample sam("C++er"); //コンストラクタ生成
  cout << "あなたの名付けたものが生成されました" << endl;
  cout << "しゃべりだしそうだ・・・" << endl;

  sam.print();
}
