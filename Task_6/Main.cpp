#include <iostream>
#include "HeaderFun.hpp"


int main()
{
    //Зададим указатели на функции
    void (*ptr1)(int,int) = TaskFunction::change;
    void (*ptr2)(int,int) = TaskFunction::fun;
    bool (*ptr3)(int,int) = TaskFunction::checkBalance;
    void (*ptr4)(int,int,int) = TaskFunction::fun1;

    //Task 1
    int array[10] =  {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
    ptr1(M,10);
    //Task 2
    int array1[8];
    ptr2(array1,8);
    //Task 3
    int array2[] = {1, 1, 1, 2, 1};
    ptr3(array2,5);
    //Task 4
    int array3[] = {0,4,5,4,4,2,6,6,4,1};
    int n = -5;
    ptr4(array3,n,10);


    
    return(0);
}