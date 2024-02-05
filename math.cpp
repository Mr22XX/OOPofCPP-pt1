#include <iostream>
using namespace std;

class Persegi{
    private:
    double sisi;

    public:
    void setSisi(double sisiPersegi){
        sisi = sisiPersegi;
    }

    double getKeliling(){
        return 4*sisi;
    }

    double getLuas(){
        return sisi*sisi;
    }
};
int main(){
    Persegi Persegi1;
    Persegi Persegi2;
    Persegi1.setSisi(5);
    Persegi2.setSisi(8);
    cout << "keliling persegi 1 adalah \t:"<< Persegi1.getKeliling() << "\n" ;
    cout << "keliling persegi 2 adalah \t:"<< Persegi2.getKeliling() << "\n";
    cout << "Luas persegi 1 adalah \t:"<< Persegi1.getLuas() << "\n";
    cout << "Luas persegi 2 adalah \t:"<< Persegi2.getLuas() << "\n";
}