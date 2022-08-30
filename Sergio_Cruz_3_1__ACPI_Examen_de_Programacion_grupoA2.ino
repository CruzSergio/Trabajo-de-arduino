/**********************************************************************^

Rebote de luz.

Se trata de encender y apagar 5 leds secuencialmente. Los leds deben 
estar conectados a los pines 2,3,4 y 5.

Se deben encender y apagar los leds desde el pin 2 al 5, con un tiempo 
de encendido y apagado de 80 ms, más tarde se deben encender y apagar los
leds desde el pin 5 al 2, con un tiempo de encendido y apagado de 80 ms. 

La secuencia se debe repetir indefinidamente. El efecto del programa es 
el de una luz rebotando de un lado al otro.

Optimizar el código usando sentencias condicionales y\o ciclos para 
evitar la repeticion de código

************************************************************************/

int led = 2;
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int lok = 80;

void setup(){


pinMode(led, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
}

void loop(){


digitalWrite(2, HIGH);
delay(lok);
digitalWrite(2, LOW);
delay(lok);

digitalWrite(3, HIGH);
delay(lok);
digitalWrite(3, LOW);
delay(lok);

digitalWrite(4, HIGH);
delay(lok);
digitalWrite(4, LOW);
delay(lok);

digitalWrite(5, HIGH);
delay(lok);
digitalWrite(5, LOW);
delay(lok);

digitalWrite(6, HIGH);
delay(lok);
digitalWrite(6, LOW);
delay(lok);

 digitalWrite(5, HIGH);
delay(lok);
digitalWrite(5, LOW);
delay(lok);

 digitalWrite(4, HIGH);
delay(lok);
digitalWrite(4, LOW);
delay(lok);

 digitalWrite(3, HIGH);
delay(lok);
digitalWrite(3, LOW);
delay(lok);
 
}
 
