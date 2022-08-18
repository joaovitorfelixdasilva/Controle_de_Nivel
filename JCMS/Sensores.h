#ifndef SENSORES_H
#define	SENSORES_H


#define SEN_INF_BAIXO PORTCbits.RC0
#define SEN_INF_MEDIO PORTCbits.RC1
#define SEN_INF_ALTO  PORTCbits.RC2
#define SEN_SUP_BAIXO PORTCbits.RC3
#define SEN_SUP_MEDIO PORTCbits.RC4
#define SEN_SUP_ALTO  PORTCbits.RC5
#define FIC_INF       PORTAbits.RA6
#define FIC_SUP       PORTAbits.RA7

void Sensores_init ( void );

#endif	

