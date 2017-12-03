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
                    if ( atof(argv[1]) > -273,15 )
                    {
                        farn = atof(argv[1])*9/5.0+32;
                        kel = atof(argv[1])+273.15;
                        printf("%.2lf F\n%.2lf K\n", farn, kel);
                    }
                    else
                    {
                        printf("Absolute zero\n");
                    }
                    break;
            case 'K':
                case 'k':
                    if ( atof(argv[1]) > 0 )
                    {
                        cel = atof(argv[1])-273.15;
                        farn = cel*9/5+32;
                        printf("%.2lf F\n%.2lf C\n", farn, cel);
                    }
                    else
                    {
                        printf("Absolute zero\n");
                    }
                    break;
            case 'F':
                case 'f':
                    if ( atof(argv[1]) > -459,67 )
                    {
                        cel = (atof(argv[1])-32)*5/9.0;
                        kel = cel-273.15;
                        printf("%.2lf C\n%.2lf K\n", cel, kel);
                    }
                    else
                    {
                        printf("Absolute zero\n");
                    }
                    break;
        }
    }
    else
    if ( argc == 2 )
    {
        if ( atof(argv[1]) > -273,15 )
        {
            farn = atof(argv[1])*9/5.0+32;
            kel = atof(argv[1])+273.15;
            printf("%.2lf C:\n%.2lf F\n%.2lf K\n\n", atof(argv[1]), farn, kel);
        }
        else
        {
            printf("Absolute zero\n");
        }
        farn=0; kel=0;

        if ( atof(argv[1]) > 0 )
        {
            cel = atof(argv[1])-273.15;
            farn = cel*9/5+32;
            printf("%.2lf K:\n%.2lf F\n%.2lf C\n\n", atof(argv[1]), farn, cel);
        }
        else
        {
            printf("Absolute zero\n");
        }
        farn=0; cel=0;

        if ( atof(argv[1]) > -459,67 )
        {
            cel = (atof(argv[1])-32)*5/9;
            kel = cel-273.15;
            printf("%.2lf F:\n%.2lf C\n%.2lf K\n\n", atof(argv[1]), cel, kel);
        }
        else
        {
            printf("Absolute zero\n");
        }
    }
    else
    {
        printf("Loser!");
    }
    return 0;
}
