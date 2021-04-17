#include <iostream>

bool fun(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=i;
    }
    if(sum==11) return(true);    
    else return(false);
}

int main() { 
    std::cout<<fun(5);


    return(0);
}

//Задать целочисленный массив, состоящий из элементов 0 и 1.
//Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ]. 
// Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0 
// (** без применения if-else, switch, () ? :);
