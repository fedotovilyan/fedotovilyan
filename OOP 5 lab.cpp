﻿// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 
using namespace std;
class myclass1 {
    friend class myclass2;   
private:
    int x;
public:
    myclass1(int a)
    {
        x = a;
    }
};
class myclass2 {
public:
    void shownData(myclass1 obj) {
        cout << "x value is : " << obj.x;
    }
};
int main()
{
    myclass1 obj1(5);
    myclass2 obj2;
    obj2.shownData(obj1);
}