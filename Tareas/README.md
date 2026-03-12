# Sistema de Control de Torre (Ajedrez) ♜

## Descripción

Este proyecto es un programa desarrollado en **C++** que simula el movimiento de una **torre de ajedrez** dentro de un tablero de 8x8.

El sistema permite visualizar la posición actual de las torres y realizar movimientos validando las reglas básicas del ajedrez para esta pieza.

La torre solo puede moverse de forma **horizontal o vertical**, por lo que el programa verifica si el movimiento ingresado por el usuario es válido antes de actualizar la posición.

---

## Características

* Representación de torres blancas y negras
* Validación de movimientos dentro del tablero (1–8)
* Verificación de movimientos válidos para una torre
* Visualización del estado actual de las piezas
* Interacción con el usuario mediante consola

---

## Tecnologías utilizadas

* C++
* Programación orientada a objetos
* Compilación en consola

---

## Estructura del programa

El programa contiene una clase principal:

### Clase `Torre`

Atributos:

* `fila` → posición vertical de la pieza
* `columna` → posición horizontal
* `esNegra` → indica el color de la torre

Métodos principales:

* `validarMovimiento()` → verifica si el movimiento es horizontal o vertical
* `mover()` → intenta mover la torre a una nueva posición
* `dibujar()` → devuelve la representación visual de la torre
* `imprimirEstado()` → muestra el estado actual de la pieza

---

## Funcionamiento

1. El programa crea dos torres:

   * Torre blanca en `(1,1)`
   * Torre negra en `(8,8)`

2. Se muestra el estado actual del tablero.

3. El usuario ingresa:

   * nueva **fila**
   * nueva **columna**

4. El sistema valida:

   * si la posición está dentro del tablero
   * si el movimiento es válido para una torre

5. Finalmente se muestra el **nuevo estado del tablero**.

---

## Ejemplo de ejecución

```
SISTEMA DE CONTROL: TORRE

[ESTADO ACTUAL DEL TABLERO]
Pieza 1: [TT] Blanca en Fila: 1, Col: 1
Pieza 2: [##] Negra en Fila: 8, Col: 8

MOVIMIENTO: Torre Blanca [TT]

Introduzca nueva Fila (1-8):
Introduzca nueva Columna (1-8):
```

---

## Posibles mejoras

* Agregar más piezas de ajedrez
* Crear un tablero visual completo
* Implementar captura de piezas
* Añadir interfaz gráfica
* Implementar todas las reglas del ajedrez

---

## Autor

Proyecto educativo para práctica de **Programación Orientada a Objetos en C++**.
