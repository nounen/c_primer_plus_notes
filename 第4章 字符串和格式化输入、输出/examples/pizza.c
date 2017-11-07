#include <stdio.h>
#define PI 3.14159

int main(void)
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");

    scanf("%f", &radius); // 输入半径

    area = PI * radius * radius; // 面积

    circum = 2.0 * PI * radius; // 周长

    printf("Your basic paiize parameters are as follows:\n");

    printf("circumference = %1.2f, area = %1.2f\n", circum, area);

    return 0;
}
