#include <iostream>
#include "Personagens.h"

using namespace std;

int main()
{

    cout << "O mestre das sombras!" << endl;
   
    personagens* PersonagemZED = new personagens();
    PersonagemZED->setNome("ZED");
    PersonagemZED->setLane("MID");
    PersonagemZED->setAnoDeLancamento(2012);
    PersonagemZED->setNota(10);

    PersonagemZED->mostrar();
    delete PersonagemZED;

    cout << endl;

    cout << "A sentinela rebelde!" << endl;
    personagens* PersonagemAkshan = new personagens();
    PersonagemAkshan->setNome("AKSHAN");
    PersonagemAkshan->setLane("MID");
    PersonagemAkshan->setAnoDeLancamento(2021);
    PersonagemAkshan->setNota(10);

    PersonagemAkshan->mostrar();
    delete PersonagemAkshan;

    cout << endl;


    cout << "A espada DARKIN!" << endl;
    personagens* PersonagemAatrox = new personagens();
    PersonagemAatrox->setNome("AATROX");
    PersonagemAatrox->setLane("TOP");
    PersonagemAatrox->setAnoDeLancamento(2013);
    PersonagemAatrox->setNota(9);

    PersonagemAatrox->mostrar();
    delete PersonagemAatrox;

    cout << endl;

    cout << "Tita das profundezas!" << endl;
    personagens* PersonsagemNautilus = new personagens();
    PersonsagemNautilus->setNome("NAUTILUS");
    PersonsagemNautilus->setLane("Supp/mid");
    PersonsagemNautilus->setAnoDeLancamento(2012);
    PersonsagemNautilus->setNota(7);

    PersonsagemNautilus->mostrar();
    delete PersonsagemNautilus;

    cout << endl;

    cout << "O aspecto do crepusculo!" << endl;
    personagens* PersonagemZoe = new personagens();
    PersonagemZoe->setNome("ZOE");
    PersonagemZoe->setLane("Mid");
    PersonagemZoe->setAnoDeLancamento(2018);
    PersonagemZoe->setNota(5);

    PersonagemZoe->mostrar();
    delete PersonagemZoe;

    cout << endl;

    cout << "A ascensao dos espinhos!" << endl;
    personagens* PersonagemZyra = new personagens();
    PersonagemZyra->setNome("ZYRA");
    PersonagemZyra->setLane("Mid/Supp");
    PersonagemZyra->setAnoDeLancamento(2012);
    PersonagemZyra->setNota(6);

    PersonagemZyra->mostrar();
    delete PersonagemZyra;

    cout << endl;

    cout << "O rei barbaro!" << endl;
    personagens* PersonagemTrynda = new personagens();
    PersonagemTrynda->setNome("TRYNDAMERE");
    PersonagemTrynda->setLane("Top");
    PersonagemTrynda->setAnoDeLancamento(2009);
    PersonagemTrynda->setNota(7);

    PersonagemTrynda->mostrar();
    delete PersonagemTrynda;

    cout << endl;

    cout << "O estripador das aguas sangrentas!" << endl;
    personagens* PersonagemPyke = new personagens();
    PersonagemPyke->setNome("PYKE");
    PersonagemPyke->setLane("Supp");
    PersonagemPyke->setAnoDeLancamento(2018);
    PersonagemPyke->setNota(9);

    PersonagemPyke->mostrar();
    delete PersonagemPyke;

    cout << endl;

    cout << "O curador das areias!" << endl;
    personagens* PersonagemNasus = new personagens();
    PersonagemNasus->setNome("NASUS");
    PersonagemNasus->setLane("Top");
    PersonagemNasus->setAnoDeLancamento(2009);
    PersonagemNasus->setNota(7);

    PersonagemNasus->mostrar();
    delete PersonagemNasus;

    cout << endl;

    cout << "A fera das cem mordidas!" << endl;
    personagens* PersonagemNaafiri = new personagens();
    PersonagemNaafiri->setNome("NAAFIRI");
    PersonagemNaafiri->setLane("Mid");
    PersonagemNaafiri->setAnoDeLancamento(2023);
    PersonagemNaafiri->setNota(8);

    PersonagemNaafiri->mostrar();
    delete PersonagemNaafiri;

    cout << endl;

    cout << "A Crianca sombria!" << endl;
    personagens* PersonsagemAnnie = new personagens();
    PersonsagemAnnie->setNome("ANNIE");
    PersonsagemAnnie->setLane("Mid");
    PersonsagemAnnie->setAnoDeLancamento(2009);
    PersonsagemAnnie->setNota(7);

    PersonsagemAnnie->mostrar();
    delete PersonsagemAnnie;

    cout << endl;

    cout << "O rei destruido!" << endl;
    personagens* PersonagensViego = new personagens();
    PersonagensViego->setNome("VIEGO");
    PersonagensViego->setLane("Jungle");
    PersonagensViego->setAnoDeLancamento(2021);
    PersonagensViego->setNota(9);

    PersonagensViego->mostrar();
    delete PersonagensViego;

    cout << endl;

    cout << "A filha do vazio!" << endl;
    personagens* PersonagemKaisa = new personagens();
    PersonagemKaisa->setNome("KAISA");
    PersonagemKaisa->setLane("ADC");
    PersonagemKaisa->setAnoDeLancamento(2018);
    PersonagemKaisa->setNota(8);

    PersonagemKaisa->mostrar();
    delete PersonagemKaisa;

    cout << endl;

	return 0;
}
