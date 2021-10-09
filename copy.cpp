#include<iostream>
using namespace std;

class Test {
    
    private:
    float r=3, area;

public:

    // void input() {
    //     cout << "Enter radius of a circle:";
    //     cin >> r;

    // }

    void findArea() {
        area = 3.14 * r * r;
    }

    void display() {
        cout << "Area of circle is:" << area;
    }
};

int main() {

    Test obj;

    // obj.input();
    obj.findArea();
    obj.display();

    return 0;
}