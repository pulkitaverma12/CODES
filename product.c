#include<stdio.h>
#include<stdlib.h>
struct product
{
    int id;
    char name[50];
    float price;
};
int main()
{
    struct product *product;
    struct product *products=(struct product*)malloc(3*sizeof(struct product));
    if(product == NULL)
    {
        printf("memory allocation is failed");
        return 1;
    }
    printf("Enter the details of 3 products:\n");
    for(int i=0;i<3;i++)
    {
        printf("id %d: ",i+1);
        scanf("%d",&products[i].id);
        printf("name %d: ",i+1);
        scanf("%s",products[i].name);
        printf("price %d: ",i+1);
        scanf("%f",&products[i].price);
    }
    printf("\nProduct Details:\n");
    for(int i=0;i<3;i++)
    {
        printf("Product %d:\n",i+1);
        printf("ID: %d\n",products[i].id);
        printf("Name: %s\n",products[i].name);
        printf("Price: %.2f\n",products[i].price);
    }
    free(product);
    return 0;
}
