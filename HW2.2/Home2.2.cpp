/* Тема: Классы и объекты.Задача 2, Счетчик
В этом задании вам нужно будет создать класс-счётчик
Создайте класс Counter. Класс должен выполнять функцию счётчика, для этого он должен предоставлять:
    возможность увеличить своё значение на 1
    возможность уменьшить своё значение на 1
    возможность посмотреть своё текущее значение
    возможность создания экземпляра класса с начальным значением по умолчанию (1)
    возможность создания экземпляра класса с инициализирующим начальным значением
Обратите внимание на то, что у внешнего кода не должно быть возможности изменить внутреннее значение счётчика напрямую
Напишите код, демонстрирующий работу класса Counter. Спросите у пользователя, хочет ли он указать начальное значение для счётчика.
Если хочет, дайте ему возможность это сделать. Затем предоставьте пользователю возможность вводить команды:
    +: увеличьте счётчик на 1
    -: уменьшите счётчик на 1
    =: выведите текущее значение счётчика
    x: завершите работу программы */

#include <iostream>
#include <string>

class Counter
{
private:
    int num;

public:
    int get_num() { return num; }
    void set_num(int val) { num = val; }
    
    Counter() { num = 1; };
    Counter(int val=1) { num = val; };

//Методы
    void increase()
    {
        num = num + 1;
    };

    void decrease()
    {
        num = num - 1;
    };
    void result()
    {
        std::cout << num << std::endl;
    };

    bool closeWork()
    {
        return false;
    };
};

int main()
{
    setlocale(LC_ALL, "Russian");
 
    std::string choice_start, command;
    int val=1;
    bool status_work = true;

    std::cout << "Счетчик активирован." << std::endl << "Доступные команды: '+'  увеличение на 1, '-' уменьшение на 1, '=' печать текущего значения, '*' завершение работы" << std::endl;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите 'yes' или 'not': ";
    std::cin >> choice_start;

    if (choice_start == "yes")
    {
        std::cout << "Введите начальное значение : ";
        std::cin >> val;  
    }
    else if (choice_start == "not")
    {
        std::cout << "Работа счетчика начнется с 1 " << std::endl;

    }
    else
    {
        std::cout << "Команда не распознана. Работа завершена " << std::endl;
        status_work = false;
    }    
   
    Counter userCounter(val);

    while (status_work == true)
    {
        std::cout << "Введите команду('+', '-', '=' или '*') : ";
        std::cin >> command;
        if (command == "+") { userCounter.increase();}
        else if (command == "-") { userCounter.decrease(); }
        else if (command == "=") { userCounter.result(); }
        else if (command == "*") { status_work = userCounter.closeWork(); }
        else { std::cout << "Команда не распознана" << std::endl; }
    }

    return 0;
}