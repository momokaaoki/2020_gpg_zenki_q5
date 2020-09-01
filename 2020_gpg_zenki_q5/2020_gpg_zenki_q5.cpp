#include <iostream>
using namespace std;

class Student {
public:

    char name[16];
    int japanese;
    int society;
    int math;
    
    void sum();
    void avg();
    void show();
};

//合計値を求める
void Student:: sum() {

    int sum = 0;
    sum = japanese + society + math;
    cout << sum << endl;
}

//平均値を求める
void Student:: avg() {
    int avg = 0;
    avg = japanese + society + math;
    avg = avg / 3;
    cout << avg << endl;
}

//表示させる
void Student:: show() {
    cout << name << ":" << japanese << "," << society << "," << math << endl;
}

int main()
{
    Student sd[3];
    sd[0] = { "田中",100,100,100 };
    sd[1] = { "佐藤", 90, 90, 90 };
    sd[2] = { "鈴木", 80, 80, 80 };

    for (int i = 0; i < 3; ++i) {
        sd[i].show();
        sd[i].sum();
        sd[i].avg();
    }
}