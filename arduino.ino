#define sinal A0
int rele = 7;
boolean opcao=true;
char caracter;
char opca;
boolean opc=true;
boolean op=true;
char o;
void setup() 
{
  Serial.begin(9600);
  pinMode(sinal,INPUT);
  pinMode(rele,OUTPUT);
}void loop(){
       opca = Serial.read();
        switch(opca){
            case'1':
                do{
                    op=true;
                    caracter = Serial.read();
                    if(caracter == 'f'){
                        digitalWrite(rele,HIGH); 

                    }else if(caracter == 'v'){
                        digitalWrite(rele,LOW);
                   
                   }else if(caracter == 'x'){
                        opc=false;
                   } 
                  }while(opc);
             break;
            
            case'2':
                    do{
                         opc=true;
                         int valor = analogRead(sinal);
                         Serial.println(valor);
                         o = Serial.read();
                         if(o=='x'){
                              op=false;  
                         }else if(valor>=750 && valor<1125){
                             digitalWrite(rele,LOW);
 
                         }else if(valor<750 && valor>0){
                              digitalWrite(rele,HIGH);  
                          }
                       }while(op);
            break;
            
            
           } 
             }
          
    
