#ifndef H_GERAIS
#define H_GERAIS
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include <wait.h>
#include <dirent.h>
#include <errno.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <math.h>
#define TRUE               1
#define FALSE              0
#define ERROR              0
#define OK                 1
#define TAM_MAX_BUFFER     1024
#define TAM_BIG_BUFFER     4*TAM_MAX_BUFFER
#define TAM_MAX_CAMPO      256
#define QTDE_MAX_CAMPOS    256
#define QTDE_MAX_CRITERIOS 512

typedef struct
{
  char campo[QTDE_MAX_CAMPOS][TAM_MAX_CAMPO+1];
} CAMPOS_STR;

int  converteEbcdic(char *bufferIn, char *bufferOut);
void dataNumerica(char *AAAAMMDD, int *ano, int *mes, int *dia);
void horaNumerica(char *HHMMSS, int *hora, int *minuto, int *segundo);
void longaDuracaoNumerica(char *HHHMMSS, int *hora, int *minuto, int *segundo);
int  numerico(char *campo);
//char *Hoje(void);
char *Inicio(void);
int  abreLog(char *nomeLog, int trunca);
void gravaLog(int fp_log, char *msg);
void gravaSoLog(int fp_log, char *msg);
int  tamanhoTerminal(char *terminal);
void strRight(char *saida,char *entrada,int qtde);
char identDelimitador(char *string);
void trocaDelimitador(char *string,char dlmAtual,char dlmNovo);
long tamanhoArquivo(FILE *arq);
long qtdeLinhas(FILE *arq);
long ultimaLinha(FILE *arq, char *linha);
void separaCampos(char *registro, char del, CAMPOS_STR *vetcampos, int qtdecampos);
void rtrim(char *string);
int  liberarTabelas(void);
void naoLiberarTabelas(void);
void quebraTerm(char *assA,char *prefixo);
int  aguardaProcessos(int qtdeMax, int qtdeAguardar,
                      int *contaFilhos, int fp_log, char *buffer);

int  descartaArquivo(char *fullpath);
void trim(char *string);
void limpezaGeral(char *dirSaida, int log, int qtdeMaxProcessos);
void limpezaParcial(char *okNok, char *dirSaida, int log, int qtdeMaxProcessos);
void limpezaPorRemessa(char *seqRemessa, char *dirSaida, int log, int qtdeMaxProcessos);
int  arquivoExiste(char *nomeArquivo);
int  regularFile(char *fullpath);
int recuperaQtdeProcessos(void);
#endif
