//化学のmol計算ソフトウェア
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

#define AVOGADRO_CONST 6.0*(pow(10,23))
#define MOL_VOLUME 22.4
#define FARADAY_CONST 9.65*(pow(10,4))

int main()
{
    int a;
    int num;
    float ans;

    cout << "次のうちどれがわかっているかを入力してください" << endl;
    cout << "粒子の数→1, 体積→2, 電気量→3" << endl;
    cin >> a;
    
    cout << "具体的な数値を入力してください" << endl;
    cin >> num;
    cout << "計算中・・・" << endl;
    
    switch(a)
    {
        case 1: 
        ans = num / AVOGADRO_CONST;
        break;

        case 2:
        ans = num / MOL_VOLUME;
        break;

        case 3: 
        ans = num / FARADAY_CONST;
        break;

        default: 
        cout << "1～3の値を入力してください" << endl;
        break;
    }

    cout << setprecision(2) << ans << endl;
}