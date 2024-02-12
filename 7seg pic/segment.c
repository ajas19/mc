char seg[]={0xC0,0xF9,0x92,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
int i,x;

void main() {

    TRISB=0x00;
    TRISC=0x00;
    PORTB=0x00;
    PORTC=0x00;
            
    for(i=0;i<10;i++)
    {
       for(x=0;x<10;x++)
       {
         PORTB=seg[i];
         PORTC=seg[x];
         delay_ms(100);
       }
    }

}