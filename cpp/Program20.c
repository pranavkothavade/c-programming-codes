
#include<stdio.h>
// Input : 1
// Output : 1

// Input : 3
// Output : 6

// Input : 5
// Output : 120

unsigned long int Factorial(int);         // Declaration

int main()
{
    int iNo = 0;
    unsigned long int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    iRet = Factorial(iNo);
    
    printf("Factortial is : %ld\n",iRet);
    
    return 0;
}
unsigned long int Factorial(int iValue)
{
    unsigned long int iFact = 1;
    int iCnt = 0;
    
    if(iValue < 0)  // Updator
    {
        iValue = -iValue;
    }
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        iFact = iFact * iCnt; //  4
    }
    return iFact;
}
