// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int stb, str,koe,temp,km;
    bool b;
    b = true;
    km = 0;
    koe = 0;
        cout << "Введите количество строк матрицы: ";
        cin >> str;
        cout << "Введите количество столбцов матрицы: ";
        cin >> stb;
        int **a = new int*[str];
        int* k = new int[str];
        for (int i = 0; i < str; i++) {
            a[i] = new int[stb];
        }
        cout << "Заполните матрицу: ";
        for (int i = 0; i < str; i++) {
            for (int j = 0; j < stb; j++) {
                cin >> a[i][j];
            }
        }
        cout << "\n";
        cout << "________" << endl;

        for (int i = 0; i < stb; i++) {
            for (int j = 0; j < str; j++) {
                if (b == true) {
                    if (j != str - 1) {
                        if (a[j][i] < 0) {
                            km += 1;
                        }
                    }
                    else {
                        if ((a[j][i] >= 0) && (km == 0)) {
                            cout << "Номер первого из столбцов, не содержащий ни одного отрицательного элемента до изменения матрицы (если начинать отсчет с 1): " << i+1 << endl;
                            b = false;
                        }

                    }

                }
               

            }
            km = 0;
        }
        if (b == true) {
            cout << "Каждый столбец матрицы содержит отрицательные элементы (до изменения матрицы)" << endl;
        }

        cout << "________" << endl;




        for (int i = 0; i < str; i++) {
            for (int j = 0; j < stb; j++) {
                for (int b = j + 1; b < stb; b++) {
                    if (a[i][j] == a[i][b]) {
                        koe += 1;
                    }
                }


            }
            k[i] = koe;
            koe = 0;
        }
        
        for (int y = 0; y < str; y++) {

            for (int b = y + 1; b < str; b++) {

                if (k[y] > k[b])
                {
                    for (int j = 0; j < 3; j++) {
                        temp = a[y][j];
                        a[y][j] = a[b][j];
                        a[b][j] = temp;


                    }


                }

            }

        }
        for (int i = 0; i < str; i++) {
            for (int j = 0; j < stb; j++) {
                for (int b = j + 1; b < stb; b++) {
                    if (a[i][j] == a[i][b]) {
                        koe += 1;
                    }
                }


            }
            k[i] = koe;
            koe = 0;
        }

        for (int y = 0; y < str; y++) {

            for (int b = y + 1; b < str; b++) {

                if (k[y] > k[b])
                {
                    for (int j = 0; j < 3; j++) {
                        temp = a[y][j];
                        a[y][j] = a[b][j];
                        a[b][j] = temp;


                    }


                }

            }

        }
        b = true;
        for (int i = 0; i < stb; i++) {
            for (int j = 0; j < str; j++) {
                if (b == true) {
                    if (j != str - 1) {
                        if (a[j][i] < 0) {
                            km += 1;
                        }
                    }
                    else {
                        if ((a[j][i] >= 0) && (km == 0)) {
                            cout << "Номер первого из столбцов, не содержащий ни одного отрицательного элемента после изменения матрицы (если начинать отсчет с 1): " << i+1 << endl;;
                            b = false;
                        }

                    }

                }
                

            }
            km = 0;
        }
        if (b == true) {
            cout << "Каждый столбец матрицы содержит отрицательные элементы (после изменения матрицы)" << endl;
        }
        
        cout << "________" << endl;
        cout << "Изменённая матрица" << endl;

        for (int i = 0; i < str; i++)
        {
            for (int j = 0; j < stb; j++) {

                if (j != stb - 1) {

                    cout << a[i][j] << "  ";
                }
                else {
                    cout << a[i][j] << endl;
                }
            }

        }

}
