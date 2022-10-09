/*
  *Archivo de Hello.c que usamos para nuestro
  *Ejercicio de basico
*/



#include <stdio.h> 

int main(void) {
    decirHola("Miriam");
    return 0;

}

void decirHola(char*nombre){
    printf("Hola %s, ¿como estas?", nombre);
}
