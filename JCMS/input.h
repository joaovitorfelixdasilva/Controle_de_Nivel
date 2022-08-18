#ifndef INPUT_H
#define	INPUT_H

struct sensor_t
{
    unsigned char Nivel_INF_BAIXO:1;
    unsigned char Nivel_INF_MEDIO:1; 
    unsigned char Nivel_INF_ALTO :1; 
    unsigned char Nivel_SUP_BAIXO:1; 
    unsigned char Nivel_SUP_MEDIO:1; 
    unsigned char Nivel_SUP_ALTO :1; 
    unsigned char Boia_INF       :1; 
    unsigned char Boia_SUP       :1; 

};

void input_init ( void );

#endif	

