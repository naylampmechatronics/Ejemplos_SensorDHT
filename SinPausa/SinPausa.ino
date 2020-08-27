/****************************************************************************************
 Sin Pausa
 
  Programa para realizar lecturas de un sensor DHT22 o similar sin realizar un delay() de 2 segundos,
  y de esta forma lograr ciclos más rápidos del void loop() necesario en procesos rápidos
  
  Para usar con otro modelo de sensor modificar en DHTTYPE 

 Conexiones:
  --------------------------
  DHT22/DHT11  -> Arduino
  --------------------------
  Pin 1 (VDD) ->   5V  
  Pin 2 (DATA)->   D2 + Res.Pull-Up 
  Pin 3 (NULL)->   NC 
  Pin 4 (GND) ->   5V 
  --------------------------
  *Puede cambiar la conexión a otro pin del arduino modificando la variable DHTPIN que define el pin.
 
 Ejemplo desarrollado por Naylamp Mechatronics bajo licencia MIT (puede copiar, modificar, integrar o redistribuir)
 
 Última modificación el 27/08/2020

 Más información en:
   -https://naylampmechatronics.com/blog/40_Tutorial-sensor-de-temperatura-y-humedad-DHT1.html
   -https://github.com/naylampmechatronics/Ejemplos_SensorDHT

**************************************************************************************************/

#include "DHT.h"

#define DHTPIN 2     // Pin donde está conectado el sensor


#define DHTTYPE DHT22   // Sensor DHT22
//#define DHTTYPE DHT21   // Cambiar a esta línea si se usa el DHT21
//#define DHTTYPE DHT11   // Cambiar a esta línea si se usa el DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando...");
  dht.begin();
  pinMode(13, OUTPUT);
}

long tiempoUltimaLectura=0;; //Para guardar el tiempo de la última lectura
void loop() {
  //---------Lectura del Sensor--------------------------
  if(millis()-tiempoUltimaLectura>2000)
  {    
      float h = dht.readHumidity(); //Leemos la Humedad
      float t = dht.readTemperature(); //Leemos la temperatura en grados Celsius
      float f = dht.readTemperature(true); //Leemos la temperatura en grados Fahrenheit
      //--------Enviamos las lecturas por el puerto serial-------------
      Serial.print("Humedad ");
      Serial.print(h);
      Serial.print(" %\t");
      Serial.print("Temperatura: ");
      Serial.print(t);
      Serial.print(" *C ");
      Serial.print(f);
      Serial.println(" *F");
      tiempoUltimaLectura=millis(); //actualizamos el tiempo de la última lectura
  }
  //----Fin de la lectura---------------------------
  
  //---------Resto del código  del proyecto--------
  //...
  //...
  //...
  //por ejemplo blink pin13:
  digitalWrite(13, HIGH); 
  delay(100);              
  digitalWrite(13, LOW);    
  delay(100);   
  //-------------------------------

}
