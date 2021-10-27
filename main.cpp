#include <iostream>
using namespace std;

class Studente{
    private:
        int datoStudente;
    public:
};
class Lavoratore{
    private:
        int datoLavoratore;
    public:
};
class StudenteLavoratore: public Studente, public Lavoratore{

};

int main() {
  cout << "Hello World!\n";
} 