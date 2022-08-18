#include <xc.h>
#include "output.h"

#define K1  PORTAbits.RA1
#define K2  PORTDbits.RD6
#define K3  PORTDbits.RD7

void output_init ( void )
{

    TRISAbits.TRISA1 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;
}

void output_k1 ( unsigned char b )
{
  K1 = b;    
}
void output_k2 ( unsigned char b )
{
  K2 = b;
}
void output_k3 ( unsigned char b )
{
  K3 = b;  
}
