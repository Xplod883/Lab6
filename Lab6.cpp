#include <iostream>
#include <string>

using namespace std;

//Clase del Vehiculo//
class Vehiculo {
private:
    string marca;
    string modelo;
    double precio;

public:
    Vehiculo(string marca, string modelo, double precio) : marca(marca), modelo(modelo), precio(precio) {
    }

    //Funciones get y set//
    string getMarca() const { return marca; }
    void setMarca(string nuevaMarca) { marca = nuevaMarca; }

    string getModelo() const { return modelo; }
    void setModelo(string nuevoModelo) { modelo = nuevoModelo; }

    double getPrecio() const { return precio; }
    void setPrecio(double nuevoPrecio) { precio = nuevoPrecio; }

    //Función para mostrar información//
    virtual void mostrarInfo() const {
        cout << "Marca: " << marca << ", Modelo: " << modelo << ", Precio: Q" << precio << endl;
    }
};

// Clase Automovil//
class Automovil : public Vehiculo {
private:
    int numPuertas;

public:
    Automovil(string marca, string modelo, double precio, int numPuertas) : Vehiculo(marca, modelo, precio), numPuertas(numPuertas) {
    }

    void mostrarInfo() const override {
        Vehiculo::mostrarInfo();
        cout << "Número de puertas: " << numPuertas << endl;
    }
};

// Clase Motocicleta//
class Motocicleta : public Vehiculo {
private:
    int cilindrada;

public:
    Motocicleta(string marca, string modelo, double precio, int cilindrada) : Vehiculo(marca, modelo, precio), cilindrada(cilindrada) {
    }

    void mostrarInfo() const override {
        Vehiculo::mostrarInfo();
        cout << "Cilindrada: " << cilindrada << "cilíndros" << endl;
    }
};

// Clase Camioneta//
class Camioneta : public Vehiculo {
private:
    double capacidadCarga;

public:
    Camioneta(string marca, string modelo, double precio, double capacidadCarga) : Vehiculo(marca, modelo, precio), capacidadCarga(capacidadCarga) {
    }

    void mostrarInfo() const override {
        Vehiculo::mostrarInfo();
        cout << "Capacidad de carga: " << capacidadCarga << " toneladas" << endl;
    }
};

// Clase Cliente//
class Cliente {
private:
    string nombre;
    int edad;

public:
    Cliente(string nombre, int edad) : nombre(nombre), edad(edad) {}

    void comprarVehiculo(const Vehiculo& vehiculo) const {
        cout << nombre << " (Edad: " << edad << ") ha comprado el siguiente vehículo:" << endl;
        vehiculo.mostrarInfo();
    }
};

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    Automovil auto1("Toyota", "Corolla", 25000, 4);
    Motocicleta moto1("Honda", "CBR500R", 8000, 500);
    Camioneta camioneta1("Ford", "Ranger", 35000, 1000);
    Cliente cliente1("Juan Perez", 30);

    cliente1.comprarVehiculo(auto1);
    cout << "----------" << endl;
    cliente1.comprarVehiculo(moto1);
    cout << "----------" << endl;
    cliente1.comprarVehiculo(camioneta1);

    return 0;
}