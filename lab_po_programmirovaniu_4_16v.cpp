#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>

//Функция переводит сроку в нижний регистр
std::string StringToLower(std::string str)
{
	std::string newStr;
	for (int i = 0; i < str.size(); ++i)
		newStr += std::tolower(str[i]);
	return newStr;
}
//Функция сравнивает названия двух знаков без учёта регистра
bool CompareSignNames(std::string firstSign, std::string secondSign)
{
	if (firstSign.size() == secondSign.size()) {
		firstSign = StringToLower(firstSign);
		secondSign = StringToLower(secondSign);
		return firstSign == secondSign;
	}
	return false;
}

//Структура
struct ZNAK
{
	std::string name, surname;
	std::string sign;
	int birthDay[3];
	//Метод считывающий информацию в структуру
	void Enter()
	{
		std::cout << "Имя: ";
		std::cin >> name;
		std::cout << "Фамилия: ";
		std::cin >> surname;

		std::cout << "Знак: ";
		std::cin >> sign;

		std::cout << "День: ";
		std::cin >> birthDay[0];
		std::cout << "Месяц: ";
		std::cin >> birthDay[1];
		std::cout << "Год: ";
		std::cin >> birthDay[2];
	}
	//Метод выводящий иформацию о структуре на экран
	void Print()
	{
		std::cout << surname << " " << name << std::endl;
		std::cout << "Знак - " << sign << std::endl;
		std::cout << birthDay[0] << "." << birthDay[1] << "." << birthDay[2] << std::endl;
	}
	//Метод копирует содержимое z в объект
	void Set(const ZNAK& z)
	{
		name = z.name; surname = z.surname; sign = z.sign;
		birthDay[0] = z.birthDay[0]; birthDay[1] = z.birthDay[1]; birthDay[2] = z.birthDay[2];
	}
	//Возаращет 1 если дата больше
	//Возвращает -1 если дата меньше
	//Возвращает 0 если даты равны
	int Compare(const ZNAK& z)
	{
		for (int i = 2; i >= 0; --i)
		{
			if (birthDay[i] > z.birthDay[i])
				return 1;
			else if (birthDay[i] < z.birthDay[i])
				return -1;
		}
		return 0;
	}
};
//Функция показывает массив структур 
void ShowList(ZNAK* arr, const int size)
{
	for (int i = 0; i < size; ++i) {
		arr[i].Print();
		std::cout << std::endl;
	}
}
//Функция соритурет массив структур
void SortList(ZNAK* arr, const int size)
{
	for (int i = 0; i < size; ++i)
		for (int j = i + 1; j < size; ++j)
		{
			if (arr[i].Compare(arr[j]) == 1) {
				ZNAK z;
				z.Set(arr[i]);
				arr[i].Set(arr[j]);
				arr[j].Set(z);
			}
		}
}

int main(int argc, char** argv)
{
	//Устанавливаем русский язык
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RUS");
	//Задаём размер массива
	const int size = 8;
	ZNAK* arr = new ZNAK[size];
	//Заполняем массив
	for (int i = 0; i < size; ++i)
		arr[i].Enter();
	//Выводим отсортированный масив на экран
	std::cout << std::endl << std::endl << "Список:" << std::endl;
	SortList(arr, size);
	ShowList(arr, size);
	//Ищем людей с заданым знаком
	std::string signName;
	std::cout << std::endl << std::endl << "Введите знак, который нужно найти: ";
	std::cin >> signName;
	//Считаем сколько людей было найдено
	int count = 0;
	std::cout << std::endl << std::endl << "Люди под данным знаком:" << std::endl;
	for (int i = 0; i < size; ++i)
		if (CompareSignNames(arr[i].sign, signName)) {
			arr[i].Print();
			std::cout << std::endl;
			count++;
		}
	//Если людей не было найдено, то сообщаем об этом
	if (count == 0)
		std::cout << "Таких людей нет!" << std::endl;

	delete[] arr;

	system("pause");

	return 0;
}