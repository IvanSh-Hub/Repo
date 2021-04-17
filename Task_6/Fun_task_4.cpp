#include <iostream>
#include <math.h>

namespace TaskFunction
{
    void fun(int *array, int n, int length)
    {
        // -------Создадим массив-дублёр, с которого будем брать данные
        int mas[length];
        for(int m = 0; m < length; m++)
        {
            mas[m] = array[m];
        }
        
        for(int i = 0; i < length; i++)
        {
            if((i-n)<0) // если выходим за диапазон
            {
                array[i] = mas[length+i-n];
                std::cout<<array[i];
            }
            else if((i-n)>length-1) // если выходим за диапазон
            {
                array[i] = mas[abs(length-i+n)];
                std::cout<<array[i];           
            }
            else
            {
                array[i] = mas[i-n];
                std::cout<<array[i];
            }
        }
    }
}
