
char seg[]={0X3F,0X06,0X5B,0X4F,0X66,0X6d,0X7D,0X07,0X7F,0x6F};
int i;
void main() {
     TRISB=0x00;
     PORTB=0x00;
     
     for(i=0;i<10;i++)
     {
       PORTB=seg[i];
       delay_ms(100);
     }

}