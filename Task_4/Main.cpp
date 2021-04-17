#include <iostream>
#include <math.h>

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
        else if((i-n)>length-1)
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

int main() {
    int m[] = {0,4,5,4,4,2,6,6,4,1};
    fun(m,-5,10);

    return(0);
}
// Написать функцию, которой на вход подаётся
// одномерный массив и число n (может быть 
// положительным, или отрицательным), при этом 
// функция должна циклически сместить все элементы
// массива на n позиций
