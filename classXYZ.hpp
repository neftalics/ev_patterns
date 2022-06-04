#include "classObserver.hpp"

class XYZ : public Subject 
{
    private: 
        int var1;
        int var2;
        int var3;
        int var4;
        int var5;

    public:
        XYZ() = default;
        void SetVars(int var1_, int var2_, int var3_, int var4_, int var5_)
        {
            this->var1 = var1_; 
            this->var2 = var2_;
            this->var3 = var3_;
            this->var4 = var4_;
            this->var5 = var5_;

            notify(); 
        }

        int Getvar1() const { return var1; }
        int Getvar2() const { return var2; }
        int Getvar3() const { return var3; }
        int Getvar4() const { return var4; }
        int Getvar5() const { return var5; }
}; 

//-------------------------

class Cinco_numeros_pares: public Observer_Strategy 
{ 
    private:
        XYZ& subject;

    public: 
        explicit Cinco_numeros_pares(XYZ& s) : subject(s) { subject.attach(*this); }
        ~Cinco_numeros_pares() override { subject.detach(*this); }
        void verify(Subject& theChangedSubject) override
        {
            if (&theChangedSubject == &subject) {
                int var1 = subject.Getvar1(); 
                int var2 = subject.Getvar2(); 
                int var3 = subject.Getvar3(); 
                int var4 = subject.Getvar4();
                int var5 = subject.Getvar5();
                if(var1%2==0 && var2%2==0 && var3%2==0 && var4%2==0 && var5%2==0)
                    show_winner();
            }
        }

        void show_winner() const
        {
            int var1 = subject.Getvar1(); 
            int var2 = subject.Getvar2(); 
            int var3 = subject.Getvar3(); 
            int var4 = subject.Getvar4();
            int var5 = subject.Getvar5();

            std::cout << var1 << " ; " 
                    << var2 << " ; " 
                    << var3 << " ; "
                    << var4 << " ; "
                    << var5 <<" -> "<< "entonces el ganador será el jugador con la estrategia Cinco numeros pares "<<std::endl;           
        }
};

class Cinco_numeros_impares: public Observer_Strategy 
{
    private:
        XYZ& subject;

    public: 
        explicit Cinco_numeros_impares(XYZ& s) : subject(s) { subject.attach(*this); }
        ~Cinco_numeros_impares() override { subject.detach(*this); }
        void verify(Subject& theChangedSubject) override
        {
            if (&theChangedSubject == &subject) {
                int var1 = subject.Getvar1(); 
                int var2 = subject.Getvar2(); 
                int var3 = subject.Getvar3(); 
                int var4 = subject.Getvar4();
                int var5 = subject.Getvar5();
                if(var1%2!=0 && var2%2!=0 && var3%2!=0 && var4%2!=0 && var5%2!=0)
                    show_winner();
            }
        }
        void show_winner() const
        {
            int var1 = subject.Getvar1(); 
            int var2 = subject.Getvar2(); 
            int var3 = subject.Getvar3(); 
            int var4 = subject.Getvar4();
            int var5 = subject.Getvar5();

            std::cout << var1 << " ; " 
                    << var2 << " ; " 
                    << var3 << " ; "
                    << var4 << " ; "
                    << var5 <<" -> "<< "entonces el ganador será el jugador con la estrategia Cinco numeros impares "<<std::endl;           
        }
};


class Un_numero_primo: public Observer_Strategy 
{ 
    private:
        XYZ& subject;

    public: 
        explicit Un_numero_primo(XYZ& s) : subject(s) { subject.attach(*this); }
        ~Un_numero_primo() override { subject.detach(*this); }
        void verify(Subject& theChangedSubject) override
        {
            if (&theChangedSubject == &subject) {
                //show_winner();
            }
        }
        void show_winner() const
        {
            int var1 = subject.Getvar1(); 
            int var2 = subject.Getvar2(); 
            int var3 = subject.Getvar3(); 
            int var4 = subject.Getvar4();
            int var5 = subject.Getvar5();

            std::cout << var1 << " ; " 
                    << var2 << " ; " 
                    << var3 << " ; "
                    << var4 << " ; "
                    << var5 <<" -> "<< "entonces el ganador será el jugador con la estrategia Un_numero_primo "<<std::endl;           
        }

};

class Tres_numeros_multiplos_de_10: public Observer_Strategy 
{ 
    private:
        XYZ& subject;

    public: 
        explicit Tres_numeros_multiplos_de_10(XYZ& s) : subject(s) { subject.attach(*this); }
        ~Tres_numeros_multiplos_de_10() override { subject.detach(*this); }
        void verify(Subject& theChangedSubject) override
        {
            if (&theChangedSubject == &subject) {
                //show_winner();
            }
        }
        void show_winner() const
        {
            int var1 = subject.Getvar1(); 
            int var2 = subject.Getvar2(); 
            int var3 = subject.Getvar3(); 
            int var4 = subject.Getvar4();
            int var5 = subject.Getvar5();

            std::cout << var1 << " ; " 
                    << var2 << " ; " 
                    << var3 << " ; "
                    << var4 << " ; "
                    << var5 <<" -> "<< "entonces el ganador será el jugador con la estrategia Tres_numeros_multiplos_de_10 "<<std::endl;           
        }

};

class Dos_numeros_multiplos_de_25: public Observer_Strategy 
{ 
    private:
        XYZ& subject;

    public: 
        explicit Dos_numeros_multiplos_de_25(XYZ& s) : subject(s) { subject.attach(*this); }
        ~Dos_numeros_multiplos_de_25() override { subject.detach(*this); }
        void verify(Subject& theChangedSubject) override
        {
            if (&theChangedSubject == &subject) {
                //show_winner();
            }
        }
        void show_winner() const
        {
            int var1 = subject.Getvar1(); 
            int var2 = subject.Getvar2(); 
            int var3 = subject.Getvar3(); 
            int var4 = subject.Getvar4();
            int var5 = subject.Getvar5();

            std::cout << var1 << " ; " 
                    << var2 << " ; " 
                    << var3 << " ; "
                    << var4 << " ; "
                    << var5 <<" -> "<< "entonces el ganador será el jugador con la estrategia Dos_numeros_multiplos_de_25 "<<std::endl;           
        }

};