#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024


int main()
{
    /* Zero out the array */
    int letter_frequency[26] = {0};
    
    int len,i,flag = 0;
    char buf[MAX_BUF];
    
    do {
        
       
        if (scanf("%[^\n]s", buf) == 1) len = strlen(buf); 
        else len = 0; 
        
       
        for (int j = 0; j < len; ++j){
            
        if (buf[j] >= 'A' && buf[j] <= 'Z') letter_frequency[buf[j] - 'A']++;
            else if (buf[j] >= 'a' && buf[j] <= 'z') letter_frequency[buf[j] - 'a']++;
}
        getchar();
        
    } while(len > 0);
    
    printf("Distribution of letters in corpus:\n");
    
    for(i = 0; i<26; ++i){
        // ASCII code of 'A' is 65.
        printf("%c : %d\n", (65 + i), letter_frequency[i]);
    }
    
    return 0;
}