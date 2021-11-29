#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float ClockAngle(int min, int sec)
{   
    
    float m_angle = min * 6 + sec/10;
    float s_angle = sec * 6;
    float total_angle = abs(m_angle - s_angle);
    if (total_angle > 180)
    {
        total_angle = 360 - total_angle;
    }

    return total_angle;
}

int main(int argc, char *argv[])
{
    int hour , min, sec;
    float Angle;

    hour = atoi(argv[1]);
    min = atoi(argv[2]);
    sec = atoi(argv[3]);
    float resultant_angle = ClockAngle(min, sec);

    printf("%.2f\n", resultant_angle);
    return 0;
}
