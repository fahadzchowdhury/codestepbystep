bool contains(int a1[], int len1, int a2[], int len2)
{
    int jtemp=0,count=0;
    for (int i = 0; i < len2; i++)
    {
        for (int j = jtemp; j < len1; j++)
        {
            if(a1[j]==a2[i-1])
            {
                return false;
            }
            if (a1[j]==a2[i])
            {
                count++;
                jtemp=j+1;
                break;
            }
        }
    }
    if (count==len2)
    {
        return true;
    }
    
    return false;
}