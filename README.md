# ft_printf
## Descripción del Proyecto
El proyecto ft_printf tiene como objetivo recrear la funcionalidad de la función printf en el lenguaje de programación C. Esta función, ampliamente utilizada para la salida formateada en la consola, permite imprimir diferentes tipos de datos con un formato específico.

## Conversiones Implementadas
El programa debe ser capaz de manejar las siguientes conversiones:
- %c: Imprime un solo carácter.
- %s: Imprime una cadena de caracteres (string) como se define por defecto en C.
- %p: Imprime un puntero void * dado como argumento en formato hexadecimal.
- %d: Imprime un número decimal (base 10).
- %i: Imprime un entero en base 10.
- %u: Imprime un número decimal (base 10) sin signo.
- %x: Imprime un número hexadecimal (base 16) en minúsculas.
- %X: Imprime un número hexadecimal (base 16) en mayúsculas.
- %%: Para imprimir el símbolo del porcentaje.

## Uso del Proyecto
### Compilación
```
make
```
Para utilizar la función ft_printf, simplemente incluye el archivo de encabezado en tu programa y llama a la función con el formato deseado. Aquí hay un ejemplo básico:
```
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s! The answer is %d\n", "world", 42);
    return 0;
}
```
