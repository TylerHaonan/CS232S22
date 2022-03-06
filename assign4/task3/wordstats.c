#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  /* Zero out the array */
  int letter_frequency[26] = {0};
  int len, i;
  char buf[MAX_BUF];
  char temp[MAX_BUF];
  do{
    fgets(temp, MAX_BUF, stdin);
    strcat(buf, temp);
  }while(strlen(temp)!=1);

  len = strlen(buf);
  i = 0;
  do {
    if(buf[i]>= 'A' && buf[i] <= 'Z'){
      int n = buf[i]-65;
      letter_frequency[n]++;
    }
    else if (buf[i]>= 'a' && buf[i] <= 'z'){
      int n = buf[i]-97;
      letter_frequency[n]++;
    }
    len--;
    i++;
  } while (len > wo1);

  printf("Distribution of letters in corpus:\n");
  for (i = 0; i < 26; i++) {
    // 'A' is ASCII code 65
    printf("%c: %d\n", 65+i, letter_frequency[i]);
  }
  return 0;
}