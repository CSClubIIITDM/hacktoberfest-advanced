#include<stdio.h>
#include<string.h>

void long_palin_substring(char* str){
    int len = strlen(str);

    int maxlen = 1, start = 0;
    int low,high;
    for(int i=0;i<len;i++){
        low = i-1;
        high = i+1;
        while(high<len && str[high]==str[i])
           high++;
        while(low>=0 && str[low]==str[i])
           low--;
        while(low>=0 && high<len && str[low]==str[high]){
            low--;
            high++;
        }
        int n = high-low-1;
        if(maxlen < n){
            maxlen = n;
            start = low+1;
        }
    }

    for(int i=start;i<=maxlen-1;i++){
    printf("%c",str[i]);
    }  
}
int main(){
    char str[1000];
    printf("Enter string:\n");
    scanf("%[^\n]s",str);
    long_palin_substring(str);
    printf("\n");

    return 0;
}