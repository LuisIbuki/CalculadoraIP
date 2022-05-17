#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned char MascaraRed[4]={0,0,0,0};
    unsigned char IP[][4]={{0x0A,0xFA,0x01,0x01},
    {0xDC, 0xC8, 0x17, 0x01},{0xB1, 0x64, 0x12, 0x04}};
    unsigned char i;

    for ( i = 0; i < 5; i++)
    {
        if (IP[i][0]&128)
        {
            if (IP[i][0]&64)
            {
                if(IP[i][0]&32)
                {
                    if (IP[i][0]&16)
                    {
                        printf("\n Direccion Clase E");
                    }else
                        {
                            printf("\n Direccion Clase D");
                        }
                }else
                    {
                        MascaraRed[2]=MascaraRed[1]=MascaraRed[0]=255;
                        printf("\n Direccion Clase C");
                    }
            }else
                {
                    MascaraRed[1]=MascaraRed[0]=255;
                    printf("\n Direccion Clase B");
                }
                
               
        }else
            {
                MascaraRed[0]=255;
                printf("\n Direccion Clase A");
            }
        
    }
    


    return 0;
}