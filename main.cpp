#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <algorithm>
#include <valarray>
#include <memory>
#include <sstream> // Para convertir cadenas a números

// Clase para el Ejercicio 1
class Ejercicio1 {
public:
    void ejecutar() {
        std::cout << "=== Ejercicio 1: Vector e Iteradores ===" << std::endl;
        std::vector<int> numeros = {10, 20, 30, 40, 50};
        for (std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
            std::cout << *it << std::endl;
        }
        std::cout << std::endl;
    }
};

// Clase para el Ejercicio 2
class Ejercicio2 {
public:
    void ejecutar() {
        std::cout << "=== Ejercicio 2: Contenedores Estándar y Secuencias ===" << std::endl;
        std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
        std::stack<float, std::list<float>> pila(lista);
        while (!pila.empty()) {
            std::cout << pila.top() << std::endl;
            pila.pop();
        }
        std::cout << std::endl;
    }
};

// Clase para el Ejercicio 3
class Ejercicio3 {
public:
    void ejecutar() {
        std::cout << "=== Ejercicio 3: Algoritmos ===" << std::endl;
        std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
        std::sort(numeros.begin(), numeros.end());
        for (int num : numeros) {
            std::cout << num << std::endl;
        }
        int maxNum = *std::max_element(numeros.begin(), numeros.end());
        std::cout << "Número máximo: " << maxNum << std::endl;
        std::cout << std::endl;
    }
};

// Clase para el Ejercicio 4
class Ejercicio4 {
public:
    void ejecutar() {
        std::cout << "=== Ejercicio 4: Cálculo numérico ===" << std::endl;
        std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};
        std::cout << "Suma: " << valores.sum() << std::endl;
        std::cout << "Media: " << valores.sum() / valores.size() << std::endl;
        valores += 5.0;
        std::cout << "Valores + 5.0: ";
        for (double valor : valores) {
            std::cout << valor << " ";
        }
        std::cout << std::endl << std::endl;
    }
};

// Clase para el Ejercicio 5
class Ejercicio5 {
public:
    void ejecutar() {
        std::cout << "=== Ejercicio 5: C++ Moderno ===" << std::endl;
        auto cuadrado = [](int num) { return num * num; };
        std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;

        std::vector<int> numeros = {1, 2, 3, 4, 5};
        std::for_each(numeros.begin(), numeros.end(), [](int num) {
            std::cout << num << std::endl;
        });

        std::shared_ptr<int> ptr = std::make_shared<int>(10);
        std::cout << "Valor apuntado por ptr: " << *ptr << std::endl;
        std::cout << std::endl;
    }
};

// Clase para el Ejercicio 6 (Sin Boost)
class Ejercicio6 {
public:
    void ejecutar() {
        std::cout << "=== Ejercicio 6: Conversión de Cadenas ===" << std::endl;
        std::string s = "12345";
        try {
            int i = stringToInt(s);
            std::cout << "Número: " << i << std::endl;
        } catch (const std::exception &e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

private:
    int stringToInt(const std::string &str) {
        std::istringstream iss(str);
        int result;
        if (!(iss >> result)) {
            throw std::runtime_error("Conversión fallida");
        }
        return result;
    }
};

// Función principal
int main() {
    Ejercicio1().ejecutar();
    Ejercicio2().ejecutar();
    Ejercicio3().ejecutar();
    Ejercicio4().ejecutar();
    Ejercicio5().ejecutar();
    Ejercicio6().ejecutar();

    return 0;
}
