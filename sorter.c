#include<stdio.h>

int main()
{
    int n;
    printf("Enter how many elements in the array:- ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[j-1] > arr[j])
            {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}
