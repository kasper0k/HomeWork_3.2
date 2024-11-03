/* Тема: Классы и объекты.Задача 1, Калькулятор
В этом задании вам нужно будет создать класс, выполняющий простые арифметические операции для двух чисел, и продемонстрировать его работу
Создайте класс Calculator. Класс должен содержать два поля num1 и num2 для хранения дробных чисел. 
Также класс должен содержать следующие методы:

double add() - метод должен возвращать результат сложения num1 и num2
double multiply() - метод должен возвращать результат перемножения num1 и num2
double subtract_1_2() - метод должен возвращать результат вычитания num2 из num1
double subtract_2_1() - метод должен возвращать результат вычитания num1 из num2
double divide_1_2() - метод должен возвращать результат деления num1 на num2
double divide_2_1() - метод должен возвращать результат деления num2 на num1
bool set_num1(double num1) - метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
bool set_num2(double num2) - метод должен установить значение поля num2 равное значению аргумента num2 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
Напишите код, демонстрирующий работу класса Calculator. Попросите пользователя ввести два числа. 
После этого выведите пользователю результаты всех операций или попросите его ввести значение ещё раз, если предыдущий ввод был некорректен

Программа спрашивает пользователя бесконечно, пока он сам не закроет консоль*/

#include <iostream>
#include <string>

class Calculator
{
private:
    double num1;
    double num2;

public:
    double get_num1() { return num1; }
    double get_num2() { return num2; }
    
    Calculator() { num1 = 0; num2 = 0; }

//Методы
    double add()//сложение
    {
        return num1 + num2;
    };
    double multiply()//умножение
    {
        return num1 * num2;
    };
    double subtract_1_2()//вычитание из первого
    {
        return num1 - num2;
    };
    double subtract_2_1()//вычитание из второго
    {
        return num2 - num1;
    };
    double divide_1_2()//деление первого на второе
    {
        return num1 / num2;
    };
    double divide_2_1()//деление второго на первое
    {
        return num2 / num1;
    };
    bool set_num1(double val1)//
    {
        if (val1 == 0)
        {
            return false;
        }
        else
        {
            num1 = val1;
            return true;
        }
    };
    bool set_num2(double val2)//
    {
        if (val2 == 0)
        {
            return false;
        }
        else
        {
            num2 = val2;
            return true;
        }
    };
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Calculator Seasson;
    double user_num1=0, user_num2=0;

    while (true)
    {
        std::cout << "Введите первое число (num1): ";
        std::cin >> user_num1;
        std::cout << "Введите второе число (num2): ";
        std::cin >> user_num2;

        if (Seasson.set_num1(user_num1) == false or Seasson.set_num2(user_num2) == false)
        {
            std::cout << "Неверный ввод чисел" << std::endl;
        }
        else
        {
            std::cout << "num1 + num2 = " << Seasson.add() << std::endl;
            std::cout << "num1 * num2 = " << Seasson.multiply() << std::endl;
            std::cout << "num1 - num2 = " << Seasson.subtract_1_2() << std::endl;
            std::cout << "num2 - num1 = " << Seasson.subtract_2_1() << std::endl;
            std::cout << "num1 / num2 = " << Seasson.divide_1_2() << std::endl;
            std::cout << "num2 / num1 = " << Seasson.divide_2_1() << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}