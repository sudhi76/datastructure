#include<stdio.h>
void swap(int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}
void insertion(int A[],int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x = A[i];
        while (j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }

}
int main()
{
    int A[] = {1,4,5,7,2,34,90,35,78,6}, i, n=10;
    for(i=0;i<10;i++)
        printf("%d",A[i]);
    printf("\n");
    return 0;
}
