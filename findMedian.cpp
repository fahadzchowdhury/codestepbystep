int findMedian(int array[],int length)
{
    for (int i = 0; i < length-1; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if (array[i]>array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    return array[length/2];
}