#include <iostream>

void fun(int *array, int length)
{
    int step = 3;
    array[0] = 1;
    for(int i=1;i<length;i++)
    {
        array[i]=array[i-1]+step;
        std::cout<<array[i]<<" ";
    }
}

int main() {
    int array[8];
    fun(array, 8);

    return(0);
}

//Задать пустой целочисленный массив размером 8. 
//Написать функцию, которая с помощью цикла 
//заполнит его значениями 1 4 7 10 13 16 19 22;