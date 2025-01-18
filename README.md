### README

# Generador de Contraseñas Aleatorias

Este programa en C++ genera contraseñas aleatorias según las preferencias especificadas por el usuario, como la cantidad de contraseñas y la longitud de cada una. Es útil para crear contraseñas seguras con una combinación de números, letras y caracteres especiales.

---

## Características

- **Generación personalizada**: El usuario puede especificar la cantidad de contraseñas a generar y la longitud de cada una.
- **Conjunto de caracteres robusto**: Las contraseñas incluyen letras minúsculas, mayúsculas, números y caracteres especiales para mayor seguridad.
- **Interactividad**: Permite generar nuevas contraseñas de manera continua hasta que el usuario decida detenerse.

---

## Requisitos del sistema

- Un compilador C++ compatible con el estándar C++11 o superior.
- Sistema operativo que soporte la ejecución de programas en C++.

---

## Uso

1. **Compilar el programa**:
   ```bash
   g++ -o generadorContrasenas generadorContrasenas.cpp
   ```

2. **Ejecutar el programa**:
   ```bash
   ./generadorContrasenas
   ```

3. **Interacción**:
   - Ingrese la cantidad de contraseñas a generar.
   - Especifique la longitud de cada contraseña.
   - Las contraseñas generadas aparecerán en la consola.
   - Puede optar por generar más contraseñas o salir del programa.

---

## Ejemplo de ejecución

```plaintext
Ingrese la cantidad de contraseñas a generar: 3
Ingrese la longitud de cada contraseña: 8
Contraseña generada 1: Ab3@tY#9
Contraseña generada 2: 7x!oL*Jq
Contraseña generada 3: pQrT5&2g
¿Desea generar más contraseñas? (S/N): S
Ingrese la cantidad de contraseñas a generar: 2
Ingrese la longitud de cada contraseña: 12
Contraseña generada 1: G9h@xM3!Y2tK
Contraseña generada 2: 5R@t!nLp#9X2
¿Desea generar más contraseñas? (S/N): N
```

---

## Detalles técnicos

- **Conjunto de caracteres**: Definido en la constante `alphanum`, incluye:
  - Números (`0-9`)
  - Caracteres especiales (`!@#$%^*_`)
  - Letras minúsculas y mayúsculas (`a-z`, `A-Z`).
- **Generación aleatoria**: Utiliza `rand()` junto con `srand(time(0))` para inicializar la semilla de números aleatorios.
- **Bucles**: Implementa ciclos `for` y `do-while` para iterar según las entradas del usuario.

---

## Notas importantes

1. **Seguridad**:
   - Aunque el programa genera contraseñas seguras para fines básicos, el uso de `rand()` no es ideal para aplicaciones criptográficas. Se recomienda utilizar bibliotecas como `<random>` para mayor seguridad.
2. **Entrada del usuario**:
   - Asegúrese de ingresar valores válidos para evitar errores inesperados.

---

**No hay planes de seguir actualizando este código**
