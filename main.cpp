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
class StudenteLavoratore: public Lavoratore, public Studente{
    //invertendo le ereditarietà lui invoca i costruttori in ordine diverso
    public:
        StudenteLavoratore(){
            cout << "Creato Studente Lavoratore" << endl;
        };
};


int main() {
    StudenteLavoratore s1;
    return 0;
} 