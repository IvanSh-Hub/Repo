#include <iostream>

void change(int *array, int length)
{
    for(int i=0; i<length; ++i)
    {
        std::cout<<!(array[i])<<' ';
    }
}

int main() { 
    int M[10] =  {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
    change(M,10);
    
    return(0);
}

//Задать целочисленный массив, состоящий из элементов 0 и 1.
//Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ]. 
// Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0 
// (** без применения if-else, switch, () ? :);