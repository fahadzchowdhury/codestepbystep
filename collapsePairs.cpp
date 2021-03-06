void collapsePairs(int array[], int length)
{
    for (int i = 1; i < length; i+=2)
    {
        int sum=0;
        sum=array[i]+array[i-1];
        if (sum%2==0)
        {
            array[i-1]=sum;
            array[i]=0;
        }
        else
        {
            array[i-1]=0;
            array[i]=sum;
        }
    }
}