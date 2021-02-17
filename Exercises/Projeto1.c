/*
 ============================================================================
 Name        : Projeto1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

extern int SOMA(int aa, int bb);
extern int SOMA_V(int *a, int n);
extern int SOMA_V2(int *a, long int n);
extern int F3EX3B(char *a4, char aa4);
extern int F3EX4B(int vEX4Bint, long int vEX4Blongint, int dimEX4B);
extern int POS1msb(long int n4);
extern int NCAP(int testn2);
extern void bitchanges();
extern int fourxintab(int *vec, int tamv, int a, int b);
extern int F3EX7D(int *vec1, int *vec2, int dim);
extern int F4EX4A(int *v);
extern int CheckRange(int lim, int tam, int *seq);
extern unsigned int CountCommon(unsigned int N, int *seq_A, unsigned int M, int *seq_B);
extern int Calculator(unsigned int N, char *seq_OP, int *seq_BB, int *seq_AA);
extern int power(int base, int exp);
extern double VFEX1A(double B, double M, double N);
extern double VFEX1B(int m, double n);
extern float VFEX2A(float a, float b, float c, float d);
extern double VFEX2B(double raio);
extern double prodint(float *X, float *Y, int n);
extern long interval_counter(float *V, long n, float a, float b);
extern double cosseno(double x);
extern double func(double graus);
extern void somaV(float *P, float *Q, float *R, int n);
extern void altV(float *P, int n, float k);
extern long int prodintV(int *R, int *S, int n);
extern long int conta_ocorr(char *V, long int n, char val);
extern void eStep(unsigned int N, float *seq_P , unsigned int M, double *seq_C, unsigned int *seq_Out);
extern void incsatV(int *Z, int n, int x);
extern double normV(double *ptV, long int n);
extern int t4 ( int v [] , unsigned int n ) ;
int vect [4] = { -17, 11, 71, -5};
int vect1 [4] = { -20, 21, 50, 8};
extern unsigned long collatz(unsigned long n);
int main(void) {

	//int a = 5;
	//int b = 10;
	//int ca = 0;
	//ca = SOMA( a, b);
	//printf("A soma é %d\n", ca);
	//return EXIT_SUCCESS;
//FICHA 1
//1a
	/*int dim = 5;
	int v[] = {3, -1, 8, 0, -3}; // Para testar
	int res;
	res = SOMA_V(v, dim);
	printf("Soma dos elementos = %d\n", res);*/
//1b
	/*int dim2 = 5;
	long int b[] = {3, -1, 8, 0, -3}; // Para testar
	int res2;
	res2 = SOMA_V2(b, dim2);
	printf("Soma dos elementos2 = %d\n", res2);*/
//3b
//	char frase2[] = "frasedeteste2";
	/*char caracter = 't';
	int resF3EX3B;
	resF3EX3B = F3EX3B(frase2, caracter);
	printf("Quantos carateres? %d\n", resF3EX3B);*/
//4b
	/*int dimEX4B = 5;
	int vEX4Bint[] = {3, -1, 400000, 0, -3};
	long int vEX4Blongint[] = {0, 0, 0, 0, 0};
	F3EX4B(vEX4Bint, vEX4Blongint, dimEX4B);
	printf("##########\n");
	printf("NOVO VETOR\n");
	for(int j = 0; j < dimEX4B; j++) {
			printf("%d ", vEX4Blongint[j]);
	}*/
//5a
	/*long int testn = 1024;
	int res6;
	res6 = POS1msb(testn);
	printf("\nA posição do primeiro 1 é = %d\n", res6);*/
//5c
	/*int testn2 = 2147483649;
	int res7;
	res7 = NCAP(testn2);
	printf("Capicua? %d\n", res7);*/
//6
//	bitchanges();

//Exercício semanal
	/*int vecint[]= {40, 5, 3, 12, 13, 21};
	int tamvec = 6;
	int inflim2 = 13;
	int suplim2 = 84;
	int fourxintabresult = fourxintab(vecint, tamvec, inflim2, suplim2);
	printf("fourxintabresult = %d\n", fourxintabresult);*/
// para este exemplo fourxintabresult = 4

//7d
	/*int dimF3EX7D = 5;
	//int v1dimF3EX7D[] = {3, -1, 40, 0, -3};
    //int v2dimF3EX7D[] = {3, .1, 4, 0, 1};
	int v1dimF3EX7D[] = {-3, -1, -4, 0, -3};
    int v2dimF3EX7D[] = {3, 1, 4, 0, 1};
    int resF3EX7D;
    resF3EX7D = F3EX7D(v1dimF3EX7D, v2dimF3EX7D, dimF3EX7D);
    printf("O produto interno é %d\n", resF3EX7D);*/

//7e


//Exercício semanal
    /*int limiar = 20;
    int tamanho = 8;
    int ve[] = {7, -8, -23, 56, 20, -10, 0, 40};
    int resto;

    resto = CheckRange(limiar, tamanho, ve);
    printf("Foram modificados %d elementos da sequencia ve[]", resto);*/
// para o exemplo fornecido o output deve indicar que foram alterados 3 elementos
// no final da execuçao a sequencia ve[] = {7, -8, -20, 20, 20, -10, 0, 20} (podem verificar
//o seu conteúdo durante a execução em modo debug)


//exercicio semanal

    /*unsigned int tamA = 8, tamB = 3;
    int vectA[] = {7, -8, -5, -2, -5, -2, 40, 7};
    int vectB[] = {5, 7, -2};
    unsigned int res27;
    res27 = CountCommon(tamA, vectA, tamB, vectB);
    printf("Número de elementos de vectA[] em vectB[]: %u\n", res27);

   // para o exemplo fornecido, o número de elementos indicado na mensagem é 4.

   //Exercício semanal

    //printf("rseultado %d", power(2, 3));

    /*unsigned int sizeee =6;
    int vectAA[] = {13, 2, 8, 4, 5, 25};
    int vectBB[] = {1, 2, 3, 0, 1, -25}; // sem overflow : exemplo (a)
    // int vectBB[] = {9, 2, 3, 0, 1, -25}; // com overflow  : exemplo (b);
    char vectOP[] = {'P', '+', 'P', '*', '-', '+'};

    int execucao = Calculator(sizeee, vectOP, vectBB, vectAA);
    int i;
    if (execucao){
        printf("Overflow na operação %d\n", execucao);
        for (i = 1; i < execucao; i++)
            printf("elemento %d resultado = %d\n", i, vectAA[i-1]);}
    else
        for (i = 1; i <= sizeee; i++)
            printf("elemento %d resultado = %d\n", i , vectAA[i-1]);*/


//FICHA PILHA
	//4A
	/*char fraseF4EX4A[] = "frasedeteste2";
	printf("ANTES = %s\n", fraseF4EX4A);
	F4EX4A(fraseF4EX4A);
	printf("DEPOIS = %s\n", fraseF4EX4A);
	*/

//FICHA VIRGULA FLUTUANTE

	//1A
	/*double B = 7.8 , M = 3.6 , N = 7.1;
	double P = -M * ( N + B );
	double res = VFEX1A(B, M, N);
	printf("resultado %d", res);
	printf("resultado %d", P);*/

	//1B
	/*int W = 7; double X = 7.1;
	//double Y = sqrt( X ) + W;
	double res = VFEX1B(W, X);
	printf("resultado %d", res);*/

	//2A
	/*float A = 5.3, B = 3.1, C = 3.3, D = 7.9;
	float res;
	res = VFEX2A(A, B, C, D);
	printf("%f", res);*/

	//2B
	/*double raio = 3.2;
	double result;
	result = VFEX2B(raio);
	printf("%f", result);*/

	//5
	/*int size = 3;
	float a[] = {3.5, 0.9, -2.1};
	float b[] = {4.3, 0.1, 3.7};
	double res;
	res = prodint(a, b, size);
	printf("%f", res);*/

	//6

    /*float vec[] = {1.2, -1.3, 10.5};
    int n = 4;
    float a = 1.3;
    float b = 4.4;
    long int res;
    res = interval_counter(vec, n, a, b);
    printf("%d %d\n", res);*/

    //9

    /*double cos = cosseno(1.57);
    printf("%f\n", cos);*/

    /*double result;
    double x = 0;
    result = func(x);
    printf("Valor\tResultado\n");
    for (float i = 1.0; i<= 90.0; i++) {
    	x = 0 + i;
    	result = func(x);
    	printf("100 + 50 * cosseno[%d] = %f\n", i, result);
    }*/
//FUCHA SIMD

	//1a
	/*float PFSIMDFEX1A[] = {3.4, 5.3, -1.0, -2.1, 3.4, 5.3, -1.0, -2.1, 3.4, 5.3, -1.0, -2.1, 3.4, 5.3, -1.0, -2.1};
	float QFSIMDFEX1A[] = {1.4, 1.3, 1.0, 1.1, 1.4, 1.3, 1.0, 1.1, 1.4, 1.3, 1.0, 1.1, 1.4, 1.3, 1.0, 1.1};
	float RFSIMDFEX1A[] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
	int NFSIMDFEX1A = 16;
	somaV(PFSIMDFEX1A, QFSIMDFEX1A, RFSIMDFEX1A, NFSIMDFEX1A);
	for (int i = 0; i < 16; i++) {
		printf ("R[%d]= %f\n",i, RFSIMDFEX1A[i]);
	}*/

	//1b
  	/*float PFSIMDFEX1B[] = { 3.4, 5.3, -1.0, -2.1, 3.4, 5.3, -1.0, -2.1, 3.4, 5.3, -1.0, -2.1, 3.4, 5.3, -1.0, -2.1};
  	int NFSIMDFEX1B = 16;
  	float KFSIMDFEX1B = 2.0;
  	altV(PFSIMDFEX1B, NFSIMDFEX1B, KFSIMDFEX1B);
  	for(int i = 0; i < 16; i++) {
  	  	 	  printf("R[%d]= %f\n",i, PFSIMDFEX1B[i]);
  	  	 	}*/

	//2
	/*int RFSIMDFEX2[] = { 3, 5, 1, 1, 3, 5, 1, 1, 3, 5, 1, 1, 3, 5, 1, 1};
	int SFSIMDFEX2[] = { 2, 3, 1, 1, 2, 3, 1, 1, 2, 3, 1, 1, 2, 3, 1, 1};
    int NFSIMDFEX2 = 16;
    long int pro = 0;
    pro = prodintV(RFSIMDFEX2, SFSIMDFEX2, NFSIMDFEX2);
    printf("Produto interno = %ld\n", pro);*/


	//3
 	/*char VFSIMDFEX3[] = "frasedeteste21sd";
    long int NFSIMDFEX3 = 16;
    char VALFSIMDFEX3 = 'd';
    long int RESFSIMDFEX3 = 0;
    RESFSIMDFEX3 = conta_ocorr(VFSIMDFEX3, NFSIMDFEX3,VALFSIMDFEX3);
    printf("Elementos encontrados = %d\n", RESFSIMDFEX3);*/


	//exercicio semanal


	/*unsigned int N = 5, M = 3;
	float seq_P[] = {-3.1, 0, 2.5, -2, 3, 2, 0.5, 1, -5, -1};
	double seq_C[] = {-2, -2, 0, 0, 2, 2};
	unsigned int seq_Out[N];

	eStep(N, seq_P, M, seq_C, seq_Out);

	for(int i = 0; i < N; i++){
		printf("O ponto %d da seq_P (%f, %f) tem como ponto da seq_C mais próximo o ponto de índice %d (%f, %f)\n",
				i, seq_P[i*2], seq_P[i*2 + 1], seq_Out[i], seq_C[seq_Out[i]*2], seq_C[seq_Out[i]*2 + 1]);
		}

		// Neste exemplo a sequência seq_Out deveria passar a conter {0, 1, 2, 1, 0} após a execução da sub-rotina
*/

//EX4
	/*int zf[8] __attribute__((aligned(16))) = { 0x7FFFFFFF, 0x80000000, 0x7FFFFF00, 0x7FFFFFF0, 0x8000003, 0x80000009, 0x7FF00000, -3};
	int wf[8] __attribute__((aligned(16))) = { 0x7FFFFFFF, 0x80000000, 0x7FFFFF00, 0x7FFFFFF0, 0x8000003, 0x80000009, 0x7FF00000, -3};
	incsatV(zf, 8, 32);
	for (int i=0; i<8; i++)
			printf("%d (0x%08X) ", zf[i], zf[i]);
		puts("");
	incsatV(wf, 8, -32);
	for (int i=0; i<8; i++)
			printf("%d (0x%08X) ", wf[i], wf[i]);
		puts("");
	 */

//EX6
/*	double ptVFSIMDFEX6[] = { 3.4, 5.3, -1.0, -2.1};
	long int NFSIMDFEX6 = 4;
    double RFSIMDFEX6 = 0.0;
    RFSIMDFEX6 = normV(ptVFSIMDFEX6,NFSIMDFEX6);
	printf("Norma do vector = %f\n", RFSIMDFEX6);
*/
	/*int tt4 = t4 ( vect , vect1);
	printf("Norma do vector = %f\n", tt4);*/

	printf (" Resultado : %ld\n", collatz (10) ) ;


    return EXIT_SUCCESS;

}
