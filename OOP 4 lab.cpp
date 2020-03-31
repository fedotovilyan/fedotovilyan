// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
#include <iostream>
    using namespace std;

    class Point
    {
    private:

        int* masX;
        int* masY;
        int kt;



    public:

        Point(int kt)
        {
            masX = new int[kt];
            masY = new int[kt];
            this->kt = kt;
        }

        void vkt(int kt)
        {
            for (int i = 0; i < kt; i++)
            {
                cin >> masX[i];
                cin >> masY[i];

            }

        }

        void vt()
        {
            for (int i = 0; i < ct; i++)
            {
                cout << "(" << masX[i] << "," << masY[i] << ")" << endl;

            }

        }

        ~Point()
        {
            delete[] masX;
            delete[] masY;
        }







    };


    void points(int kt)
    {
        Point points(kt);
        cout << "\nВведите координаты точек: ";
        points.vkt(kt);
        cout << endl;
        points.vt();


    }


    int main()
    {
        int kt;
        setlocale(LC_ALL, "ru");
        cout << "Введите количество точек: ";
        cin >> kt;
        points(kt);


    }


}

