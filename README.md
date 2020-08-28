# Ejemplos_SensorDHT
Ejemplos de uso para sensores de humedad y temperatura de la serie DHT

![Sensor de temperatura y humedad relativa DHT22 (AM2302)](https://naylampmechatronics.com/2570-large_default/sensor-de-temperatura-y-humedad-relativa-dht11.jpg)

Información detallada de los ejemplos en: [Tutorial sensores de temperatura y humedad DHT](https://naylampmechatronics.com/blog/40_Tutorial-sensor-de-temperatura-y-humedad-DHT1.html)

## Contenido
* **SimpleLectura:** Programa para realizar lecturas de un sensor DHT22 o similar
* **SinPausa:** Programa para realizar lecturas sin usar un delay() de 2 segundos, logrando ciclos más rápidos del void loop() necesario en procesos rápidos
 
## Requerimientos
 **Software**
  * IDE Arduino
  * Librería [DHT](https://github.com/adafruit/DHT-sensor-library) de Adafruit
  
 **Hardware**
  * [Arduino Uno](https://naylampmechatronics.com/arduino-tarjetas/8-arduino-uno-r3.html) (o cualquier modelo)
  * Sensor [DHT22](https://naylampmechatronics.com/sensores-temperatura-y-humedad/58-sensor-de-temperatura-y-humedad-relativa-dht22-am2302.html) o [DHT11](https://naylampmechatronics.com/sensores-temperatura-y-humedad/57-sensor-de-temperatura-y-humedad-relativa-dht11.html)
  * Resistencia 4.7~10K
  
## Conexiones
  

  DHT22/DHT11 | Arduino
  ------------|-------------
  Pin 1 (VDD) |   5V  
  Pin 2 (DATA)|   D2 + Res.Pull-Up 
  Pin 3 (NULL)|   NC 
  Pin 4 (GND) |   5V 
  
Puede cambiar la conexión a otro pin del arduino modificando la variable DHTPIN que define el pin.

## Licencia
Los ejemplos son Open Source, desarrollados por el equipo de Naylamp Mechatronics bajo [licencia MIT](LICENSE)
 
## Links 
 * [Tutorial sensores de temperatura y humedad DHT](https://naylampmechatronics.com/blog/40_Tutorial-sensor-de-temperatura-y-humedad-DHT1.html)
 * [Sensor de temperatura y humedad relativa DHT22 (AM2302)](https://naylampmechatronics.com/sensores-temperatura-y-humedad/58-sensor-de-temperatura-y-humedad-relativa-dht22-am2302.html)
 * [Sensor de temperatura y humedad relativa DHT11](https://naylampmechatronics.com/sensores-temperatura-y-humedad/57-sensor-de-temperatura-y-humedad-relativa-dht11.html)
 * [DHT sensor library](https://github.com/adafruit/DHT-sensor-library)

