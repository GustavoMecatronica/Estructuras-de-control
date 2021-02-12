#INCLUDE <16F887.h>
#FUSES XT, NOPROTECT, MCLR
#USE delay(internal=4000000)
#BYTE PORTA=5
#BYTE PORTB=6
#DEFINE condicion PORTA,0
#DEFINE condicion1 PORTA,1
#DEFINE led1 PORTB,0
#DEFINE led2  PORTB,1
int numero=1;
int comparador=7;
void main(){
set_tris_a(0xFF);
set_tris_b(0x00);
PORTB=0x00;
for(;;){
/////////////estructura IF - IF-ELSE///////////////////
if(bit_test(condicion) && bit_test(condicion1)){
      bit_set(led2);
      delay_ms(500);
      bit_clear(led2);
      delay_ms(500);
      bit_set(led2);
      delay_ms(500);
      bit_clear(led2);
      delay_ms(500);
   }
   
  
if(bit_test(condicion))
   bit_set(led1);
  else
   bit_clear(led1);
   
 
if(bit_test(condicion1)){
      bit_set(led2);
      delay_ms(500);
      bit_clear(led2);
      delay_ms(500);
      bit_set(led2);
      delay_ms(500);
      bit_clear(led2);
      delay_ms(500);
    }else{
      bit_set(led1);
      delay_ms(500);
      bit_clear(led1);
      delay_ms(500);
      bit_set(led1);
      delay_ms(500);
      bit_clear(led1);
      delay_ms(500);
    
    }
///////////////estrucutura SWITCH-CASE////////////////////

   switch(numero){
   
      case 0:
         //instrucciones;
         bit_set(led1);
         delay_ms(1000);
         bit_clear(led1);
         delay_ms(300);
         break;
      case 1:
         //instrucciones;
         PORTB=0B01010101;
         delay_ms(500);
         PORTB=0B10101010;
         delay_ms(500);
         PORTB=0x00;
         break;
      default:
      //instrucciones;
      PORTB=0xFF;
      delay_ms(500);
      PORTB=0x00;
      delay_ms(500);
      break;
   
   }


/////////////estructura WHILE////////////////////////
while(bit_test(condicion)){
      bit_set(led1);
      delay_ms(1000);
      bit_clear(led1);
      delay_ms(300);
   }
   
while(!bit_test(condicion)){
      bit_set(led2);
      delay_ms(300);
      bit_clear(led2);
      delay_ms(1000);
   }
///////////estructura DO-WHILE///////////////////////
do{
     bit_set(led1);
     delay_ms(300);
     bit_clear(led1);
     delay_ms(1000); 

  }while(bit_test(condicion1));
  
  
 do{
     bit_set(led2);
     delay_ms(1000);
     bit_clear(led2);
     delay_ms(300); 

  }while(!bit_test(condicion1));
 /////////////////estructura FOR///////////////////
 for(int i=0; i<10;i++){
     bit_set(led2);
     delay_ms(500);
     bit_clear(led2);
     delay_ms(500);
     
   }

 for(int i=0; i<=comparador;i++){
     bit_set(PORTB,i);
     delay_ms(500);
   }
////////////////////////////////////////////////////
 }
}

