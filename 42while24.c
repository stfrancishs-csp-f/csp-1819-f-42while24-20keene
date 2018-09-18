#include <stdio.h>
int main(void)
{
    int sum=0;
    int k=0;

    while (k<5)

    {
        sum+=k; //use something different in "while" version
        printf ("%d\n",k);
        k ++;
    }
    printf ("Sum - %d\n",sum);
    for (k=10; k>0; k--)
    {

        printf ("%2d\n", k);

    }
    printf("Blastoff");
}

