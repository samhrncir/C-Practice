#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Hello World */
    printf("Hello world\n");

    /* Drawing a shape */
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");

    /* Variables */
    char characterName[] = "John";
    int characterAge = 35;
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);
    characterAge = 36;
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d.\n", characterAge);

        /* Basic Data Types */
    int age = 40;
    double gpa = 3.6;
    char grade = 'A';

    char phrase[] = "Giraffe Academy";

    /* Printf */
    int favNum = 90;
    printf("My favorite %s is %d or %f\n" , "number", favNum, 3.94);

    /* Working with Numbers */
    int num = 6;
    printf("%d\n", num);
    printf("%f\n", 5.0 + 4.5);
    printf("%d\n", 5/4);

    printf("%f\n", pow(2, 3));
    printf("%f\n", sqrt(36));
    printf("%f\n", ceil(36.2344324));
    printf("%f\n", floor(36.2344324));

    /* Comments */
    /* This prints out text */
    printf("Comments are fun\n");

    /* Constants */
    const int NUM = 5;
    printf("%d\n", NUM);

    /* Getting User Input */
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);

    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your GPA is %f\n", gpa);

    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);

    return 0;
}
