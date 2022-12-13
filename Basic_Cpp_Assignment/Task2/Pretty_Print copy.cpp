#include <iostream>
#include <string.h>
void pprint(const char *what)
{

    unsigned int Len=strlen(what);
    for (int count=0; count<Len+2; count++){
        if(count==0){
            printf("¨X¨T");
        }else if(count==Len+1){
            printf("¨T¨[\n");
        }else{
            printf("¨T");
        }
    }
    printf("%s%s%s","¨U ",what," ¨U\n");
    for (int count=0; count<Len+2; count++){
        if(count==0){
            printf("¨^¨T");
        }else if(count==Len+1){
            printf("¨T¨a\n");
        }else{
            printf("¨T");
        }
    }
}

int main(){
    const char *s="Hello World GOGOGOGGOGO";
    pprint(s);
    return 0;
}