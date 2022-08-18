#include <xc.h>
#include "Sensores.h"


void Sensores_init ( void )
{

    TRISCbits.TRISC0 = 1;
    TRISCbits.TRISC1 = 1;
    TRISCbits.TRISC2 = 1;
    TRISCbits.TRISC3 = 1;
    TRISCbits.TRISC4 = 1;
    TRISCbits.TRISC5 = 1;
    TRISAbits.TRISA6 = 1;
    TRISAbits.TRISA7 = 1;
}
