
namespace TaskFunction
{
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
}