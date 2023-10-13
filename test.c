#include <stdio.h>
#include <string.h>

int main()
{

char username[10];
char password[10];

const char* correctusername = "sara";
const char* correctpassword = "123";

 printf("Enter username: ");
 scanf("%s", username);

 printf("Enter password: ");
 scanf("%s", password);

 if (strcmp(username,correctusername) == 0 && strcmp(password, correctpassword) == 0) {
        printf("Login successful \n");
 } else {
        printf("Incorrect username or password\n");
    }

return 0;
 
}