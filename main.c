#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void accum(const char *source)
{

    int length = strlen(source);
    int newLength = (length * (length+1))/2 + length - 1;

    char* output = malloc(newLength);

    int i;
    for(i = 0; i < length; i++)
    {
        int start = i * (i + 1) / 2 + i;
        output[start] = toupper(source[i]);

        int j;
        for(j = 1; j <= i; j++)
        {
            output[start + j] = tolower(source[i]);
        }

        if(i != length-1)
        {
            output[start+i+1] = '-';
        }
    }

    printf("%s", output);

}

int main(void)
{

    accum("abcd");

    return 0;
}