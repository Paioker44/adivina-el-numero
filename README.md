# Adivina el Número 

Juego de consola en C++ donde el jugador adivina un número secreto del 1 al 100.

## Características
- Pistas de "mayor" o "menor" en cada intento
- Contador de intentos
- Récord de la mejor partida
- Opción de jugar varias veces

## Cómo ejecutarlo
g++ main.cpp -o adivina
./adivina

## Lo que aprendí
- Usar ciclos `while` anidados: uno para cada partida y otro para cada intento.
- Detectar y corregir un error por uno (off-by-one) en el contador de intentos.
- Por qué no se puede comparar un `bool` con un `char` como `'y'`.
- Guardar un récord con el patrón de "encontrar el mínimo".
- Evitar el sombreado (shadowing) de variables.
