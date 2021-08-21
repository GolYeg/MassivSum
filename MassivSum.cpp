
#include <TXLIb.h>
#include <stdio.h>

int main()
{
   int index;
   int first[8],second[8];

   printf("Введите элементы первого массива:\n");
   for(index=0;index<8;index++)
   scanf("%d",&first[index]);

      for(index=0;index<8;index++)
      printf("%d  ",first[index]);
   printf("\n");
   printf("%d  ",first[0]);
         for(index=1,second[0]=first[0];index<8;index++)
         printf("%d  \n",second[index-1]+first[index]);
   printf("Программа завершена.\n");
   return 0;
}
