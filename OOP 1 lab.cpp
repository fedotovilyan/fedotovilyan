// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Point 
{
public:
    int x;
    int y;

    vt()
    {
        cout << "(" << x << "," << y << ")" << endl;

    }
};






int main()
{
    Point a;
    a.x = 1;
    a.y = 2;
    a.vt();

}

