#include <xc.h>
#include "input.h"


void input_init ( void )
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

void input_scan( struct sensor_t *ptr)
{
    *ptr->Nivel_INF_BAIXO = PORTCbits.RC0;
    *ptr->Nivel_INF_MEDIO = PORTCbits.RC1;
    *ptr->Nivel_INF_ALTO  = PORTCbits.RC2;
    *ptr->Nivel_SUP_BAIXO = PORTCbits.RC3;
    *ptr->Nivel_SUP_MEDIO = PORTCbits.RC4;
    *ptr->Nivel_SUP_ALTO  = PORTCbits.RC5;
    *ptr->Boia_INF        = PORTAbits.RA6;
    *ptr->Boia_SUP        = PORTAbits.RA7;
}