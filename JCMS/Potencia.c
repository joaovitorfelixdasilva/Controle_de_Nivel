#include <xc.h>
#include "Potencia.h"

void Potencia_init ( void )
{

    TRISAbits.TRISA1 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;
}
