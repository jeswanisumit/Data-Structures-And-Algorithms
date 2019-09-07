#include <stdio.h> // Header Files
#include <stdlib.h> // Header Files

void Fizz_buzz(int data)
{
    if ((data % 3 == 0) && (data % 5 == 0)) // Checking Weather the data is Divisible by both 3 and 5 if  yes then display Fizz Buzz
        {
            printf("Fizz buzz\t");
        }
        else if (data % 3 == 0) // Checking Weather the data is Divisible by 3 if  yes then display Fizz
        {
            printf("Fizz\t");
        }
        else if (data % 5 == 0) // Checking Weather the data is Divisible by 5 if  yes then display Buzz
        {
            printf("buzz\t");
        }
        else // If data is Not divisible by both 3 and 5 print it as it is
        {
            printf("%d\t",data);
        }
}

int main()
{
    int array[50]; // declering an Arry of Size 50

    for (int i=0;i<50;i++)
    {
        array[i]=i+1;
        Fizz_buzz(array[i]);
        if ((i+1)%10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");

    
}