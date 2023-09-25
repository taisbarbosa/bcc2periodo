#include <stdio.h>
#include <string.h>

#define MAX_STR 50

struct phone
{
    char ddd[4];
    char number[10];
};

struct contact
{
   long id;
   char name[MAX_STR];
   char email[MAX_STR];
   struct phone phone1;
   struct phone phone2;
};

int main(){
    struct contact c1 = {1, "John Doe", "john@gmail.com", {"044", "99876543"}, {"011", "78397888"}};
    printf("\nid____________: %ld\n", c1.id);
    printf("name__________: %s\n", c1.name);
    printf("email_________: %s\n", c1.email);
    printf("first_phone___: %s %s\n", c1.phone1.ddd, c1.phone1.number);
    printf("second_phone__: %s %s\n", c1.phone2.ddd, c1.phone2.number);
    printf("\n");
    
    return 0;
    
}