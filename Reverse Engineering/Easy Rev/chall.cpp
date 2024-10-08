#include <stdio.h>
#include <string.h>

int main(){
    char flag[40] = "nwheQpM26GYMJ6tV95T2TVv";
    char input[39];
    printf("Enter the password: ");
    
    fgets(input, 20, stdin);
    //get(input);

    if (strcmp(flag, input) == 0)
        printf("Great work, you got the flag!");
    else
        printf("Nope, that is not the correct password");

    return 0;
}