#include <stdio.h>
struct Country {
    char name[30];
    char code[5];
};

struct Address {
    char street[50];
    char city[30];
    struct Country country;  
};


struct Student {
    int roll;
    char name[50];
    struct Address address;  // Direct structure, not a pointer
};

int main() {
    struct Student stu = {
        12, 
        "PRIYAL",
        {"MGM", "RAIPUR", {"India", "IN"}}  
    };

    
    printf("\n Student Details \n");
    printf("Roll Number: %d\n", stu.roll);
    printf("Name: %s\n", stu.name);
    printf("Address: %s (%s)\n", stu.address.street, stu.address.city);
    printf("Country: %s (%s)\n", stu.address.country.name, stu.address.country.code);

    return 0;
}
