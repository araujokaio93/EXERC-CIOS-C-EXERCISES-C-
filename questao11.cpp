 //Fa�a um algoritmo que leia os nomes de 10 alunos e armazene-os em um vetor. Em seguida, leia as cinco no -
//tas de cada um destes alunos referentes �s disciplinas (Portugu�s, Matem�tica, Biologia, F�sica e Qu�mica),
//respectivamente e armazene-as em uma matriz 10 x 5. Calcule e/ou mostre:

//a. a m�dia geral da turma;
//b. a m�dia das notas em cada disciplina. Crie uma estrutura para armazenar estas m�dias e poder acessar futuramente;
//c. a m�dia das notas de cada aluno aluno. Crie uma estrutura para armazenar estas m�dias e poder
//acessar futuramente;
//d. as notas de um determinado aluno em cada uma das disciplinas. Para isso, digite o nome do aluno
//desejado;
//e. o nome do aluno que obteve a maior nota na disciplina de F�sica;
//f. o nome do aluno com menor nota na disciplina de Portugu�s;
//g. o nome de todos os alunos que ficaram com m�dia acima da m�dia geral da turma;
//h. imprima a m�dia e situa��o de cada aluno, considerando:
//Aprovado: m�dia >= 60
//Reprovado: m�dia < 40
//Recupera��o: entre 40 e 59

#include <iostream>
#include <stdlib.h>
#include <clocale>
#include <string>
using namespace std;

int main(){
    setlocale (LC_ALL,(" "));
    //se��o de declara��o de vari�veis
    string vetNomes[10];
    double matNotas[10][5];
    double somamedia=0;
    double mediageral=0;
    double somamateria=0;
    double somaaluno=0;
    double mediaturmamateria[5];
    double mediaturmaaluno[10];
    double mediaMatall[10][1];
    double maiornotafisica=-1;
    double menornotafisica=101;
    double menornotaport=101;
    double maiornotaport=-1;
    int cl=0;
    int cc=0;
    int achounome=0;
    int achoumedia=0;
    int k=0;
    int j=0;
    string busca;

    //alimentando matriz e vetor.

    for (cl=0;cl<10;cl++){
        cout << ("Usu�rio, por favor , insira o nome dos alunos: ")<<endl;
        cin >>vetNomes[cl];
    }
    cout<<endl;

    system ("cls");
    for (cl=0;cl<10;cl++){
        cout << ("Usu�rio, os nomes dos alunos inseridos foram: ")<<vetNomes[cl]<<endl;
    }
    cout<<endl;

    for (cl=0;cl<10;cl++){
        somamedia=0;
        for (cc=0;cc<5;cc++){
            cout << ("Usu�rio, por favor, insira as notas dos alunos referentes as mat�rias de Portugu�s, Matem�tica , Biologia , F�sica e Qu�mica, nesta ordem. ")<<endl;
            cin >> matNotas[cl][cc];
            while ((matNotas[cl][cc]>100) or (matNotas[cl][cc]<0)){
                cout << ("\nUsu�rio, insira valores v�lidos para as notas. obs: se atenha ao m�nimo de zero e o m�ximo de 100.")<<endl;
                cin >> matNotas[cl][cc];
            }
            somamedia=matNotas[cl][cc]+somamedia;
            }
    }
    cout<<endl;

    system ("cls");
    for (cl=0;cl<10;cl++){
        for (cc=0;cc<5;cc++){
            }
            cout << ("Usu�rio, as Notas do Aluno: ")<<vetNomes[cl]<<(" ,inseridas foram: \nPortugu�s: ")<<matNotas[cl][0]<<(" pontos \nMatem�tica: ")<<matNotas[cl][1]<<(" pontos \nBiologia: ")<<matNotas[cl][2]<<(" pontos \nF�sica: ")<<matNotas[cl][3]<<(" pontos \nQu�mica: ")<<matNotas[cl][4]<<(" pontos\n")<<endl;
    }
    mediageral=(somamedia/10);
    cout <<endl;

    cout<<("Usu�rio, a m�dia geral da turma � de: ")<<mediageral<<(" pontos. ")<<endl;//a)m�dia geral da turma.
    for(cc=0;cc<5;cc++){
        somamateria=0;
        for (cl=0;cl<10;cl++){
            somamateria=matNotas[cl][cc]+somamateria;
            }
            mediaturmamateria[cc]=(somamateria/10);
    }
    cout<<endl;

    cout<< ("\nUsu�rio, a m�dia geral da turma em cada mat�ria �: \nPortugu�s: ")<<mediaturmamateria[0]<<(" pontos \nMatem�tica: ")<<mediaturmamateria[1]<<(" pontos \nBiologia: ")<<mediaturmamateria[2]<<(" pontos \nF�sica: ")<<mediaturmamateria[3]<<(" pontos \nQu�mica: ")<<mediaturmamateria[4]<<("")<<endl;
   //b)m�dia por mat�ria.
    for (cl=0;cl<10;cl++){
        somaaluno=0;
        for (cc=0;cc<5;cc++){
            somaaluno=matNotas[cl][cc]+somaaluno;
        }
        mediaturmaaluno[cl]=somaaluno/5;
    }
    cout<<endl;

    for (cl=0;cl<10;cl++){
    cout<< ("\nUsu�rio, a m�dia geral do Aluno: ")<<vetNomes[cl]<<(" � de ")<<mediaturmaaluno[cl]<<(" pontos ")<<endl;//c)m�dia por aluno.
    }
    cout<<endl;

    cout<<("\nUsu�rio, digite o nome do aluno que deseja pesquisar no vetor: ")<<endl;
    cin >> busca;
    cout<<endl;
    for (cl=0;cl<10;cl++){
            if (vetNomes[cl]==busca){
                achounome=1;
                cout << ("\nUsu�rio, o nome pesquisado foi encontrado na base de dados, sendo tal nome: ")<<busca<<(" com as seguintes notas:\nPortugu�s: ")<<matNotas[cl][0]<<(" pontos\nMatem�tica: ")<<matNotas[cl][1]<<(" pontos\nBiologia: ")<<matNotas[cl][2]<<(" pontos\nF�sica: ")<<matNotas[cl][3]<<(" pontos\nQu�mica: ")<<matNotas[cl][4]<<(" pontos.\n")<<endl;
                }
    }
    if (achounome==0) {
            cout << ("Usu�rio, o nome pesquisado N�O FOI ENCONTRADO na base de dados.")<<endl;//d)busca nome no vetor.
    }
    cout<<endl;
    for (cl=0;cl<10;cl++){
        for(cc=0;cc<4;cc++){
            if (maiornotafisica<matNotas[cl][3]){
                    maiornotafisica=matNotas[cl][3];
                    j=cl;
            }
        }
    }
    cout<<("\nUsu�rio, a maior nota na disciplina de F�sica � de: ")<<maiornotafisica<<(" pontos, pertecente ao aluno(a): ")<<vetNomes[j]<<("\n")<<endl;//e)maior nota em F�sica.
    for (cl=0;cl<10;cl++){
        for(cc=0;cc<1;cc++){
            if (menornotaport>matNotas[cl][0]){
                    menornotaport=matNotas[cl][0];
                    k=cl;
            }
        }
    }
    cout <<("\nUsu�rio, a menor nota na disciplina de Portugu�s � de: ")<<menornotaport<<(" pontos, pertecente ao aluno(a): ")<<vetNomes[k]<<("\n")<<endl;//e)menor nota em Portugu�s.
    cout <<endl;
    cout <<endl;
    for (cl=0;cl<10;cl++){
        if (mediaturmaaluno[cl]>mediageral){
            cout <<("Usu�rio, o aluno: ")<<vetNomes[cl]<<(" , obteve a m�dia de: ")<<mediaturmaaluno[cl]<<(" pontos, sendo tal m�dia superior � m�dia geral da turma: ")<<mediageral<<(" pontos.")<<endl;
            achoumedia=1;
        }
    }
    if (achoumedia==0){
        cout <<("Usu�rio, nenhum aluno obteve m�dia superior � media geral da turma. ")<<endl; //g)Alunos acima da m�dia geral.
    }
    cout<<endl;
    for(cl=0;cl<10;cl++){ //h) Situa��o final de todos os alunos.
        for(cc=0;cc<5;cc++){
                }
            if ((matNotas[cl][0]>=60) and (matNotas[cl][1]>=60) and (matNotas[cl][2]>=60) and (matNotas[cl][2]>=60) and (matNotas[cl][3]>=60) and (matNotas[cl][4]>=60))
                    {
                cout<<("\nUsu�rio, o aluno de nome: ")<<vetNomes[cl]<<(" , est� APROVADO, o aluno obteve a m�dia total de: ")<<mediaturmaaluno[cl]<<(" pontos, e as respectivas notas em: \nPortugu�s: ")<<matNotas[cl][0]<<(" pontos\nMatem�tica: ")<<matNotas[cl][1]<<(" pontos\nBiologia: ")<<matNotas[cl][2]<<(" pontos\nF�sica: ")<<matNotas[cl][3]<<(" pontos\nQu�mica: ")<<matNotas[cl][4]<<(" pontos\n")<<endl;
                    }
            else if ((matNotas[cl][0]>=40) and  (matNotas[cl][1]>=40) and  (matNotas[cl][2]>=40) and  (matNotas[cl][3]>=40) and (matNotas[cl][4]>=40))
                    {
                cout<<("\nUsu�rio, o aluno de nome: ")<<vetNomes[cl]<<(" , est� EM RECUPERA��O, o aluno obteve a m�dia total de: ")<<mediaturmaaluno[cl]<<(" pontos, e as respectivas notas em: \nPortugu�s: ")<<matNotas[cl][0]<<(" pontos\nMatem�tica: ")<<matNotas[cl][1]<<(" pontos\nBiologia: ")<<matNotas[cl][2]<<(" pontos\nF�sica: ")<<matNotas[cl][3]<<(" pontos\nQu�mica: ")<<matNotas[cl][4]<<(" pontos\n")<<endl;
                    }
            else{
                cout<<("\nUsu�rio, o aluno de nome: ")<<vetNomes[cl]<<(" , est� REPROVADO, o aluno obteve a m�dia total de: ")<<mediaturmaaluno[cl]<<(" pontos, e as respectivas notas em: \nPortugu�s: ")<<matNotas[cl][0]<<(" pontos\nMatem�tica: ")<<matNotas[cl][1]<<(" pontos\nBiologia: ")<<matNotas[cl][2]<<(" pontos\nF�sica: ")<<matNotas[cl][3]<<(" pontos\nQu�mica: ")<<matNotas[cl][4]<<(" pontos\n")<<endl;
            }

    }
    system ("PAUSE");
    return 0;
}


