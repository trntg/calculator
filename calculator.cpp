#include <iostream> // подключаем ввод и вывод
#include <string> // подключаем строки
using namespace std;

// коды соответствующих действиям символов
#define ADDITION 43
#define SUBSTRACTION 45
#define MULTIPLICATION 42
#define DIVISION 47

int main() {
    
    string str; // создаём строку
    cin >> str; // вводим строку
    int result; // создаём переменную результата

    while (str != "end") { // пока строка не равна "end"
        int a = str[0] - '0'; // первое число (от 0 до 9) 
        int b = str[2] - '0'; // второе число (от 0 до 9)
        int operation = str[1]; // код символа операции
    
        switch(operation) { // проверяем, чему равен код операции
            case ADDITION: // если равно коду сложения, то...
                result = a + b;
                break; // чтобы не перейти на следующий case (так просто надо)
            case SUBSTRACTION:
                result = a - b;
                break;
            case MULTIPLICATION:
                result = a * b;
                break;
            case DIVISION:
                result = a / b;
                break;
            default: // если ни один из вариантов не подошёл
                cout << "error" << endl;
                return 1; // завершение программы с кодом 1 - означает ошибку
        }

        cout << result << endl;
        cin >> str; // вводим ещё раз
    }

    return 0;
}
