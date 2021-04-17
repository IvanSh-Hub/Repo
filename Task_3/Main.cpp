#include <iostream>

bool checkBalance(int *array, int length)
{
    int s = 0;
    for(int i = 0; i < length; i++)
    {
        int sum_left=0;
        int sum_right=0;
        for(int l = 0; l < i; l++) 
            sum_left+= array[l];
        for(int r = i; r < length; r++) 
            sum_right += array[r];
        s+=(sum_left==sum_right); 
    }
    if(s==1) 
       return(true);
    else 
       return(false);
}

int main() {
    std::cout.setf(std::ios_base::boolalpha);
    int m[] = {10, 1, 2, 3, 4};
    std::cout<<checkBalance(m, 5);

    return(0);
}
// Написать функцию, в которую передается не пустой одномерный
// целочисленный массив, функция должна вернуть истину если в
// массиве есть место, в котором сумма левой и правой части 
// массива равны. Примеры: checkBalance([1, 1, 1, || 2, 1]) → true,
// checkBalance ([2, 1, 1, 2, 1]) → false, 
// checkBalance ([10, || 1, 2, 3, 4]) → true. 
// Абстрактная граница показана символами ||, эти символы в массив 
// не входят.