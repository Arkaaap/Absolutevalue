#include <stdio.h>
#include <string.h>

void obfuscate (char *wsa , char* bigstring )
{
    for (int i=0;i<strlen(wsa);++i)//62
    {
        for (int j = 0 ;j<strlen(bigstring);++j)//10
        {
            if (wsa[i] == bigstring[j])
            {
                printf ("%d\t",j);
                break;
            }
        }
    }
}



void deobfuscate(int indices[], int length, char *bigstring) {
    for (int i = 0; i < length; i++) {
        int index = indices[i];
        if (index >= 0 && index < strlen(bigstring)) {
            printf("%c", bigstring[index]);
        } else {
            printf("?");  // In case of invalid index
        }
    }
    printf("\n");
}


int main ()
{
    char wsa[]= "WsaStartup";
    char big_string[] =  "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    printf ("\n%ld\n",strlen(big_string));
    printf ("\n%ld\n",strlen(wsa));
    obfuscate(wsa,big_string);
    
    int encoded_values [] = {48,18,0,44,19,0,17,19,20,15};
    int size = sizeof(encoded_values)/sizeof(encoded_values[0]);
    deobfuscate(encoded_values,size,big_string);
    return (0);
}
