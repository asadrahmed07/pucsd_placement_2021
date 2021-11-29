#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float ClockAngle(int hour, int minute)
{
    if (hour > 12)
    {
        hour = hour % 12;
    }
    float h_angle = (float)hour * 30 + (float)minute * 30 / 60;
    float m_angle = minute * 6;

    float total_angle = abs(h_angle - m_angle);
    if (total_angle > 180)
    {
        total_angle = 360 - total_angle;
    }

    return total_angle;
}

int main(int argc, char *argv[])
{
    int hour, min, sec;
    float Angle;

    hour = atoi(argv[1]);
    min = atoi(argv[2]);
    float resultant_angle = ClockAngle(hour, min);

    printf("%.2f\n", resultant_angle);
    return 0;
}
