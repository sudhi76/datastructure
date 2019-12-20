//counting vowels and consonents
#include<stdio.h>
int main()
{
    char A[] = "I Am Sudhi Gupta";
    int j,vcount=0,ccount=0;
    for (j=0;A[j]!=0;j++)
    {
        if(A[j]=='a'||A[j]=='e'||A[j]=='i'||A[j]=='o'||A[j]=='u'||A[j]=='A'||A[j]=='E'||A[j]=='I'||A[j]=='O'||A[j]=='U')
        {
            vcount++;
        }
        else if(A[j]>=65 && A[j]<=90 || A[j]>=97 ||A[j]<=122)
        {
            ccount++;
        }
    }
    printf("%d %d",vcount,ccount);
}
