//counting number of words in the string
#include<stdio.h>
int main()
{
    char A[] = "I sudhi";
    int i,wcount=1;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==' ' && A[i-1]!=' ')

            wcount++;

    }
    printf("%d",wcount);
}
