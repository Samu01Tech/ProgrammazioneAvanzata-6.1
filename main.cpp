#include <iostream>
using namespace std;

class Studente{
    private:
        int datoStudente;
    public:
        Studente(){
            datoStudente = 0; 
            cout << "Creato Studente" << endl;  
        };
};
class Lavoratore{
    private:
        int datoLavoratore;
    public:
        Lavoratore(){
            datoLavoratore = 0;
            cout << "Creato Lavoratore" << endl;
        };
};
class StudenteLavoratore: public Studente, public Lavoratore{
    public:
        StudenteLavoratore(){
            cout << "Creato Studente Lavoratore" << endl;
        };
};


int main() {
    StudenteLavoratore s1;
    return 0;
} 