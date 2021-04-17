#include <iostream>

namespace TaskFunction
{
    void change(int *array, int length)
    {
        for(int i=0; i<length; ++i)
        {
            std::cout<<!(array[i])<<' ';
        }
    }
}