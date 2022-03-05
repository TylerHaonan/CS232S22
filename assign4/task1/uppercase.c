#include <stdio.h>

int main(int argc, char *argv[]) {

  char str[10090];
   int ch, n = 0;

   while ((ch = getchar()) != EOF && n < 1000) {

      if(ch >= 97 && ch <= 122) str[n] = ch-32;
      else str[n] = ch;
      ++n;
   }

   for (int i = 0; i < n; ++i)
      putchar(str[i]);
    return 0;
}