#include <stdio.h>
#include <string.h>

int main() {
   char string1[100], string2[100];
   int i;

   printf("Masukkan string pertama: ");
   gets(string1);

   printf("Masukkan string kedua: ");
   gets(string2);

   i = strcmp(string1, string2);

   if(i == 0) {
      printf("Kedua string sama.\n");
   }
   else {
      printf("Kedua string berbeda. Perbedaan pada indeks %d.\n", i);
   }

   return 0;
}
