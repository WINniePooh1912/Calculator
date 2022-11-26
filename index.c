#include <stdio.h>

int subtraction (int num1, int num2);
int multiplication (int num1, int num2);
int division (int num1, int num2);
int addition (int num1, int num2);

int main()
{
   int choice, value1, value2;
   do
   {
      printf("Welcome to our Calculator in C\n");
      printf("1. Addition\n");
      printf("2. Subtraction\n");
      printf("3. Multiplication\n");
      printf("4. Division\n");
      printf("0. Exit\n");
      printf("Enter your choice: ");
      scanf("%i", &choice);
      printf("Please enter the first value: ");
      scanf("%i", &value1);
      printf("Please enter the second value: ");
      scanf("%i", &value2);
      switch(choice)
      {
         case 1:
            printf("Addition\n");
            printf("The addition of %i and %i is: %i", value1, value2, addition(value1, value2));
            break;
         case 2:
            printf("Subtraction\n");
            printf("The subtraction of %i and %i is: %i", value1, value2, subtraction(value1, value2));
            break;
         case 3:
            printf("Multiplication\n");
            printf("The number %i times %i is: %i", value1, value2, multiplication(value1, value2));
            break;
         case 4:
            printf("Division\n");
            printf("The number %i divided by %i is: %i", value1, value2, division(value1, value2));
            break;
         case 0:
            printf("Thank you for using our calculator\n");
            break;
         default:
            printf("Invalid choice");
      }
      printf("\n\n");
   } while (choice != 0);
   return 0;
}

int addition (int num1, int num2){
   return num1 + num2;
}

int subtraction (int num1, int num2){
    return num1 - num2;
}

int multiplication (int num1, int num2){
    return num1 * num2;
}

int division (int num1, int num2){
    return num1 / num2;
}