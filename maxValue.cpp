int maxValue(int array[], int length)
{
    int max=array[0];
    for (int i = 0; i < length; i++)
    {
        if (max<array[i])
        {
            max=array[i];
        }
    }
    return max;
}