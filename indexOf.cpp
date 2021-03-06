int indexOf(int list[],int size,int target)
{
    int index=-1;
    for (int i = 0; i < size; i++)
    {
        if (list[i]==target)
        {
            index=i;
            break;
        }
    }
    return index;
}