#include <stdio.h>

int main( void )
{
        char s[10];
        char s2[5];

        fgets( s, 10, stdin );
        fgets( s2, 5, stdin );

        printf( "%s\n", s);
        for ( int i = 0; i < 10; ++ i )
        {
                printf( "%c : 0x%x\n", s[i], s[i] );
        }
        printf( "%s\n", s2);
        for ( int i = 0; i < 5; ++ i )
        {
                printf( "%c : 0x%x\n", s2[i], s2[i] );
        }

        return 0;
}
