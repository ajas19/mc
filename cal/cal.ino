#include <Keypad.h>
#include <LiquidCrystal.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'7','8','9','/'},
  {'4','5','6','*'},
  {'1','2','3','-'},
  {'C','0','=','+'}
};
byte rowPins[ROWS] = {7,6,5,4}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {3,2,1,0}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
String input1="";
String input2="";
float n1=0;
float n2=0;
char op=' ';
float total;

void setup(){
  lcd.begin(16,2);

}
  
void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey){
        if(customKey !='\0' && customKey !='='){
      if(isdigit(customKey)){

          if(op == ' '){
              input1 += customKey;
              lcd.setCursor(12 , 0);
              lcd.print(input1);
          }else{
              input2 += customKey;
              lcd.setCursor(12 , 1);
              lcd.print(input2);
          }
    }else{
      op=customKey;
      lcd.setCursor(0 , 1);
      lcd.print(op);

    }
  }else if (customKey == '='){
      n1=input1.toFloat();
      n2=input2.toFloat();
        switch (op) {
          case '+':
            total = n1 + n2;
            break;
          case '-':
            total = n1 - n2;
            break;
          case '*':
            total = n1 * n2;
            break;
          case '/': 
              total = n1 / n2;
            break;
        }        
        
        lcd.clear();
        lcd.print("Total:");
        lcd.setCursor(0, 1);
        lcd.print(total);
        input1 = "";

    } 
    
    if (customKey == 'C') {
      input1 = "";
      input2 = "";
      n1 = 0;
      n2 = 0;
      op = ' ';
      lcd.clear();
      lcd.print("Calculator:");
      }

}
}