#include <xc.h>
#include "config.h"
#include "delay.h"
#include "lcd.h"
#include "output.h"
#include "input.h"

void main( void )
{
   lcd_init();
   input_init();
   output_init();

   lcd_print(0,0, " Superior       " );
   lcd_print(1,0, " Inferior       " );
  
    while( 1 )
    {   
        {   
        if(Nivel_INF_BAIXO == 1)
        if(Nivel_INF_MEDIO == 0)
        if(Nivel_INF_ALTO == 0)
            lcd_print(1,10, "BAIXO" );
        }
        {
        if(Nivel_INF_MEDIO == 1)
        if(Nivel_INF_ALTO == 0)
            lcd_print(1,10, "MEDIO" );
        }
        {
        if(Nivel_INF_ALTO == 1)
            lcd_print(1,10, "ALTO " );
        }
        {
        if(Nivel_INF_BAIXO == 0)
        if(Nivel_INF_MEDIO == 0)
        if(Nivel_INF_ALTO == 0)
            lcd_print(1,10, "VAZIO" );
        }
      //Tanque Superio        
        {   
        if(Nivel_SUP_BAIXO == 1)
        if(Nivel_SUP_MEDIO == 0)
        if(Nivel_SUP_ALTO == 0)
            lcd_print(0,10, "BAIXO" );
        }
        {
        if(Nivel_SUP_MEDIO == 1)
        if(Nivel_SUP_ALTO == 0)
            lcd_print(0,10, "MEDIO" );
        }
        {
        if(Nivel_SUP_ALTO == 1)
            lcd_print(0,10, "ALTO " );
        }
        {
        if(Nivel_SUP_BAIXO == 0)
        if(Nivel_SUP_MEDIO == 0)
        if(Nivel_SUP_ALTO == 0)
            lcd_print(0,10, "VAZIO" );
        }
        //Acionamento das bombas
        //BOMBA INFERIOR
        {
        if(Nivel_INF_ALTO == 0)
        if(Boia_INF  == 1)
            K1 = 1;
        else
           K1 = 0;
        if(Nivel_INF_ALTO == 1)
            K1 = 0;
        }
        //BOMBA SUPERIOR
        {
        if(Nivel_SUP_ALTO == 0)
        if(Boia_SUP == 1)
            K3 = 1;
         else 
            K3 = 0;
        if(Nivel_SUP_ALTO == 1)
            K3 = 0;
        }
        {
        if(Nivel_SUP_ALTO == 0)
        if(K3 == 1)
            K2 = 1;
         else 
            K2 = 0;
        if(Nivel_SUP_ALTO == 1)
            K2 = 0;
        }
    
   //    {
   //    if (PORTCbits.RC6 == 1)
   //        lcd_print(0,0, " Bomba Ligada   " );
   //   }
   //    {
   //     if(PORTCbits.RC7 == 1)
   //         lcd_print(1,0, " Bomba Ligada   " );
   //    }

    }
}
