float computeAverage(int array[], int length)
{
    int sum=0;
    for (int i = 0; i < length; i++)
    {
        sum+=array[i];
    }
    return sum/(length*1.0);
}