#include <stdio.h>
#include <stdlib.h>
/**
 * main - computes the clock in digital form
 * Return: void
*/
int main()
{
        int hours, minutes, seconds;
        int delay = 1;
        printf("Set Time(12hr) then press Enter\n");
        scanf("%d %d %d", &hours, &minutes, &seconds);

        while (1)
        {
                seconds++;

                if (seconds > 59)
                {
                        minutes++;
                        seconds = 0;
                }

                if (minutes > 59)
                {
                        hours++;
                        minutes = 0;
                }

                if (hours > 12)
                {
                        hours = 1;
                }

                printf("\n %02d:%02d:%02d", hours, minutes, seconds);
                sleep(delay);
                system("clear");

        }
        

        return (0);
}
