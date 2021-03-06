int findRange(int array[], int length)
{
    int max=array[0],min=array[0];\
    for (int i = 0; i < length; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        if (array[i]<min)
        {
            min=array[i];
        }
    }
    if (max==min)
    {
        return 1;
    }
    return max-min+1;
}