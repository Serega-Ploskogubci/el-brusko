#include <stdio.h>
#include <encrypt.h>
#include <checksum.h>


int main()
{
    char s [] = "Say my name";
    encrypt(s);
    printf("crypted in '%s'\n", s);
    printf("Controll summ %i\n", checksum(s));
    encrypt(s);
    printf("encrypte in '%s'\n", s);
    printf("Controll summ %i\n", checksum(s));
    return 0;

}

