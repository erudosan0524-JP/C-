#include <iostream>
#include <string>

using namespace std;

class Sample { //�N���X
  private: 
    string name; //�����o�ϐ�

  public: 
    Sample(string s){ //�R���X�g���N�^
      name = s;
    }
    void print(){ //�����o�֐�
      cout << "����ɂ��́B����" << name << "�ł��B" << endl;
    }
};

int main(){
  Sample sam("C++er"); //�R���X�g���N�^����
  cout << "���Ȃ��̖��t�������̂���������܂���" << endl;
  cout << "����ׂ肾���������E�E�E" << endl;

  sam.print();
}
