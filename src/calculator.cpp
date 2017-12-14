#include <iostream> // подключаем ввод и вывод
#include <string> // подключаем строки
using namespace std;

// коды соответствующих действиям символов
#define ADDITION 43
#define SUBSTRACTION 45
#define MULTIPLICATION 42
#define DIVISION 47

float calculate(string str) {
    int a = str[0] - '0'; // первое число (от 0 до 9)
    int b = str[2] - '0'; // второе число (от 0 до 9)
    int operation = str[1]; // код символа операции
    float result;

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
	    result = float(a) / float(b);
            break;
	default: // если ни один из вариантов не подошёл
	    cout << "error" << endl;
	    return 1; // завершение программы с кодом 1 - означает ошибку
    }
    return result;
}
