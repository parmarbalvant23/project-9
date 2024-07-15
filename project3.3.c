#include <stdio.h>

main()
{
    int num, first_digit, last_digit, sum;

    
    printf("Enter a number: ");
    scanf("%lld", &num);

    last_digit = num % 10;
    while (num >= 10)
	{
        num /= 10;
    }
    first_digit = num;

    sum = first_digit + last_digit;

    printf("Sum of first and last digits: %lld\n", sum);

}
