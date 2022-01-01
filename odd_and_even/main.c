#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
    int num=0 ,odd=0 ,even=0;
    printf("\nEnter the number : ");
        scanf("%d", &num);
        if((num & 1)==0){
            even++;
            printf("The number is odd = %d \n",odd);
            printf("The number is even = %d \n",even);
        }
        else{
            odd++;
            printf("The number is odd = %d \n",odd);
            printf("The number is even = %d \n",even);
        }
    }
    return 0;
}
