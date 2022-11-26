#include <stdio.h>

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
            break;
         case 2:
            printf("Subtraction\n");
            break;
         case 3:
            printf("Multiplication\n");
            break;
         case 4:
            printf("Division\n");
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