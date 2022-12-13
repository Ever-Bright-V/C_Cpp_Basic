#include <iostream>
#include <string.h>


void pprint(char *what)
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


void pprint_abbr(char *what,unsigned int abbr_num)
{
    if(strlen(what)>abbr_num){
        char abbr_str[abbr_num+3];
        char dots[]="...";
        strncpy(abbr_str,what,abbr_num);
        strcat(abbr_str,dots);
        pprint(abbr_str);
    }else{
        pprint(what);
    }


}

int main(){
    char *s="Hello World GOGOGOGGOGO";
    pprint_abbr(s,5);
    return 0;
}

