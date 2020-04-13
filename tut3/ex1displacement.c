#include <stdio.h>
#define ACCEL 9.8

main(void)
{
    double time = 0, max_time, interval, distance, ini;
    printf("Initial velocity: ");
    scanf("%lf",&ini);

    printf("Maximum time to run: ");
    scanf("%lf",&max_time);

    printf("Time interval: ");
    scanf("%lf",&interval);

    printf("Time Elapsed Distance Travelled\n" );
    printf("--------------------------------\n" );

    while (time <= max_time)
    {
        distance = ini*time + 0.5*ACCEL*time*time;
        printf("%8.2f %8.2f\n", time, distance);
        time = time + interval;
    }

    return 0;
}
