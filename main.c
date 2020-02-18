/*
 * File:   main.c
 * Author: dell
 *
 * Created on February 17, 2020, 8:03 PM
 */


#include <xc.h>
#include"config.h"
#define _XTAL_FREQ 12000000


void main() {
//    PORTD = 0x00;    //0b00000000
//    for(int i;  i=10; i++){
//        PORTDbits.RD0 = ~ PORTDbits.RD0;
//       __delay_ms(500);
//    }
       
    TRISD = 0b11110000;
    //TRISDbits.RD2 = 0
    
    while(1){
        
        PORTDbits.RD6 = ~ PORTDbits.RD6;
        __delay_ms(1000);
    
    }
    
    
    
    
}
