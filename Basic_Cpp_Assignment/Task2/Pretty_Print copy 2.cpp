#include <iostream>
#include <string.h>
void pprint(char *what)
{
    
    char AddSpace[100]=" ";
    char* Temp=" ";
    strcat(AddSpace,what);
    strcat(AddSpace,Temp);
    unsigned int Len=strlen(AddSpace);
    
    for (int count=0; count<Len; count++){
        if(count==0){
            printf("¨X¨T");
        }else if(count==Len-1){
            printf("¨T¨[\n");
        }else{
            printf("¨T");
        }
    }
    printf("%s%s%s","¨U",AddSpace,"¨U\n");
    for (int count=0; count<Len; count++){
        if(count==0){
            printf("¨^¨T");
        }else if(count==Len-1){
            printf("¨T¨a\n");
        }else{
            printf("¨T");
        }
    }
}

int main(){
    char s[]="Hello World";
    char *SS=s;
    pprint(SS);
    return 0;
}