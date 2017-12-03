#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[])
{
    double kel, cel, farn;

    if ( argc == 3 )
    {
        switch(argv[2][0])
        {
            case 'C':
                case 'c':
                    if ( (atoi(argv[1]))/1.0 > -273,15 )
                    {
                        farn = atoi(argv[1])*9/5+32;
                        kel = atoi(argv[1])/1.0+273.15;
                        printf("%.2lf F\n%.2lf K\n", farn, kel);
                    }
                    else
                    {
                        printf("Absolute zero");
                    }
                    break;
            case 'K':
                case 'k':
                    if ( (atoi(argv[1]))/1.0 > 0 )
                    {
                        cel = atoi(argv[1])/1.0-273.15;
                        farn = cel*9/5+32;
                        printf("%.2lf F\n%.2lf C\n", farn, cel);
                    }
                    else
                    {
                        printf("Absolute zero");
                    }
                    break;
            case 'F':
                case 'f':
                    if ( (atoi(argv[1]))/1.0 > -459,67 )
                    {
                        cel = (atoi(argv[1])-32)*5/9.0;
                        kel = cel-273.15;
                        printf("%.2lf C\n%.2lf K\n", cel, kel);
                    }
                    else
                    {
                        printf("Absolute zero");
                    }
                    break;
        }
    }
    else
    if ( argc == 2 )
    {
        if ( (atoi(argv[1]))/1.0 > -273,15 )
        {
            farn = atoi(argv[1])*9/5.0+32;
            kel = atoi(argv[1])/1.0+273.15;
            printf("%.2lf C:\n%.2lf F\n%.2lf K\n\n", atoi(argv[1])/1.0, farn, kel);
        }
        else
        {
            printf("Absolute zero");
        }
        farn=0; kel=0;

        if ( (atoi(argv[1]))/1.0 > 0 )
        {
            cel = atoi(argv[1])/1.0-273.15;
            farn = cel*9/5+32;
            printf("%.2lf K:\n%.2lf F\n%.2lf C\n\n", atoi(argv[1])/1.0, farn, cel);
        }
        else
        {
            printf("Absolute zero");
        }
        farn=0; cel=0;

        if ( (atoi(argv[1]))/1.0 > -459,67 )
        {
            cel = (atoi(argv[1])-32)*5/9;
            kel = cel-273.15;
            printf("%.2lf F:\n%.2lf C\n%.2lf K\n\n", atoi(argv[1])/1.0, cel, kel);
        }
        else
        {
            printf("Absolute zero");
        }
    }
    else
    {
        printf("Loser!");
    }
    return 0;
}
