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
    cout << "現在の燃料は" << oil << "です" << endl;
    cout << "現在の速度は" << speed << "です" << endl;
  } else {
    cout <<"燃料切れです" << endl;
  }
}

string Car::getName(){
  return name_;
}

int main() {
  cout << "車をメモリ上に作ります。燃料を入力してください =>";
  int n;
  cin >> n;
  cout << "車の名前を決めます。名前を入力してください =>";
  string car_name;
  cin >> car_name;

  Car car(car_name,n);
  cout << "車の名前は" << car.getName() << "です。" << endl;
  cout << "加速します" << endl;
  for(int i=0; i < 6; i++){
    car.kasoku();
  }
}
