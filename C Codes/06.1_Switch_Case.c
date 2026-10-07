#include <stdio.h>

int main()
{
   char color;
   printf("Enter the 1st letter of a color: ");
   scanf("%c", &color);
   printf("\n");

   switch (color)
   {
   case 'R':
   case 'r':
      printf("The color is Red.\n");
      break;
   case 'G':
   case 'g':
      printf("The color is Green.\n");
      break;
   case 'B':
   case 'b':
      printf("The color is Blue.\n");
      break;
   default:
      printf("The color is Black.\n");
      break;
   }

   return 0;
}
