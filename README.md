# Validador de Contraseñas en C++

## Descripción

Este proyecto consiste en un programa desarrollado en C++ que evalúa el nivel de seguridad de una contraseña ingresada por el usuario mediante la consola.

El programa comprueba cuatro condiciones de seguridad y, según la cantidad de reglas que cumpla la contraseña, la clasifica como débil, media o fuerte.

## Objetivo

Aplicar los fundamentos de programación en C++ mediante el uso de variables, cadenas de texto, estructuras condicionales y ciclos para desarrollar un validador básico de contraseñas.

## Reglas de validación

El programa evalúa las siguientes condiciones:

1. **Longitud:** la contraseña debe tener 8 caracteres o más.
2. **Mayúscula:** debe contener al menos una letra mayúscula de la A a la Z.
3. **Número:** debe contener al menos un dígito del 0 al 9.
4. **Carácter especial:** debe contener al menos uno de los siguientes símbolos: `! @ # $ % & *`.

## Clasificación de seguridad

| Condiciones cumplidas | Nivel de seguridad |
|---|---|
| De 0 a 2 | DÉBIL |
| 3 | MEDIA |
| 4 | FUERTE |

## Tecnologías y conceptos utilizados

- Lenguaje de programación: C++.
- Biblioteca `<iostream>` para la entrada y salida por consola.
- Biblioteca `<string>` para el manejo de cadenas de texto.
- Variables booleanas (`bool`) para registrar las condiciones de seguridad.
- Ciclo `for` para recorrer los caracteres de la contraseña.
- Estructuras condicionales `if`, `else if` y `else`.
- Operadores lógicos `&&` y `||`.
- Función `length()` para obtener la longitud de la contraseña.

## Funcionamiento

1. El programa presenta un mensaje de bienvenida.
2. Solicita al usuario que ingrese una contraseña.
3. Calcula la longitud de la contraseña.
4. Recorre sus caracteres para identificar mayúsculas, números y caracteres especiales.
5. Suma las cuatro condiciones cumplidas para obtener un puntaje.
6. Muestra el nivel de seguridad correspondiente.

## Ejemplo de ejecución

**Entrada:**

```text
Ingrese su contraseña: Hola123!
```

**Salida esperada:**

```text
Contraseña ingresada correctamente
La contraseña tiene: 8 Caracteres
La contraseña es FUERTE
```



## Autor

Estudiante de Análisis y Desarrollo de Software.

## Actividad académica

Taller en clase de C++ — Ejercicio de ciberseguridad: Validador de Contraseña Segura.
