int countDuplicates(int array[], int length)
{
    if (length==0 || length==1)
    {
        return 0;
    }
    int count=0;
    for (int i = 0; i < length-1; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if (array[i]==array[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}