# Lab6
 Creación de clases en C++ Lab#6
Imagina que estás desarrollando un sistema para una concesionaria de autos. Debes crear un conjunto de clases que representen diferentes tipos de vehículos y sus características.

Parte 1: Definir las Clases

Debes crear al menos 5 clases con los siguientes requisitos:

Clase base: Vehiculo
Atributos privados: marca, modelo, precio.
Constructor: para inicializar estos valores.
Método mostrarInfo() que imprima los detalles del vehículo.
Encapsulamiento: Implementa métodos get y set para acceder a los atributos privados.


Clases derivadas: Automovil, Motocicleta, Camioneta
Cada una debe heredar de Vehiculo.
Deben tener un atributo propio (ej. numPuertas en Automovil, cilindrada en Motocicleta, capacidadCarga en Camioneta).
Sobrescribe el método mostrarInfo() para incluir los nuevos atributos.

Clase adicional: Cliente
Atributos: nombre, edad
Constructor: para inicializar valores.
Método comprarVehiculo(Vehiculo v) que muestre un mensaje indicando que el cliente ha comprado un vehículo.

Parte 2: Implementación en C++

Crea un programa en C++ donde definas las clases anteriores.
Instancia al menos 3 objetos de diferentes clases derivadas.
Crea un objeto de Cliente y simula la compra de un vehículo.
Muestra en pantalla la información de los vehículos y la transacción.


Ejemplo esperado de salida:

Vehículo: Toyota Corolla, Modelo: 2022, Precio: $25,000, Puertas: 4.

Vehículo: Yamaha R1, Modelo: 2021, Precio: $18,000, Cilindrada: 1000cc.

Vehículo: Ford Ranger, Modelo: 2020, Precio: $30,000, Capacidad de carga: 1.5 toneladas.

Cliente Juan ha comprado un Toyota Corolla.
