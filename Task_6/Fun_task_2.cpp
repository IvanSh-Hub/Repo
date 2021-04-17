#include <iostream>

namespace TaskFunction
{
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
}