#include <gerais.h>
#include <sqlca.h>
#include "genericHashTable.h"

#define TLC 1
#define CAM 2
#define VIP 3
typedef struct
{
  char cCodEot[3 + 1];
  char cTipoEmp[1 + 1];
  char sigla_holding[3 + 1];

} hashEmpresa_t;


// VARIAVEIS
int nTipoEmpresa = 0;

char g_cEntrada[1024 + 1];
char g_cTemp[1042 + 1];
char g_cSaidaOk[1042 + 1];

void criaThread();
void *processaArquivo(void *paramThread);
void gravaErroRemu(char *atual, char *erro);
void buscaDiretorioExecucao();
void buscaArquivosProcessar();
//int validaHeader(char *buffer,char *nome,char *bank,int indic,char *chaveRet,int qtde,char *valor,int seq,char *dur,char *name, int *seq2);
int validaHeader(char *buffer, char *nome, char *bank, int indic, char *chaveRet, int qtde, char *valor, int seq, char *dur, char *name, int *seq2, char *tip_rem);
//Banco
void logInDatabase(char *conexao);
void logInDatabase1(char *conexao, char *banco);
void logOutDatabase(char *conexao);
int escreveSQLErro(struct sqlca sqlca, char *msg);
int atualizaStatusTabela(int seqConv, int codErro);     // Atualiza os status na tabela t_conv_carga
int ValidaProgramas();
int finalizaSemaforo();
void buscaListaEmail();
int buscaTarifaTLC(char *assinanteB, char *cDataChamada, char *cValorTarifa, char *cEotO, char *cEotD, char *cGh);
int buscaTarifaTLCPRE(char *assinanteB, char *cDataChamada, char *cValorTarifa, char *cEotO, char *cEotD, char *cGh);
int buscaTarifaCAM_UF(char *cnAssA, char *codNat, char *cDataChamada, char *cValorTarifa, char *tpDestino);
int executaChamada(const char * strComando);
int mascaraCampoValor(char *par_valor, char *par_mascaraValor, char *par_mascaraSaida, char *par_retorno);
void inverteString(char *par_str);
int carregaEmpresa();
void calculaDurTarifada( char *durReal, char *durTar);
void calculaDurTarifadaDestFixo( char *durReal, char *durTar);
void retiraCaractere(const char *par_strBufferEntrada, const char par_cCaractere, char *par_strBufferSaida);

int atualizaConvCarga();

// Mutex
void inicializaMutex(pthread_mutex_t Mutex);
void destroiMutex(pthread_mutex_t Mutex);

// FUNCOES AUXILIARES ...
char *hoje(char *AAAAMMDD);
char *hoje1(char *AAAAMMDD);
char *agora(char *HHMMSS);
char *agora1(char *HHMMSS);
int dirName (char *dir, char *arqIn);
