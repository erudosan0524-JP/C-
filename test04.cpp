#include <iostream>
#include <string>

using namespace std;

class Test {
  string name;
  public:
    Test(string s); //�C�����C���֐�
    void print() const;
};

Test::Test(string s):name(s){} //�ϐ�name�����Ƃ�����s�̒l���������I

void Test::print() const {
  cout << "����ɂ��́B���̖��O��" << name << "�ł�" << endl;
}

int main() {
  string s;
  cout << "AI�𐶐����܂��B���O����͂��Ă�������" << endl;
  cin >> s;

  Test ai(s);
  cout << "���Ȃ��̖��t����AI���������ɐ�������܂���" << endl;
  ai.print();
}
