#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cassert>
#include "add.h"
//Ошлаков Данил, ИВТ-22
/*float sector_square(float rad, float radian) {
    float result = radian / 2 * rad * rad;
    return (result);
}*/

int main() {
    using namespace std;
    const float sin = 10e-2; 
    float plo; // Площадь сектора
    float rad; // Радиус
    float radian; // Число радиан
    char any; 

{
    assert(abs(sector_square(20, 13.7) - 2740) < sin);
}

{
    assert(abs(sector_square(10, 10) - 500) < sin);
}


{
    assert(abs(sector_square(1, 1) - 0.5) < sin);
}


    cout << "Input radian: " << endl; // Ввод радиан
    cin >> radian;
    cout << "Input radius " << endl;//Ввод радиуса
    cin >> rad;
    plo = sector_square(rad, radian);
    cout << "Output square: " << plo << endl; // Вывод размера площади
    cin >> any;
    return 0;
}