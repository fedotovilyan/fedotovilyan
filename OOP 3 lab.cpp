// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 
using namespace std;
class Human {
public:
    static int h_count;       // we can't initialize inside class 
};
int Human::h_count = 0;         //  syntax 
int main()
{
    cout << Human::h_count;      // we can acess satic variable without making object 
    return 0;
}