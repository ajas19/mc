void main() {
        TRISC.RC0=0;
        TRISC.RC1=0;
        TRISC.RC2=0;
        TRISB.RB0=0;
        TRISB.RB1=0;
        TRISB.RB2=0;
        
        
        while(1){
        //0= GREEN 1= YELLOW 2= RED
        PORTC.RC0=1;
        PORTC.RC1=0;
        PORTC.RC2=0;
        PORTB.RB0=0;
        PORTB.RB1=0;
        PORTB.RB2=1;
        delay_ms(500);
        
        PORTC.RC0=0;
        PORTC.RC1=1;
        PORTC.RC2=0;
        PORTB.RB0=0;
        PORTB.RB1=1;
        PORTB.RB2=0;
        delay_ms(500);
        
        PORTC.RC0=0;
        PORTC.RC1=0;
        PORTC.RC2=1;
        PORTB.RB0=1;
        PORTB.RB1=0;
        PORTB.RB2=0;
        delay_ms(500);

}
}