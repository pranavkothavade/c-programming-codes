#include <stdio.h>

void Display(char *Brr)
{
        while(*Brr != '\0')
        {
            printf("%c\n",*Brr);
            Brr++;
        }
}

int main()
{
    char Arr[10];
    
    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);     // 50
    
    Display(Arr);   // Display(50);     Name of array is internally considered as its base address
    
    return 0;
}
