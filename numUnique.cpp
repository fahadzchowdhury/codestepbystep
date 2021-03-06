int numUnique(int list[], int length)
{
    int count=0,lastElement=list[0];
    for (int i = 0; i < length; i++)
    {
        if (length>0 && i==0)
        {
            count=1;
        }
        if (list[i]!=lastElement)
        {
            count++;
            lastElement=list[i];
        }
        
    }
    return count;
}