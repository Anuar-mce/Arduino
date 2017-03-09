/*
  Blink
  Ejercicio básico que consiste en encender y apagar un led de manera intermitente.
  El tiempo de encendido y apagado es de 1 segundo. 

 */



/*
 * Funcion setup, solo se ejecuta una vez al pincipio del programa.
 * Si se pulsa el boton reset o se vuelve a conectar la correinte se ejcutara de nuevo.
 * Sirve para inicializar variables, inicializar liberias, configurar pines, etc.
 */
void setup() {
  //inicializa el pin 13 a modo salida, al ser digital 
  //solo puede tener 2 valores alto(HIGH) y bajo(LOW)
  pinMode(13, OUTPUT);
}

/*
 * Funcion loop, es la funcion principal del programa.
 * Se ejecuta justo despues la funcion setup, de manera indefinida*/
void loop() {
  digitalWrite(13, HIGH);   // enciendo el LED (HIGH pasa corriente)
  delay(1000);              // espero 1000ms (estara ese tiempo encendio el LED)
  digitalWrite(13, LOW);    // apago el LED (LOW no pasa corriente) 
  delay(1000);              // wait for a second
}
