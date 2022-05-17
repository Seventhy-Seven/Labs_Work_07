#include <iostream>
using namespace std;

class Auto {
protected:
    string typeClass = "auto";
    int wheels;
public:
    Auto(int wheels) :wheels(wheels) {};
    virtual void motion() = 0;
};

class Porsche :public Auto {
private:
    string country = "Germany";
public:
    int power;
    int doors;
    int maxSpeed;

    Porsche() : Auto(wheels) {};
    Porsche(int power, int doors, int maxSpeed) : Auto(4) {
        this->power = power;
        this->doors = doors;
        this->maxSpeed = maxSpeed;
    };

    void motion() {
        cout << typeClass << "\n";
        cout << "Model: Porsche" << "\n";
        cout << "Country: " + country << "\n";
        cout << power << "\n";
        cout << doors << "\n";
        cout << maxSpeed << "\n";
        cout << wheels << "\n";
    }
};

class Lada :public Auto {
private:
    string country = "Russia";
public:
    int power;
    int doors;
    int maxSpeed;

    Lada() :Auto(wheels) {};
    Lada(int power, int doors, int maxSpeed) :Auto(4) {
        this->power = power;
        this->doors = doors;
        this->maxSpeed = maxSpeed;
    };

    void motion() {
        cout << typeClass << "\n";
        cout << "Model: Lada" << "\n";
        cout << "Country: " + country << "\n";
        cout << power << "\n";
        cout << doors << "\n";
        cout << maxSpeed << "\n";
        cout << wheels << "\n";
    }
};

int main() {

    Porsche porsche(500, 2, 320);
    Lada lada(85, 4, 160);

    porsche.motion();
    lada.motion();

}