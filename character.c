#include <stdio.h>

int main() {
    char ch;
    char s[100], sen[100];
    
    
    scanf("%c", &ch);
    
    
    getchar();
    

    scanf("%s", s);
    getchar(); 
    fgets(sen, sizeof(sen), stdin);
    
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    
    return 0;
}
