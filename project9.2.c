#include <stdio.h>

main()
{
    int num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 1; 
    } else
	 {
        while (num != 0) 
		{
            count++;
            num /= 10;
        }
    }

    printf("Total digits: %d\n", count);

}
