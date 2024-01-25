#include<iostream>
#include<cmath> 
using namespace std;

class Point {
private:
    int x, y;

public:
    Point() : x(0), y(0) {}

    Point(int x, int y) : x(x), y(y) {}

    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    void distance(int a, int b) {
        int d;
        d = sqrt(pow((x - a), 2) + pow((y - b), 2));

        cout <<"The distance between 2 points is"<< d << endl;
    }
};

int main() {
    Point P1;

    P1.setX(7);
    P1.setY(4);

    int a, b;
    cout << "Input coordinates for Point" << endl;
    cin >> a >> b;

    P1.distance(a, b);


    

    return 0;
}
