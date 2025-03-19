#include <stdio.h>

struct SSIPMT
{
    struct wrestling
    {
        struct participant
        {
                int age;
                char name[50];
                char clgname[100];
                float weight;
        } p; 
    } w;
};

int main()
{
    struct SSIPMT clg[10] = {
        { { {20, "aks", "xyz", 50.0} } },
        { { {20, "pulkita", "abc", 45.0} } },
        { { {20, "krishna", "jscn", 50.0} } },
        { { {20, "alisha", "hbe", 50.0} } },
        { { {20, "preet", "hcm", 70.0} } },
        { { {20, "shreyansh", "hehyb", 70.0} } },
        { { {20, "akshat", "mat", 70.0} } },
        { { {20, "pranjal", "nit", 60.0} }},
        { { {20, "yuvaan", "rkc", 50.0} } },
        { { {20, "nehaa", "abc", 60.0} } }
    };

    struct SSIPMT *agresita = clg;

    printf("SSIPMt \n");
    printf("agresita \n");
    for (int i = 0; i < 10; i++)
    {
        printf("College name: %s\n", agresita[i].w.p.clgname);
        printf("Name: %s\n", agresita[i].w.p.name);
        printf("Age: %d\n", agresita[i].w.p.age);
        printf("Weight: %.2f\n\n", agresita[i].w.p.weight);
    }
    return 0;
}
