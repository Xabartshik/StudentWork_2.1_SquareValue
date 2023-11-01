#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cassert>
#include "add.h"
//Ошлаков Данил, ИВТ-22

// float sector_square(float rad, float radian) {
//     float result = radian / 2 * rad * rad;
//     return (result);
// }

int main(int argc, char* argv[]) {
    using namespace std;
    const float sin = 10e-2; 
    float plo; // Площадь сектора
    float rad; // Радиус
    float radian; // Число радиан

    assert(abs(sector_square(20, 13.7) - 2740) < sin);
    assert(abs(sector_square(10, 10) - 500) < sin);
    if ((argv[1] == "help"))
    {
           cout << "[Radians] [Radius] " << endl; //Вывод справки
           return 0;
    }
    if (argc == 1)
    {
        cout << "Input radians and radius values" << endl;
        cin >> radian;
        cin >> rad;
    } 
    if (argc == 2)
    {
    radian = stof(argv[1]);
    rad = stof(argv[2]);
    }
    plo = sector_square(rad, radian);
    cout << "Output square: " << plo << endl; // Вывод размера площади
  
    return 0;
}