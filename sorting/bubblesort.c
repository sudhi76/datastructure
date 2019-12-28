#include<stdio.h>
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
void bubble(int A[],int n)
{
    int i, j, flag;
    for(i=0;i<n-1;i++)
    {
        flag = 0;
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
int main()
{
    int A[] = {83,4,5,2,6,17,20,6,8,54}, n=10,i;
    bubble(A,n);
    for(i=0;i<10;i++)
        printf("%d",A[i]);
    printf("\n");
    return 0;
}
