#include <stdio.h> 
int main()
{

    int a,b ,c = 0 ; 

    printf("Enter the Three numbers : "); 
    scanf("%d%d ",&a,& b);

    c = a & b;
    printf("The logical AND of %d and %d is %d\n",a,b,c);

    c = a | b;
    printf("The logical OR of %d and %d is %d\n",a,b,c );

    c = a ^ b;
    printf("The logical XOR of %d and %d is %d\n",a,b,c );

    c = ~a;
    printf("Complement of given number is %d \n", c );

    c = a << 2;
    printf("Left shift	%d \n", c );

    c = a >> 2 ;
    printf("Right shift %d \n", c );
}