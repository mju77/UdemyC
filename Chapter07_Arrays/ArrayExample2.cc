#include <stdint.h>
#include <stdio.h>

int main()
{
    float vector1[2][3] = {0.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    float vector2[2][3] = {10.0f, 11.0f, 12.0f, 13.0f, 14.0f, 15.0f};

    for (uint32_t i = 0; i < 2; ++i)
    {
        for (uint32_t j = 0; j < 3; ++j)
        {
            printf("%f\n", vector1[i][j]);
        }
    }
    printf("\n\n");

    for (uint32_t i = 0; i < 2; ++i)
    {
        for (uint32_t j = 0; j < 3; ++j)
        {
            printf("%f\n", vector2[i][j]);
        }
    }
    printf("\n\n");

    for (uint32_t i = 0; i < 2; ++i)
    {
        for (uint32_t j = 0; j < 3; ++j)
        {
            printf("v1[%d][%d] + v2[%d][%d] = %f\n",
                   i,
                   j,
                   i,
                   j,
                   vector1[i][j] + vector2[i][j]);
        }
    }

    return 0;
}
