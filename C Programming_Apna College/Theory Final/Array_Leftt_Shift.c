#include<stdio.h>

int main()
{
    int n;
    printf("Enter Size of Array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter number : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        arr[i]=arr[i+1];
    }

    for(int i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }



    return 0;
}

