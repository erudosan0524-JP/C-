#include <iostream>
#include <string>

using namespace std;

class Car{
  int oil;
  int speed;
  string name_;
  public:
    Car(string name, int x);
    void kasoku();
    string getName();
};

Car::Car(string name, int x):oil(x),speed(0),name_(name){}

void Car::kasoku() {
  if(oil >= 2){
    speed += 2;
    oil -= 2;
    cout << "���݂̔R����" << oil << "�ł�" << endl;
    cout << "���݂̑��x��" << speed << "�ł�" << endl;
  } else {
    cout <<"�R���؂�ł�" << endl;
  }
}

string Car::getName(){
  return name_;
}

int main() {
  cout << "�Ԃ���������ɍ��܂��B�R������͂��Ă������� =>";
  int n;
  cin >> n;
  cout << "�Ԃ̖��O�����߂܂��B���O����͂��Ă������� =>";
  string car_name;
  cin >> car_name;

  Car car(car_name,n);
  cout << "�Ԃ̖��O��" << car.getName() << "�ł��B" << endl;
  cout << "�������܂�" << endl;
  for(int i=0; i < 6; i++){
    car.kasoku();
  }
}
