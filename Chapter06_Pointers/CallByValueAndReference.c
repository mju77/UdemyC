#include <stdio.h>

// call by value
// float add1(float v)
// {
//    v = v + 1.0f;
//    return v;
//}

// call by reference
//void add2(float *v)
//{
//    *v = *v + 1.0f; // dereference
//}

int main()
{
    float v_main = 0.0f;
    float *p = &v_main;

    //    printf("%f\n", v_main);
    //    v_main = add1(v_main);
    //    printf("%f\n", v_main);

    //add2(&v_main);
    printf("%f\n", v_main);

    printf("Matze: Variable v_main = %f.\n", v_main);
    printf("Matze: Adresse von v_main = %p.\n", &v_main);

    printf("p value: %p\n", p);
    printf("p mem addr: %p\n", &p);
    printf("p deref: %f\n", *p);
    return 0;
}
