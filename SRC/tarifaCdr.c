
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    "tarifaCdr.pc"
};


static unsigned int sqlctx = 316683;


static struct sqlexd {
   unsigned long  sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
   unsigned char  **sqphsv;
   unsigned long  *sqphsl;
            int   *sqphss;
            short **sqpind;
            int   *sqpins;
   unsigned long  *sqparm;
   unsigned long  **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
            int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
   unsigned char  *sqhstv[8];
   unsigned long  sqhstl[8];
            int   sqhsts[8];
            short *sqindv[8];
            int   sqinds[8];
   unsigned long  sqharm[8];
   unsigned long  *sqharc[8];
   unsigned short  sqadto[8];
   unsigned short  sqtdso[8];
} sqlstm = {13,8};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

#define SQLCODE sqlca.sqlcode

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4274,31,0,0,
5,0,0,1,0,0,17,268,0,0,1,1,0,1,0,1,97,0,0,
24,0,0,1,0,0,45,276,0,0,0,0,0,1,0,
39,0,0,1,0,0,13,282,0,0,3,0,0,1,0,2,97,0,0,2,97,0,0,2,97,0,0,
66,0,0,2,167,0,4,821,0,0,3,2,0,1,0,2,97,0,0,1,97,0,0,1,97,0,0,
93,0,0,3,368,0,4,863,0,0,8,7,0,1,0,2,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,
0,1,97,0,0,1,97,0,0,1,97,0,0,
140,0,0,4,167,0,4,923,0,0,3,2,0,1,0,2,97,0,0,1,97,0,0,1,97,0,0,
167,0,0,5,368,0,4,965,0,0,8,7,0,1,0,2,97,0,0,1,97,0,0,1,97,0,0,1,97,0,0,1,97,0,
0,1,97,0,0,1,97,0,0,1,97,0,0,
214,0,0,6,39,0,4,1005,0,0,1,0,0,1,0,2,97,0,0,
233,0,0,7,157,0,4,1027,0,0,1,0,0,1,0,2,3,0,0,
252,0,0,8,123,0,4,1052,0,0,2,0,0,1,0,2,3,0,0,2,3,0,0,
275,0,0,9,104,0,3,1070,0,0,1,1,0,1,0,1,97,0,0,
294,0,0,10,0,0,29,1081,0,0,0,0,0,1,0,
309,0,0,11,140,0,4,1102,0,0,1,0,0,1,0,2,3,0,0,
328,0,0,12,111,0,5,1128,0,0,1,1,0,1,0,1,97,0,0,
347,0,0,13,0,0,29,1139,0,0,0,0,0,1,0,
362,0,0,14,94,0,5,1172,0,0,1,1,0,1,0,1,97,0,0,
381,0,0,15,0,0,29,1183,0,0,0,0,0,1,0,
396,0,0,16,64,0,4,1199,0,0,2,0,0,1,0,2,97,0,0,2,97,0,0,
419,0,0,0,0,0,27,1220,0,0,4,4,0,1,0,1,97,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
450,0,0,18,59,0,1,1224,0,0,0,0,0,1,0,
465,0,0,0,0,0,27,1252,0,0,4,4,0,1,0,1,97,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
496,0,0,20,59,0,1,1255,0,0,0,0,0,1,0,
511,0,0,21,0,0,31,1267,0,0,0,0,0,1,0,
526,0,0,22,161,0,5,1629,0,0,3,3,0,1,0,1,4,0,0,1,4,0,0,1,3,0,0,
553,0,0,23,0,0,29,1637,0,0,0,0,0,1,0,
};


#line 1 "tarifaCdr.pc"
/* -----------------------------------------------------------------
 *       (c) COPYRIGHT 2012 - CLEARTECH

 *       ALL RIGHTS RESERVED - TODOS OS DIREITOS RESERVADOS
 *       CONFIDENTIAL, UNPUBLISHED PROPERTY OF CLEARTECH
 *       PROPRIEDADE CONFIDENCIAL NAO PUBLICADA DA CLEARTECH Ltda.

 *       A CLEARTECH nao se responsabiliza pelo uso indevido de seu codigo.
-------------------------------------------------------------------- */
/*********************************************************************
                                ---     Sistema Tarifação Cobilling ---
                                  Calcula o valor liquido da cdr.
     $Author: Luciano Soares Mariote / Fabio Reis
     $Data:       27/08/2012 16:15:00 PM
 *********************************************************************/

#define VERSAO "2.0.0 - 09/07/2018"


/*
QUEM?               QUANDO?            VERSAO?         O QUE?
*************************************************************************************************************************
Tiago Gennari       18/07/2016         1.0.0           * Início do versionamento do tarifaCdr
                                                       * Passa a sair do programa se não encontrar a tarifa no banco para cambridge
 */

 
#include <tarifaCdr.h>
#include <pthread.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sched.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <wchar.h>
#include <sys/wait.h>
#include <sqlca.h>
#include <oraca.h>

#define QTDE_MAX_THREADS_DEFAULT 35

/* EXEC SQL BEGIN DECLARE SECTION; */ 
#line 46 "tarifaCdr.pc"

  char dbNomeBanco[100];
/* EXEC SQL END DECLARE SECTION; */ 
#line 48 "tarifaCdr.pc"


char auxNumThread[50];
char qntdeThread[BUFSIZ];

// Agora todos os logs passam a ter mais de um
char dirLogF[BUFSIZ];
char dirPrincipal[BUFSIZ];
long long seqRemessaVal[6999999];
long long seqRemessaDurTar[6999999];

char listaEmail[1024];
char bancoxx[200];
char dbDirEtc[100 + 1];

int listaBanco = 0;

int QTDE_MAX_THREADS, fp_log_filho_erro;
FILE *fdirThread;

// Variaveis utilizadas na Thread
int flagThread[99];
long qtdeFinal = 0;
long qtdeThreadsTerminadas = 0;
char dataC[11 + 1];
char horaC[8 + 1];
char DATABASE[BUFSIZ];

pthread_mutex_t MutexThread;
pthread_mutex_t MutexVariavel;
pthread_mutex_t MutexBD;

hashtable_t *hashEmpresa = NULL;

// ****************************** FUNCTION MAIN **********************************
// *******************************************************************************

int main (int argc, char **argv)
{
	int fp_numThread = 0;

	char strRascunho[1024];
	char email[BUFSIZ];

	// Inicializa as variaveis ...
	memset(auxNumThread,0,sizeof(auxNumThread));
	memset(qntdeThread,0,sizeof(qntdeThread));
	memset(dirPrincipal,0,sizeof(dirPrincipal));
	memset (seqRemessaVal,0,sizeof(seqRemessaVal));
  memset (seqRemessaDurTar,0,sizeof(seqRemessaDurTar));
  
  

	printf("PROGRAMA DE TARIFACAO INICIALIZADO COM SUCESSO !!!\n");
	printf("Versao [%s]\n\n", VERSAO);
	fflush(stdout);

	// inicializa os Mutex...
	inicializaMutex(MutexThread);
	inicializaMutex(MutexVariavel);
	inicializaMutex(MutexBD);

	// Lendo argumentos de entrada
	if(argc != 3)
	{
		fprintf(stderr, "Sintaxe : %s \n"
				"1. <Banco a ser conectado.>\n"
				"2. <Diretorio raiz de Log.>\n",argv[0]);
		exit(1);
	}

	// recebendo os parametros ...
	strcpy(DATABASE,argv[1]);
	strcpy(dirLogF,argv[2]);
	dirName(dirPrincipal,dirLogF);


  if(strstr(dirLogF, "/1d/cobilling/c65") != NULL)
	{
		nTipoEmpresa = TLC;
	}
	else if(strstr(dirLogF, "/1d/cobilling/c75") != NULL)
	{
		nTipoEmpresa = VIP;
	}	
	else
	{
		printf("Erro ao determinar a empresa de execução: c65 ou c75.");
		exit(1);
	}


	// Conecta no Banco ...
	logInDatabase(DATABASE);

	// busca lista para emails ...
	buscaListaEmail();
	buscaDiretorioExecucao();

	// Carrega em memoria a tabela t_empresa
	carregaEmpresa();


	// recebe a data e a hora corrente para as threads utilizarem ...
	hoje(dataC);
	agora(horaC);

	// Le arquivo com o numero de threads
	sprintf(qntdeThread,"%s/tarifaCdr.npf",dbDirEtc);
	if((fdirThread=fopen(qntdeThread,"r"))==NULL)
	{
		printf("\n- Arquivo com o numero de Threads nao encontrado. Valor default: 10 threads.\n");
		// Cria o arquivo com o numero default de Threads ...
		if ((fp_numThread = open(qntdeThread, O_WRONLY|O_TRUNC|O_CREAT|O_SYNC, 0666)) < 0)
		{
			printf("Erro  na criacao do arquivo %s/tarifaCdr.npf\n",dbDirEtc);
			exit(1);
		}
		write(fp_numThread,"10\n",3);
		close(fp_numThread);
		QTDE_MAX_THREADS=QTDE_MAX_THREADS_DEFAULT;
	}
	else
	{
		fgets(auxNumThread, 10, fdirThread);
		QTDE_MAX_THREADS=atoi(auxNumThread);
		// maximo de 95 threads
		if(QTDE_MAX_THREADS==1)
			QTDE_MAX_THREADS=2;
		if(QTDE_MAX_THREADS>95)
		{
			printf("\n Assumindo o valor maximo de Threads permitido: 95.\n");
			QTDE_MAX_THREADS=95;
		}
		fclose(fdirThread);
	}


	printf("\n\n *************************************************************\n");
	printf("\n Verificando condicoes para inicializar as quebras ...\n");
	if(ValidaProgramas())
	{
		// Finaliza o programa pois tem algum outro sendo executado que o impede de rodar ...
		printf("\n PROGRAMA FINALIZADO COM ERRO na FUNCAO QUE VALIDA A EXECUCAO ...\n");

		// envia um email avisando ...
		sprintf(email,"echo \"PROGRAMA FINALIZADO COM ERRO NA FUNCAO QUE VALIDA A EXECUCAO - %s. \"| mailx -s \"TARIFACAO CDR - PROGRAMA FINALIZADO COM ERRO - %s .\" %s",DATABASE,DATABASE,listaEmail);

		system(email);
		exit(1);
	}


	// Obtendo o diretorio de entrada ...
	sprintf(g_cEntrada,"%s/quebra/E/ARQ", dirPrincipal);

	// criando os diretorios ...
	sprintf(g_cTemp,"%s/tarifa_cdr/E/temporario", dirPrincipal);

	sprintf(strRascunho,"mkdir -p %s %s/tarifa_cdr/E ", g_cTemp, dirLogF);
	system(strRascunho);

	printf("\n\n *************************************************************\n");
	printf("\n Tarifando as cdrs ...\n\n");

	// Desconecta no banco de dados
	//logOutDatabase("connTarCdr");


	// Funcao para criar as threads ...
	criaThread();

	// Conecta no banco de dados
	logInDatabase(bancoxx);
	

	// atualiza a tabela t_conv_carga com os valores calculados
	if(atualizaConvCarga())
	{
		// Finaliza o programa pois tem algum outro sendo executado que o impede de rodar ...
		printf("\n PROGRAMA FINALIZADO COM ERRO na FUNCAO QUE ATUALIZA A TABELA T_CONV_CARGA ...\n");

		// envia um email avisando ...
		sprintf(email,"echo \"PROGRAMA FINALIZADO COM ERRO NA FUNCAO QUE ATUALIZA A TABELA T_CONV_CARGA - %s. \"| mailx -s \"TARIFACAO CDR - PROGRAMA FINALIZADO COM ERRO - %s .\" %s",DATABASE,DATABASE,listaEmail);

		system(email);
		exit(1);
	}


	// funcao responsavel por atualizar o semaforo ...
	finalizaSemaforo();

  close(fp_log_filho_erro);


  //Destroi o Mutex e finaliza a thread
  destroiMutex(MutexThread);
  destroiMutex(MutexVariavel);
  destroiMutex(MutexBD);
  printf("\n\n\n PROGRAMA FINALIZADO COM SUCESSO !!!\n\n");
  exit(0);
}

int carregaEmpresa()
{

  int tam;

  char cEotEmp[10 + 1];
  char cTipoEmp[10 + 1];
  char db_cComando[1024 + 1];
  char sigla_holding[3 + 1];
 
  hashEmpresa = ht_create(5000);
  hashEmpresa_t *itemHashEmpresa = NULL;

  // Comando select ...
  sprintf(db_cComando, "SELECT cod_eotemp, tip_empresa, sigla_holding FROM t_empresa where REGEXP_LIKE(cod_eotemp , '[A-Z0-9]{3}')");

  /* EXEC SQL PREPARE pEots FROM :db_cComando; */ 
#line 268 "tarifaCdr.pc"

{
#line 268 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 268 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 268 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 268 "tarifaCdr.pc"
  sqlstm.arrsiz = 1;
#line 268 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 268 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 268 "tarifaCdr.pc"
  sqlstm.stmt = "";
#line 268 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )1;
#line 268 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )5;
#line 268 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 268 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 268 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 268 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 268 "tarifaCdr.pc"
  sqlstm.sqhstv[0] = (unsigned char  *)db_cComando;
#line 268 "tarifaCdr.pc"
  sqlstm.sqhstl[0] = (unsigned long )1025;
#line 268 "tarifaCdr.pc"
  sqlstm.sqhsts[0] = (         int  )0;
#line 268 "tarifaCdr.pc"
  sqlstm.sqindv[0] = (         short *)0;
#line 268 "tarifaCdr.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 268 "tarifaCdr.pc"
  sqlstm.sqharm[0] = (unsigned long )0;
#line 268 "tarifaCdr.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 268 "tarifaCdr.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 268 "tarifaCdr.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 268 "tarifaCdr.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 268 "tarifaCdr.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 268 "tarifaCdr.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 268 "tarifaCdr.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 268 "tarifaCdr.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 268 "tarifaCdr.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 268 "tarifaCdr.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 268 "tarifaCdr.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 268 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 268 "tarifaCdr.pc"
}

#line 268 "tarifaCdr.pc"

  if (escreveSQLErro(sqlca, "ERRO NO PREPARE DA TABELA t_empresa.") == 0)
    return 1;

  /* EXEC SQL DECLARE pLinhasEots CURSOR FOR pEots; */ 
#line 272 "tarifaCdr.pc"

  if (escreveSQLErro(sqlca, "ERRO NO DECLARE DA TABELA t_empresa.") == 0)
    return 1;

  /* EXEC SQL OPEN pLinhasEots; */ 
#line 276 "tarifaCdr.pc"

{
#line 276 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 276 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 276 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 276 "tarifaCdr.pc"
  sqlstm.arrsiz = 1;
#line 276 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 276 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 276 "tarifaCdr.pc"
  sqlstm.stmt = "";
#line 276 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )1;
#line 276 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )24;
#line 276 "tarifaCdr.pc"
  sqlstm.selerr = (unsigned short)65535;
#line 276 "tarifaCdr.pc"
  sqlstm.sqlpfmem = (unsigned int  )0;
#line 276 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 276 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 276 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 276 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 276 "tarifaCdr.pc"
  sqlstm.sqcmod = (unsigned int )0;
#line 276 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 276 "tarifaCdr.pc"
}

#line 276 "tarifaCdr.pc"

  if (escreveSQLErro(sqlca, "ERRO NO OPEN DA TABELA t_empresa.") == 0)
    return 1;

  while (1)
  {
    /* EXEC SQL FETCH pLinhasEots INTO :cEotEmp, :cTipoEmp, :sigla_holding; */ 
#line 282 "tarifaCdr.pc"

{
#line 282 "tarifaCdr.pc"
    struct sqlexd sqlstm;
#line 282 "tarifaCdr.pc"
    sqlorat((void **)0, &sqlctx, &oraca);
#line 282 "tarifaCdr.pc"
    sqlstm.sqlvsn = 13;
#line 282 "tarifaCdr.pc"
    sqlstm.arrsiz = 3;
#line 282 "tarifaCdr.pc"
    sqlstm.sqladtp = &sqladt;
#line 282 "tarifaCdr.pc"
    sqlstm.sqltdsp = &sqltds;
#line 282 "tarifaCdr.pc"
    sqlstm.iters = (unsigned int  )1;
#line 282 "tarifaCdr.pc"
    sqlstm.offset = (unsigned int  )39;
#line 282 "tarifaCdr.pc"
    sqlstm.selerr = (unsigned short)65535;
#line 282 "tarifaCdr.pc"
    sqlstm.sqlpfmem = (unsigned int  )0;
#line 282 "tarifaCdr.pc"
    sqlstm.cud = sqlcud0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 282 "tarifaCdr.pc"
    sqlstm.sqlety = (unsigned short)4352;
#line 282 "tarifaCdr.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqfoff = (         int )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqfmod = (unsigned int )2;
#line 282 "tarifaCdr.pc"
    sqlstm.sqhstv[0] = (unsigned char  *)cEotEmp;
#line 282 "tarifaCdr.pc"
    sqlstm.sqhstl[0] = (unsigned long )11;
#line 282 "tarifaCdr.pc"
    sqlstm.sqhsts[0] = (         int  )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqindv[0] = (         short *)0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqinds[0] = (         int  )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqharm[0] = (unsigned long )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqadto[0] = (unsigned short )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqtdso[0] = (unsigned short )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqhstv[1] = (unsigned char  *)cTipoEmp;
#line 282 "tarifaCdr.pc"
    sqlstm.sqhstl[1] = (unsigned long )11;
#line 282 "tarifaCdr.pc"
    sqlstm.sqhsts[1] = (         int  )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqindv[1] = (         short *)0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqinds[1] = (         int  )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqharm[1] = (unsigned long )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqadto[1] = (unsigned short )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqtdso[1] = (unsigned short )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqhstv[2] = (unsigned char  *)sigla_holding;
#line 282 "tarifaCdr.pc"
    sqlstm.sqhstl[2] = (unsigned long )4;
#line 282 "tarifaCdr.pc"
    sqlstm.sqhsts[2] = (         int  )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqindv[2] = (         short *)0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqinds[2] = (         int  )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqharm[2] = (unsigned long )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqadto[2] = (unsigned short )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqtdso[2] = (unsigned short )0;
#line 282 "tarifaCdr.pc"
    sqlstm.sqphsv = sqlstm.sqhstv;
#line 282 "tarifaCdr.pc"
    sqlstm.sqphsl = sqlstm.sqhstl;
#line 282 "tarifaCdr.pc"
    sqlstm.sqphss = sqlstm.sqhsts;
#line 282 "tarifaCdr.pc"
    sqlstm.sqpind = sqlstm.sqindv;
#line 282 "tarifaCdr.pc"
    sqlstm.sqpins = sqlstm.sqinds;
#line 282 "tarifaCdr.pc"
    sqlstm.sqparm = sqlstm.sqharm;
#line 282 "tarifaCdr.pc"
    sqlstm.sqparc = sqlstm.sqharc;
#line 282 "tarifaCdr.pc"
    sqlstm.sqpadto = sqlstm.sqadto;
#line 282 "tarifaCdr.pc"
    sqlstm.sqptdso = sqlstm.sqtdso;
#line 282 "tarifaCdr.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 282 "tarifaCdr.pc"
}

#line 282 "tarifaCdr.pc"

    if (escreveSQLErro(sqlca, "Erro ao executar o Fech na tabela t_empresa.") == 0)
      return 1;

    if (SQLCODE != 0)
      break;

    // valida se o campo cEotEmp tem apenas 3 bytes.
    rtrim(cEotEmp);
    tam = strlen(cEotEmp);
    if (tam != 3)
    {
      printf("Erro. eot cadastrada na tabela t_empresa diferente de 3 bytes. <%s>\n", cEotEmp);
      return 1;
    } 

    // valida se o campo cTipoEmp tem apenas 1 byte.
    rtrim(cTipoEmp);
    tam = strlen(cTipoEmp);
    if (tam != 1)
    {
      printf("Erro. eot cadastrada na tabela t_empresa diferente de 1 byte. <%s>\n", cTipoEmp);
      return 1;
    }

    itemHashEmpresa = (hashEmpresa_t*)malloc(sizeof(hashEmpresa_t));
    memset(itemHashEmpresa, 0, sizeof(itemHashEmpresa));

    sprintf(itemHashEmpresa->cCodEot, "%3.3s", cEotEmp);
    sprintf(itemHashEmpresa->cTipoEmp, "%1.1s", cTipoEmp);
    sprintf(itemHashEmpresa->sigla_holding, "%3.3s", sigla_holding);

    ht_put(hashEmpresa, cEotEmp, itemHashEmpresa);
  }

  return 0;
}

// ---Funcao principal do processo de sumarizacao ---
void criaThread()
{
  pthread_t threads[99];

  DIR* dirAberto = NULL;
  struct dirent *leDiretorio = NULL;

  char parametro[TAM_MAX_BUFFER + 1];
  char dataLog[8 + 1];
  char horaLog[6 + 1];
  char strRascunho[TAM_MAX_BUFFER + 1];
  char message[TAM_MAX_BUFFER + 1];

  int auxQtdeThreads = 0;
  int fp_log_pai_ok = 0;
  int qtdeThreads = 0;
  int resThread = 0;
  int i = 0;
  int j = 0;

  for (i = 0; i < 99; i++)
    flagThread[i] = 0;

  // Data que ira para o log ...
  hoje1(dataLog);
  agora1(horaLog);

  // Cria o LogPaiSum e o   e a lista que ira alimentar o programa do dbLoad ...
  sprintf(strRascunho, "%s/tarifa_cdr/E/LogTarifaCdrEnvioOk.D%sH%s", dirLogF, dataLog, horaLog);
  if ((fp_log_pai_ok = open(strRascunho, O_WRONLY | O_TRUNC | O_CREAT | O_SYNC, 0666)) < 0)
  {
    printf("Erro 2 na criacao/abertura do arquivo %s", strRascunho);
    exit(1);
  }

  // Cria o arquivo de LogFilhoErroSum
  sprintf(strRascunho, "%s/tarifa_cdr/E/LogTarifaCdrEnvioErro.D%sH%s", dirLogF, dataLog, horaLog);
  if ((fp_log_filho_erro = open(strRascunho, O_WRONLY | O_TRUNC | O_CREAT | O_SYNC, 0666)) < 0)
  {
    printf("Erro 3 na criacao/abertura do arquivo <%s>\n", strRascunho);
    exit(1);
  }

  // Abre diretorio ---
  if ((dirAberto = opendir(g_cEntrada)) == NULL)
  {
    printf("Erro ao abrir o diretorio de entrada: <%s>\n", g_cEntrada);
    sprintf(strRascunho, "Erro ao abrir o diretorio de entrada: <%s>\n", g_cEntrada);
    gravaSoLog(fp_log_filho_erro, strRascunho);
    exit(1);
  }

  while ((leDiretorio = readdir(dirAberto)) != NULL)
  {
    // Trocar depois pela mascara correta ...
    if (strstr(leDiretorio->d_name, "sem_tarifa.quebraEnvio") == NULL)
      continue;

    // Bloqueia o mutex e cria a thread.
    pthread_mutex_lock(&MutexThread);

    for (i = 0; i < QTDE_MAX_THREADS; i++)
      if (flagThread[i] == 0)
        break;

    sprintf(parametro, "%s|%d", leDiretorio->d_name, i);
    resThread = pthread_create(&threads[i], NULL, processaArquivo, (void *)parametro);
    if (resThread)
    {
      printf("\n Erro 5 ao criar a Thread.  Causa: %s\n", strerror(errno));
      sprintf(strRascunho, "%s|ERRO_CRIA_THREAD",  leDiretorio->d_name);
      gravaSoLog(fp_log_filho_erro, strRascunho);
      pthread_mutex_unlock(&MutexThread);
    }
    else
    {
      pthread_detach(threads[i]);
      qtdeThreads++;
      qtdeFinal++;
      i++;
    }

    // Logica para incrementar/decrementar o numero de thread
    auxQtdeThreads = qtdeThreads + 1;
    while (qtdeThreads >= QTDE_MAX_THREADS)
    {
      i = 0;
      while (flagThread[i] != 2)
      {
        i++;
        if (i == auxQtdeThreads)
          i = 0;
      }

      qtdeThreads--;
      flagThread[i] = 0;
    }

    // Grava no log os arquivos que estao sendo processados
    sprintf(message, "%s - ENV_PROC", leDiretorio->d_name);
    gravaSoLog(fp_log_pai_ok, message);

    // Le arquivo com o numero de threads
    if ((fdirThread = fopen(qntdeThread, "r")) == NULL)
      continue;
    else
    {
      fgets(auxNumThread, 3, fdirThread);
      QTDE_MAX_THREADS = atoi(auxNumThread);
      if (QTDE_MAX_THREADS > 95)
        QTDE_MAX_THREADS = 95;
      fclose(fdirThread);
    }
    j++;
  }// Fim Logica Thread

  // Espera termino das ultimas Threads
  while (qtdeFinal != qtdeThreadsTerminadas)
  {
    i = 0;
    sleep(2);
  }

  // fecha os arquivos de Log ...
  close(fp_log_pai_ok);
}

// Funcao Processa Arquivo - recebe o arquivo ...
void *processaArquivo(void *paramThread)
{
	FILE *fp_arquivoEntrada = NULL;
	FILE *fp_arquivoSaida   = NULL;
	CAMPOS_STR vetCampos;

	int indice  = 0;
	int written = 0;

	char cPathEntrada[1024+1];
	char cStrRascunho[1024+1];
	char cNomeRemessa[600+1];
	char cNomeSaida[600+1];
	char cPathSaida[1024+1];
	char cBuffer[600+1];
	char cResultado[11+1];
	char assB[23+1];
	char cNomeOrig[35+1];
	char datCham[8+1];

	// Campos layout ...
	char cEotO[3+1];
	char cEotD[3+1];
	char cGh[1+1];
	//char cn_b_ddd[2+1];

	char cDataChamada[10+1];
	char cDuracaoTarifada[6+1];
	char cAuxDuracaoTarifada[7+1];
  char cAuxDurTar[7+1];
	char cValorLiquido[10+1];
	char cValorTarifa[16+1];
	char durReal[7+1];
	char auxDur[7+1];
	//char cnAssa[2+1];
	//char codNatureza[3+1];
	char seq[7+1];
	char degrau[2+1];
  //char tpDestino[10+1];
  hashEmpresa_t *itemHashEmpresa = NULL;


	// Inicializa as variaveis ...
	memset(cPathEntrada, 0, sizeof(cPathEntrada));
	memset(cStrRascunho, 0, sizeof(cStrRascunho));
	memset(cNomeRemessa, 0, sizeof(cNomeRemessa));
	memset(cPathSaida, 0, sizeof(cPathSaida));
	memset(cDataChamada, 0, sizeof(cDataChamada));
	memset(cDuracaoTarifada, 0, sizeof(cDuracaoTarifada));
	memset(cValorLiquido, 0, sizeof(cValorLiquido));
	memset(cBuffer, 0, sizeof(cBuffer));
  memset(cAuxDurTar, 0, sizeof(cAuxDurTar));

  
  
	// Recebe os paramentros ...
	strcpy(cStrRascunho, paramThread);
	separaCampos(cStrRascunho, '|', &vetCampos,2);

	// Copia os parametros para as variaveis ...
	strcpy(cNomeRemessa, vetCampos.campo[0]);
	indice = atoi(vetCampos.campo[1]);

	//seta flag para thread rodando e desbloqueia a Thread ...
	flagThread[indice] = 1;
	pthread_mutex_unlock(&MutexThread);

	system(" ");

	sprintf(cPathEntrada,"%s/%s", g_cEntrada, cNomeRemessa);
	if((fp_arquivoEntrada = fopen64(cPathEntrada, "r")) == NULL)
	{

		sprintf(cStrRascunho, "Erro ao abrir o arquivo <%s>\n", cPathEntrada);
		gravaSoLog(fp_log_filho_erro, cStrRascunho);
		exit(1);
	}

	sprintf(cNomeSaida,"%32.32s", cNomeRemessa+11);
	sprintf(cPathSaida,"%s/%s.tarifa", g_cTemp, cNomeSaida);
	if((fp_arquivoSaida = fopen64(cPathSaida, "w")) == NULL)
	{

		sprintf(cStrRascunho, "Erro ao criat o arquivo <%s>\n", cPathSaida);
		gravaSoLog(fp_log_filho_erro, cStrRascunho);
		exit(1);
	}

	while(fgets(cBuffer, 600, fp_arquivoEntrada) != NULL)
	{
		memset(cValorTarifa, 0, sizeof(cValorTarifa));
		sprintf(cDataChamada,"%4.4s-%2.2s-%2.2s", cBuffer+74, cBuffer+72, cBuffer+70);
		sprintf(cValorLiquido,"%10.10s", cBuffer+352);
		sprintf(assB,"%23.23s", cBuffer+42);
		sprintf(seq,"%7.7s",cBuffer+504);

		sprintf(cEotO,"%3.3s", cBuffer+4);
		sprintf(cEotD,"%3.3s", cBuffer+7);
		sprintf(datCham,"%4.4s%2.2s%2.2s",cBuffer+74,cBuffer+72,cBuffer+70);
		sprintf(degrau,"%2.2s", cBuffer+98);
		//sprintf(cn_b_ddd,"%2.2s", cBuffer+311);



		sprintf(cGh,"%1.1s", cBuffer+97);
		if( cBuffer[97] == '1' )
		{
			sprintf(cGh,"%1.1s", "N");
		}
		else if( (cBuffer[97] == '2') || (cBuffer[97] == '3'))
		{
			sprintf(cGh,"%1.1s", "R");
		}
		else if(cBuffer[97] == '4' )
		{
			sprintf(cGh,"%1.1s", "M");
		}
		else if(cBuffer[97] == '5' )
		{
			sprintf(cGh,"%1.1s", "D");
		}
		else
		{
			sprintf(cStrRascunho, "Erro. Grupo Horario diferente de 1, 2 , 3, 4 ou 5. valor: <%c>", cBuffer[97]);
			gravaSoLog(fp_log_filho_erro, cStrRascunho);
			exit(1);
		}

		// Formata o campo colocando ponto para fazer o calculo...
		// mascaraCampoValor(cDuracaoTarifada, "9d", "9.d", cAuxDuracaoTarifada);


		if(nTipoEmpresa == TLC)
		{
			// copia o nome da remessa do cdr para saber se eh pre-pago ou remessa comum
			sprintf(cNomeOrig,"%35.35s",cBuffer+440);


			// se for pre-pago
			if( strstr(cNomeOrig,".S06") !=0 )
			{
				if(atoll(datCham) < 20150201) // se for chamdas anterior a 20150201, utiliza a regra abaixo de tarifacao
				{
					//Demanda 90045 - Nova regra de tarifacao do pre-pago. Para pre sempre vai olhar nas tabelas - Emerson - 2014-01-06
					if(buscaTarifaTLCPRE(assB,cDataChamada, cValorTarifa, cEotO, cEotD, cGh))
					{
						sprintf(cStrRascunho, "Erro ao buscar a tarifa no banco <%s> usando a data <%s>\n", "connTarCdr", cDataChamada);
						gravaSoLog(fp_log_filho_erro, cStrRascunho);
						exit(1);
					}

				}
				else // chamadas >= que 20150201
				{
					// CT-91731-Y0Y3 - se eot_a for Movel e degrau "02 e data da chamada  maior que 20150824, altera a tarifa para 2,99, senao continua 5,98
		      itemHashEmpresa = (hashEmpresa_t*) ht_get(hashEmpresa, cEotO);
   		    if ( (atoi(degrau) == 2) && (atoll(datCham) > 20150824) && itemHashEmpresa && (strncmp(itemHashEmpresa->cTipoEmp, "M", 1) == 0)  )
					{
						// para este cenario, a tarif passa a ser de 2.99
						strcpy(cValorTarifa, "2.99");
					}
					else
					{
						// a partir de 01 de fevereiro de 2015, a tarifa do pre-pago passa a ser de R$ 5.98
						strcpy(cValorTarifa, "5.98");
					}
				}


				// calcula a duracao
				sprintf(durReal,"%7.7s",cBuffer+84);
				calculaDurTarifada(durReal, auxDur);
        strcpy(cAuxDurTar,auxDur);

				memcpy(cBuffer+91, auxDur, 6);
				sprintf(cAuxDuracaoTarifada,"%5.5s.%1.1s",auxDur, auxDur+5);

			}// fim pe-pago
			else // pos-pago
			{
				if(atoll(datCham) < 20131101 )
				{
					// Formata o campo colocando ponto para fazer o calculo...
					sprintf(cDuracaoTarifada,"%6.6s", cBuffer+91);
					mascaraCampoValor(cDuracaoTarifada, "9d", "9.d", cAuxDuracaoTarifada);

					// DMD 90012 - para alguns terminais assB especificos
					// se a duracao for menor ou igual a 1.9 alteramos a duracao minima para 2.0
					trim(assB);

					// achou o assB na lista e nao eh pre-pago, entao aplica a promocao
					if (strstr("6520650321;6520656569;6520656969;6520650800;6520650500;6520650555;6520650600;6520656565",assB)!=0)
					{
						if (atof(cAuxDuracaoTarifada) < 2.0) // se duracao for menor que 2.0, joga 2.0
						{
							strcpy(cAuxDuracaoTarifada,"0002.0");
							memcpy(cBuffer+91, "000020", 6);
              strcpy(cAuxDurTar ,"000020");
						}

					} // fim dmd 90012

					// busca tarifa
					if(buscaTarifaTLC(assB,cDataChamada, cValorTarifa, cEotO, cEotD, cGh))
					{
						sprintf(cStrRascunho, "Erro ao buscar a tarifa no banco <%s> usando a data <%s>\n", "connTarCdr", cDataChamada);
						gravaSoLog(fp_log_filho_erro, cStrRascunho);
						exit(1);
					}

				} // fim < 20131101
				else if(atoll(datCham) < 20150701 )
				{
					// DMD 90218 05/02/2015 - passa a tarifar com 5.98 as chamadas deste terminal que sejam da T65 e entre 01/03/2015 a 31/12/2015
 		      itemHashEmpresa = (hashEmpresa_t*)ht_get(hashEmpresa, cEotD);
		      if (itemHashEmpresa && (strncmp(itemHashEmpresa->sigla_holding, "T65", 3) == 0) && (strstr(assB, "6520656799") != 0) && (atoll(datCham) >= 20150301) && (atoll(datCham) <= 20151231) )
					{
						strcpy(cValorTarifa, "5.98");
					}

          else if (itemHashEmpresa && (strncmp(itemHashEmpresa->sigla_holding, "T65", 3) == 0) && (strstr(assB, "6520650") != 0 || strstr(assB, "6520656") != 0 ) )
					{
						// DMD 90045 - se eot_B for da T65 e assB for um numero da T65, entao tarifa eh 3,99
						strcpy(cValorTarifa, "3.99");
					}
					else if(atoll(datCham) < 20140301 )// mantem a tarifa antiga de 6.00
					{
						strcpy(cValorTarifa, "6.00");
					}
					else // Dmd 90061 a partir de 20140301 passa a ter a tarifa de 1.99
					{
						strcpy(cValorTarifa, "1.99");
					}


					// calcula a duracao utilizando a tarifacao basica (minimo de 30 segundos)
					sprintf(durReal,"%7.7s",cBuffer+84);
					calculaDurTarifada(durReal, auxDur);
          strcpy(cAuxDurTar,auxDur);

					memcpy(cBuffer+91, auxDur, 6);
					sprintf(cAuxDuracaoTarifada,"%5.5s.%1.1s",auxDur, auxDur+5);
				}
				else  // chamdas >= 20150701
				{
					// CT-91731-Y0Y3 - se eot_a for Movel e degrau "02 e data da chamada  maior que 20150824, altera a tarifa para 2,99, senao continua 5,98
                    if ( (atoi(degrau) == 2) && (atoll(datCham) > 20150824) && itemHashEmpresa && (strncmp(itemHashEmpresa->cTipoEmp, "M", 1) == 0)  )
					{
						// para este cenario, a tarif passa a ser de 2,99
						strcpy(cValorTarifa, "2.99");
					}
					else
					{
						// a partir de 01/07/2015 a tarifa passa a ser 5,98
						strcpy(cValorTarifa, "5.98");
					}
  

					// calcula a duracao utilizando a tarifacao basica (minimo de 30 segundos)
					sprintf(durReal,"%7.7s",cBuffer+84);
					calculaDurTarifada(durReal, auxDur);
          strcpy(cAuxDurTar,auxDur);
          

					memcpy(cBuffer+91, auxDur, 6);
					sprintf(cAuxDuracaoTarifada,"%5.5s.%1.1s",auxDur, auxDur+5);

				}

			} // fim pos-pago


			// Preenche o campo valor liquido.
			sprintf(cResultado,"%011.5f", (atof(cValorTarifa) * atof(cAuxDuracaoTarifada)) );
			mascaraCampoValor(cResultado, "9.ddddd", "9ddddd", cValorLiquido);
			memcpy(cBuffer+352, cValorLiquido, 10);

			// soma o valor liquido para a tualizar a conversao
			pthread_mutex_lock(&MutexVariavel);
			seqRemessaVal[atoll(seq)] += atoll(cValorLiquido);
      seqRemessaDurTar[atoll(seq)] += atoll(cAuxDurTar);
			pthread_mutex_unlock(&MutexVariavel);
		}
		else if(nTipoEmpresa == VIP)
		{
      // 12/12/2016 calcula a duracao utilizando a tarifacao basica (minimo de 30 segundos)
      sprintf(durReal,"%7.7s",cBuffer+84);
      calculaDurTarifada(durReal, auxDur);
      strcpy(cAuxDurTar,auxDur);
      memcpy(cBuffer+91, auxDur, 6);
      sprintf(cAuxDuracaoTarifada,"%5.5s.%1.1s",auxDur, auxDur+5);
      
       
			// Preenche o campo valor liquido.
			// tarifa fixa
			strcpy(cValorTarifa, "3.99");
			sprintf(cResultado,"%011.5f", (atof(cValorTarifa) * atof(cAuxDuracaoTarifada)) );

			mascaraCampoValor(cResultado, "9.ddddd", "9ddddd", cValorLiquido);
			memcpy(cBuffer+352, cValorLiquido, 10);
			
			// soma o valor liquido para a tualizar a conversao
			pthread_mutex_lock(&MutexVariavel);
			seqRemessaVal[atoll(seq)] += atoll(cValorLiquido);
      seqRemessaDurTar[atoll(seq)] += atoll(cAuxDurTar);
			pthread_mutex_unlock(&MutexVariavel);

		}
		else
		{
			printf("Erro ao determinar a empresa de execução: c65 ou c75, no momento do calculo do valor liquido.");
			exit(1);
		}

		written = write(fileno(fp_arquivoSaida), cBuffer, strlen(cBuffer));
		if (written <= 0)
		{
			printf("Erro na gravação - O Filesystem esta cheio ou o arquivo esta corrompido.\n");
			sprintf(cStrRascunho, "Erro na gravação - O Filesystem esta cheio ou o arquivo esta corrompido.\n");
			gravaSoLog(fp_log_filho_erro, cStrRascunho);
			exit(1);
		}

	} // fim while


	// Move o arquivo para a saida ...
	sprintf(cStrRascunho, "mv %s %s/%s", cPathSaida, g_cEntrada, cNomeSaida);
	executaChamada(cStrRascunho);

	// apaga o arquivo de entrada...
	if( unlink(cPathEntrada) != 0)
	{
		printf("Erro ao apagar o arquivo de entrada: [%s]\n", cPathEntrada);
		sprintf(cStrRascunho, "Erro ao apagar o arquivo de entrada: [%s]\n", cPathEntrada);
		gravaSoLog(fp_log_filho_erro, cStrRascunho);
		exit(1);
	}

	// Bloqueia e desbloquei a variavel global
	pthread_mutex_lock(&MutexVariavel);
	flagThread[indice] = 2;
	qtdeThreadsTerminadas++;
	pthread_mutex_unlock(&MutexVariavel);

	pthread_exit(NULL);
	return ((void *) NULL);
}


int buscaTarifaTLC(char *assinanteB, char *cDataChamada, char *cValorTarifa, char *cEotO, char *cEotD, char *cGh)
{
  char dbTarifa[16 + 1];
  char dtChamada[10 + 1];
  char assiB[23 + 1];

  char cTipoO[1 + 1];
  char cTipoD[1 + 1];
  char db_cGh[1 + 1];
  hashEmpresa_t *itemHashEmpresa = NULL;

  memset(dbTarifa, 0, sizeof(dbTarifa));

  // bloqueia o banco ...
  pthread_mutex_lock(&MutexVariavel);

  logInDatabase(DATABASE);

  strcpy(dtChamada, cDataChamada);
  strcpy(assiB, assinanteB);
  rtrim(assiB);

  /* EXEC SQL select vlr_tarifa
  INTO :dbTarifa
  from t_tarifa_terminal
  WHERE terminal = :assiB
  AND tipo_tarifa = 'POS'
  AND :dtChamada between dat_vigencia_ini and nvl(dat_vigencia_fim, sysdate); */ 
#line 826 "tarifaCdr.pc"

{
#line 821 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 821 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 821 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 821 "tarifaCdr.pc"
  sqlstm.arrsiz = 3;
#line 821 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 821 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 821 "tarifaCdr.pc"
  sqlstm.stmt = "select vlr_tarifa INTO :b0 from t_tarifa_terminal WHERE ter\
minal = :b1 AND tipo_tarifa = 'POS' AND :b2 between dat_vigencia_ini and nvl (\
 dat_vigencia_fim , sysdate ) ";
#line 821 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )1;
#line 821 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )66;
#line 821 "tarifaCdr.pc"
  sqlstm.selerr = (unsigned short)1;
#line 821 "tarifaCdr.pc"
  sqlstm.sqlpfmem = (unsigned int  )0;
#line 821 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 821 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 821 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqhstv[0] = (unsigned char  *)dbTarifa;
#line 821 "tarifaCdr.pc"
  sqlstm.sqhstl[0] = (unsigned long )17;
#line 821 "tarifaCdr.pc"
  sqlstm.sqhsts[0] = (         int  )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqindv[0] = (         short *)0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqharm[0] = (unsigned long )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqhstv[1] = (unsigned char  *)assiB;
#line 821 "tarifaCdr.pc"
  sqlstm.sqhstl[1] = (unsigned long )24;
#line 821 "tarifaCdr.pc"
  sqlstm.sqhsts[1] = (         int  )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqindv[1] = (         short *)0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqinds[1] = (         int  )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqharm[1] = (unsigned long )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqhstv[2] = (unsigned char  *)dtChamada;
#line 821 "tarifaCdr.pc"
  sqlstm.sqhstl[2] = (unsigned long )11;
#line 821 "tarifaCdr.pc"
  sqlstm.sqhsts[2] = (         int  )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqindv[2] = (         short *)0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqinds[2] = (         int  )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqharm[2] = (unsigned long )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 821 "tarifaCdr.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 821 "tarifaCdr.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 821 "tarifaCdr.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 821 "tarifaCdr.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 821 "tarifaCdr.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 821 "tarifaCdr.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 821 "tarifaCdr.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 821 "tarifaCdr.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 821 "tarifaCdr.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 821 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 821 "tarifaCdr.pc"
}

#line 826 "tarifaCdr.pc"

  if (sqlca.sqlcode < 0)
  {
    pthread_mutex_unlock(&MutexVariavel);
    printf("\n ERRO:[%d] - No select da tabela t_tarifa_terminal.", sqlca.sqlcode);
    return 1;
  }

  rtrim(dbTarifa);
  strcpy(cValorTarifa, dbTarifa);

  if (cValorTarifa[0] == '\0')
  {
    itemHashEmpresa = (hashEmpresa_t *) ht_get(hashEmpresa, cEotO);
    if(itemHashEmpresa)
      sprintf(cTipoO, "%1.1s", itemHashEmpresa->cTipoEmp);
    
    itemHashEmpresa = (hashEmpresa_t *) ht_get(hashEmpresa, cEotD);
    if(itemHashEmpresa)
      sprintf(cTipoD, "%1.1s", itemHashEmpresa->cTipoEmp);
    
    sprintf(db_cGh, "%1.1s", cGh);

    if ( cTipoO[0] == '\0' )
    {
      pthread_mutex_unlock(&MutexVariavel);
      printf("\n ERRO. Nao existe a eot de origem %s na tabela t_empresa.", cEotO);
      return 1;
    }

    if ( cTipoD[0] == '\0' )
    {
      pthread_mutex_unlock(&MutexVariavel);
      printf("\n ERRO. Nao existe a eot de destino %s na tabela t_empresa.", cEotD);
      return 1;
    }

    /* EXEC SQL select vlr_tarifa
    INTO :dbTarifa
    from t_tarifa_trafego
    WHERE tipo_trafego_assa = :cTipoO
    AND tipo_trafego_assb = :cTipoD
    AND tipo_horario = :db_cGh
    AND tipo_tarifa = 'POS'
    AND dat_vigencia_ini =
    ( SELECT MAX(dat_vigencia_ini)
                    FROM t_tarifa_trafego
                    WHERE dat_vigencia_ini <= :dtChamada
                    AND tipo_trafego_assa = :cTipoO
                    AND tipo_trafego_assb = :cTipoD
                    AND tipo_horario = :db_cGh
                    AND tipo_tarifa = 'POS'
                    ); */ 
#line 878 "tarifaCdr.pc"

{
#line 863 "tarifaCdr.pc"
    struct sqlexd sqlstm;
#line 863 "tarifaCdr.pc"
    sqlorat((void **)0, &sqlctx, &oraca);
#line 863 "tarifaCdr.pc"
    sqlstm.sqlvsn = 13;
#line 863 "tarifaCdr.pc"
    sqlstm.arrsiz = 8;
#line 863 "tarifaCdr.pc"
    sqlstm.sqladtp = &sqladt;
#line 863 "tarifaCdr.pc"
    sqlstm.sqltdsp = &sqltds;
#line 863 "tarifaCdr.pc"
    sqlstm.stmt = "select vlr_tarifa INTO :b0 from t_tarifa_trafego WHERE ti\
po_trafego_assa = :b1 AND tipo_trafego_assb = :b2 AND tipo_horario = :b3 AND t\
ipo_tarifa = 'POS' AND dat_vigencia_ini = ( SELECT MAX ( dat_vigencia_ini ) FR\
OM t_tarifa_trafego WHERE dat_vigencia_ini <= :b4 AND tipo_trafego_assa = :b1 \
AND tipo_trafego_assb = :b2 AND tipo_horario = :b3 AND tipo_tarifa = 'POS' ) ";
#line 863 "tarifaCdr.pc"
    sqlstm.iters = (unsigned int  )1;
#line 863 "tarifaCdr.pc"
    sqlstm.offset = (unsigned int  )93;
#line 863 "tarifaCdr.pc"
    sqlstm.selerr = (unsigned short)1;
#line 863 "tarifaCdr.pc"
    sqlstm.sqlpfmem = (unsigned int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.cud = sqlcud0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 863 "tarifaCdr.pc"
    sqlstm.sqlety = (unsigned short)4352;
#line 863 "tarifaCdr.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstv[0] = (unsigned char  *)dbTarifa;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstl[0] = (unsigned long )17;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhsts[0] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqindv[0] = (         short *)0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqinds[0] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqharm[0] = (unsigned long )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqadto[0] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqtdso[0] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstv[1] = (unsigned char  *)cTipoO;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstl[1] = (unsigned long )2;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhsts[1] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqindv[1] = (         short *)0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqinds[1] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqharm[1] = (unsigned long )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqadto[1] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqtdso[1] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstv[2] = (unsigned char  *)cTipoD;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstl[2] = (unsigned long )2;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhsts[2] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqindv[2] = (         short *)0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqinds[2] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqharm[2] = (unsigned long )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqadto[2] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqtdso[2] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstv[3] = (unsigned char  *)db_cGh;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstl[3] = (unsigned long )2;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhsts[3] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqindv[3] = (         short *)0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqinds[3] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqharm[3] = (unsigned long )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqadto[3] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqtdso[3] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstv[4] = (unsigned char  *)dtChamada;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstl[4] = (unsigned long )11;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhsts[4] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqindv[4] = (         short *)0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqinds[4] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqharm[4] = (unsigned long )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqadto[4] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqtdso[4] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstv[5] = (unsigned char  *)cTipoO;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstl[5] = (unsigned long )2;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhsts[5] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqindv[5] = (         short *)0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqinds[5] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqharm[5] = (unsigned long )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqadto[5] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqtdso[5] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstv[6] = (unsigned char  *)cTipoD;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstl[6] = (unsigned long )2;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhsts[6] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqindv[6] = (         short *)0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqinds[6] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqharm[6] = (unsigned long )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqadto[6] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqtdso[6] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstv[7] = (unsigned char  *)db_cGh;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhstl[7] = (unsigned long )2;
#line 863 "tarifaCdr.pc"
    sqlstm.sqhsts[7] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqindv[7] = (         short *)0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqinds[7] = (         int  )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqharm[7] = (unsigned long )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqadto[7] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqtdso[7] = (unsigned short )0;
#line 863 "tarifaCdr.pc"
    sqlstm.sqphsv = sqlstm.sqhstv;
#line 863 "tarifaCdr.pc"
    sqlstm.sqphsl = sqlstm.sqhstl;
#line 863 "tarifaCdr.pc"
    sqlstm.sqphss = sqlstm.sqhsts;
#line 863 "tarifaCdr.pc"
    sqlstm.sqpind = sqlstm.sqindv;
#line 863 "tarifaCdr.pc"
    sqlstm.sqpins = sqlstm.sqinds;
#line 863 "tarifaCdr.pc"
    sqlstm.sqparm = sqlstm.sqharm;
#line 863 "tarifaCdr.pc"
    sqlstm.sqparc = sqlstm.sqharc;
#line 863 "tarifaCdr.pc"
    sqlstm.sqpadto = sqlstm.sqadto;
#line 863 "tarifaCdr.pc"
    sqlstm.sqptdso = sqlstm.sqtdso;
#line 863 "tarifaCdr.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 863 "tarifaCdr.pc"
}

#line 878 "tarifaCdr.pc"

    if (sqlca.sqlcode < 0)
    {
      pthread_mutex_unlock(&MutexVariavel);
      printf("\n ERRO:[%d] - No select da tabela t_tarifa_terminal.", sqlca.sqlcode);
      return 1;
    }
  }

  rtrim(dbTarifa);
  strcpy(cValorTarifa, dbTarifa);

  //logOutDatabase("connTarCdr");

  // desbloqueia o banco ...
  pthread_mutex_unlock(&MutexVariavel);


  return 0;
}


int buscaTarifaTLCPRE(char *assinanteB, char *cDataChamada, char *cValorTarifa, char *cEotO, char *cEotD, char *cGh)
{
  char dbTarifa[16 + 1];
  char dtChamada[10 + 1];
  char assiB[23 + 1];

  char cTipoO[1 + 1];
  char cTipoD[1 + 1];
  char db_cGh[1 + 1];

  hashEmpresa_t *itemHashEmpresa = NULL;

  memset(dbTarifa, 0, sizeof(dbTarifa));

  // bloqueia o banco ...
  pthread_mutex_lock(&MutexVariavel);

  logInDatabase(DATABASE);

  strcpy(dtChamada, cDataChamada);
  strcpy(assiB, assinanteB);
  rtrim(assiB);

  /* EXEC SQL select vlr_tarifa
  INTO :dbTarifa
  from t_tarifa_terminal
  WHERE terminal = :assiB
  AND tipo_tarifa = 'PRE'
  AND :dtChamada between dat_vigencia_ini and nvl(dat_vigencia_fim, sysdate); */ 
#line 928 "tarifaCdr.pc"

{
#line 923 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 923 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 923 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 923 "tarifaCdr.pc"
  sqlstm.arrsiz = 8;
#line 923 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 923 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 923 "tarifaCdr.pc"
  sqlstm.stmt = "select vlr_tarifa INTO :b0 from t_tarifa_terminal WHERE ter\
minal = :b1 AND tipo_tarifa = 'PRE' AND :b2 between dat_vigencia_ini and nvl (\
 dat_vigencia_fim , sysdate ) ";
#line 923 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )1;
#line 923 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )140;
#line 923 "tarifaCdr.pc"
  sqlstm.selerr = (unsigned short)1;
#line 923 "tarifaCdr.pc"
  sqlstm.sqlpfmem = (unsigned int  )0;
#line 923 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 923 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 923 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqhstv[0] = (unsigned char  *)dbTarifa;
#line 923 "tarifaCdr.pc"
  sqlstm.sqhstl[0] = (unsigned long )17;
#line 923 "tarifaCdr.pc"
  sqlstm.sqhsts[0] = (         int  )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqindv[0] = (         short *)0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqharm[0] = (unsigned long )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqhstv[1] = (unsigned char  *)assiB;
#line 923 "tarifaCdr.pc"
  sqlstm.sqhstl[1] = (unsigned long )24;
#line 923 "tarifaCdr.pc"
  sqlstm.sqhsts[1] = (         int  )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqindv[1] = (         short *)0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqinds[1] = (         int  )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqharm[1] = (unsigned long )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqhstv[2] = (unsigned char  *)dtChamada;
#line 923 "tarifaCdr.pc"
  sqlstm.sqhstl[2] = (unsigned long )11;
#line 923 "tarifaCdr.pc"
  sqlstm.sqhsts[2] = (         int  )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqindv[2] = (         short *)0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqinds[2] = (         int  )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqharm[2] = (unsigned long )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqadto[2] = (unsigned short )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqtdso[2] = (unsigned short )0;
#line 923 "tarifaCdr.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 923 "tarifaCdr.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 923 "tarifaCdr.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 923 "tarifaCdr.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 923 "tarifaCdr.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 923 "tarifaCdr.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 923 "tarifaCdr.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 923 "tarifaCdr.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 923 "tarifaCdr.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 923 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 923 "tarifaCdr.pc"
}

#line 928 "tarifaCdr.pc"

  if (sqlca.sqlcode < 0)
  {
    pthread_mutex_unlock(&MutexVariavel);
    printf("\n ERRO:[%d] - No select da tabela t_tarifa_terminal.", sqlca.sqlcode);
    return 1;
  }

  rtrim(dbTarifa);
  strcpy(cValorTarifa, dbTarifa);

  if (cValorTarifa[0] == '\0')
  {
    
    itemHashEmpresa = (hashEmpresa_t *) ht_get(hashEmpresa, cEotO);
    if(itemHashEmpresa)
      sprintf(cTipoO, "%1.1s", itemHashEmpresa->cTipoEmp);

    itemHashEmpresa = (hashEmpresa_t *) ht_get(hashEmpresa, cEotD);
    if(itemHashEmpresa)
      sprintf(cTipoD, "%1.1s", itemHashEmpresa->cTipoEmp);
    sprintf(db_cGh, "%1.1s", cGh);

    if ( cTipoO[0] == '\0' )
    {
      pthread_mutex_unlock(&MutexVariavel);
      printf("\n ERRO. Nao existe a eot de origem %s na tabela t_empresa.", cEotO);
      return 1;
    }

    if ( cTipoD[0] == '\0' )
    {
      pthread_mutex_unlock(&MutexVariavel);
      printf("\n ERRO. Nao existe a eot de destino %s na tabela t_empresa.", cEotD);
      return 1;
    }

    /* EXEC SQL select vlr_tarifa
    INTO :dbTarifa
    from t_tarifa_trafego
    WHERE tipo_trafego_assa = :cTipoO
    AND tipo_trafego_assb = :cTipoD
    AND tipo_horario = :db_cGh
    AND tipo_tarifa = 'PRE'
    AND dat_vigencia_ini =
    ( SELECT MAX(dat_vigencia_ini)
                    FROM t_tarifa_trafego
                    WHERE dat_vigencia_ini <= :dtChamada
                    AND tipo_trafego_assa = :cTipoO
                    AND tipo_trafego_assb = :cTipoD
                    AND tipo_horario = :db_cGh
                    AND tipo_tarifa = 'PRE'); */ 
#line 979 "tarifaCdr.pc"

{
#line 965 "tarifaCdr.pc"
    struct sqlexd sqlstm;
#line 965 "tarifaCdr.pc"
    sqlorat((void **)0, &sqlctx, &oraca);
#line 965 "tarifaCdr.pc"
    sqlstm.sqlvsn = 13;
#line 965 "tarifaCdr.pc"
    sqlstm.arrsiz = 8;
#line 965 "tarifaCdr.pc"
    sqlstm.sqladtp = &sqladt;
#line 965 "tarifaCdr.pc"
    sqlstm.sqltdsp = &sqltds;
#line 965 "tarifaCdr.pc"
    sqlstm.stmt = "select vlr_tarifa INTO :b0 from t_tarifa_trafego WHERE ti\
po_trafego_assa = :b1 AND tipo_trafego_assb = :b2 AND tipo_horario = :b3 AND t\
ipo_tarifa = 'PRE' AND dat_vigencia_ini = ( SELECT MAX ( dat_vigencia_ini ) FR\
OM t_tarifa_trafego WHERE dat_vigencia_ini <= :b4 AND tipo_trafego_assa = :b1 \
AND tipo_trafego_assb = :b2 AND tipo_horario = :b3 AND tipo_tarifa = 'PRE' ) ";
#line 965 "tarifaCdr.pc"
    sqlstm.iters = (unsigned int  )1;
#line 965 "tarifaCdr.pc"
    sqlstm.offset = (unsigned int  )167;
#line 965 "tarifaCdr.pc"
    sqlstm.selerr = (unsigned short)1;
#line 965 "tarifaCdr.pc"
    sqlstm.sqlpfmem = (unsigned int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.cud = sqlcud0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 965 "tarifaCdr.pc"
    sqlstm.sqlety = (unsigned short)4352;
#line 965 "tarifaCdr.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstv[0] = (unsigned char  *)dbTarifa;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstl[0] = (unsigned long )17;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhsts[0] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqindv[0] = (         short *)0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqinds[0] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqharm[0] = (unsigned long )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqadto[0] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqtdso[0] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstv[1] = (unsigned char  *)cTipoO;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstl[1] = (unsigned long )2;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhsts[1] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqindv[1] = (         short *)0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqinds[1] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqharm[1] = (unsigned long )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqadto[1] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqtdso[1] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstv[2] = (unsigned char  *)cTipoD;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstl[2] = (unsigned long )2;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhsts[2] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqindv[2] = (         short *)0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqinds[2] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqharm[2] = (unsigned long )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqadto[2] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqtdso[2] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstv[3] = (unsigned char  *)db_cGh;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstl[3] = (unsigned long )2;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhsts[3] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqindv[3] = (         short *)0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqinds[3] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqharm[3] = (unsigned long )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqadto[3] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqtdso[3] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstv[4] = (unsigned char  *)dtChamada;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstl[4] = (unsigned long )11;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhsts[4] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqindv[4] = (         short *)0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqinds[4] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqharm[4] = (unsigned long )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqadto[4] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqtdso[4] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstv[5] = (unsigned char  *)cTipoO;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstl[5] = (unsigned long )2;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhsts[5] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqindv[5] = (         short *)0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqinds[5] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqharm[5] = (unsigned long )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqadto[5] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqtdso[5] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstv[6] = (unsigned char  *)cTipoD;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstl[6] = (unsigned long )2;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhsts[6] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqindv[6] = (         short *)0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqinds[6] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqharm[6] = (unsigned long )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqadto[6] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqtdso[6] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstv[7] = (unsigned char  *)db_cGh;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhstl[7] = (unsigned long )2;
#line 965 "tarifaCdr.pc"
    sqlstm.sqhsts[7] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqindv[7] = (         short *)0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqinds[7] = (         int  )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqharm[7] = (unsigned long )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqadto[7] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqtdso[7] = (unsigned short )0;
#line 965 "tarifaCdr.pc"
    sqlstm.sqphsv = sqlstm.sqhstv;
#line 965 "tarifaCdr.pc"
    sqlstm.sqphsl = sqlstm.sqhstl;
#line 965 "tarifaCdr.pc"
    sqlstm.sqphss = sqlstm.sqhsts;
#line 965 "tarifaCdr.pc"
    sqlstm.sqpind = sqlstm.sqindv;
#line 965 "tarifaCdr.pc"
    sqlstm.sqpins = sqlstm.sqinds;
#line 965 "tarifaCdr.pc"
    sqlstm.sqparm = sqlstm.sqharm;
#line 965 "tarifaCdr.pc"
    sqlstm.sqparc = sqlstm.sqharc;
#line 965 "tarifaCdr.pc"
    sqlstm.sqpadto = sqlstm.sqadto;
#line 965 "tarifaCdr.pc"
    sqlstm.sqptdso = sqlstm.sqtdso;
#line 965 "tarifaCdr.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 965 "tarifaCdr.pc"
}

#line 979 "tarifaCdr.pc"

    if (sqlca.sqlcode < 0)
    {
      pthread_mutex_unlock(&MutexVariavel);
      printf("\n ERRO:[%d] - No select da tabela t_tarifa_terminal.", sqlca.sqlcode);
      return 1;
    }
  }

  rtrim(dbTarifa);
  strcpy(cValorTarifa, dbTarifa);

  //logOutDatabase("connTarCdr");

  // desbloqueia o banco ...
  pthread_mutex_unlock(&MutexVariavel);


  return 0;
}



// Busca no banco a parte fixa dos diretorios de Entrada e saida ( radical )...
void buscaDiretorioExecucao()
{
  /* EXEC SQL SELECT dir_etc
  INTO    :dbDirEtc
  FROM    t_confdir; */ 
#line 1007 "tarifaCdr.pc"

{
#line 1005 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 1005 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 1005 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 1005 "tarifaCdr.pc"
  sqlstm.arrsiz = 8;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1005 "tarifaCdr.pc"
  sqlstm.stmt = "select dir_etc INTO :b0 FROM t_confdir ";
#line 1005 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )1;
#line 1005 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )214;
#line 1005 "tarifaCdr.pc"
  sqlstm.selerr = (unsigned short)1;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqlpfmem = (unsigned int  )0;
#line 1005 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 1005 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqhstv[0] = (unsigned char  *)dbDirEtc;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqhstl[0] = (unsigned long )101;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqhsts[0] = (         int  )0;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqindv[0] = (         short *)0;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqharm[0] = (unsigned long )0;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1005 "tarifaCdr.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1005 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1005 "tarifaCdr.pc"
}

#line 1007 "tarifaCdr.pc"


  rtrim(dbDirEtc);
}


// Valida se tem algum programa rodando que pode dar conflito com este ...
int ValidaProgramas()
{
  char dataB[1024];
  int dbCodSinal = 1;
  int dbCount;

  // recuperando a hora de inicio ...
  sprintf(dataB, "%s%s", dataC, horaC);

  // Conecta no Banco para fazer as validacoes ...
  logInDatabase(DATABASE);

  // valida se existe algum programa rodando ou abendado ...
  /* EXEC SQL SELECT count(*)
  INTO    :dbCount
  FROM    t_semaforo_cob
  WHERE nom_rotina in ('quebra_envio','batimento_envio','hpl_envio','headertot_env')
  AND cod_sinal = 1; */ 
#line 1031 "tarifaCdr.pc"

{
#line 1027 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 1027 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 1027 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 1027 "tarifaCdr.pc"
  sqlstm.arrsiz = 8;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1027 "tarifaCdr.pc"
  sqlstm.stmt = "select count ( * ) INTO :b0 FROM t_semaforo_cob WHERE nom_r\
otina in ( 'quebra_envio' , 'batimento_envio' , 'hpl_envio' , 'headertot_env' \
) AND cod_sinal = 1 ";
#line 1027 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )1;
#line 1027 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )233;
#line 1027 "tarifaCdr.pc"
  sqlstm.selerr = (unsigned short)1;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqlpfmem = (unsigned int  )0;
#line 1027 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 1027 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqhstv[0] = (unsigned char  *)&dbCount;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
#line 1027 "tarifaCdr.pc"
  sqlstm.sqhsts[0] = (         int  )0;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqindv[0] = (         short *)0;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqharm[0] = (unsigned long )0;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1027 "tarifaCdr.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1027 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1027 "tarifaCdr.pc"
}

#line 1031 "tarifaCdr.pc"

  if (sqlca.sqlcode < 0)
  {
    printf("\n 2-ERRO[%d] NO SELECT que valida as condicoes do semaforo ... ", sqlca.sqlcode);

    // Desconecta no banco de dados
    //logOutDatabase("connQ");
    return 1;
  }

  // valida o retorno do select ...
  if (dbCount > 0)
  {
    printf("\n O PROGRAMA NAO PODE SER EXECUTADO, CHECAR SE TEM ALGUM PROGRAMA RODANDO OU \"ABENDADO\".\n");

    // Desconecta no banco de dados
    //logOutDatabase("connQ");
    return 1;
  }

  // valida se existe o quebra na tabela e qual e o status ...
  /* EXEC SQL SELECT cod_sinal,count(*)
  INTO    :dbCodSinal,:dbCount
  FROM    t_semaforo_cob
  WHERE nom_rotina = 'tarifa_cdr_envio'
  group by cod_sinal; */ 
#line 1056 "tarifaCdr.pc"

{
#line 1052 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 1052 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 1052 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 1052 "tarifaCdr.pc"
  sqlstm.arrsiz = 8;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1052 "tarifaCdr.pc"
  sqlstm.stmt = "select cod_sinal , count ( * ) INTO :b0 , :b1 FROM t_semafo\
ro_cob WHERE nom_rotina = 'tarifa_cdr_envio' group by cod_sinal ";
#line 1052 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )1;
#line 1052 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )252;
#line 1052 "tarifaCdr.pc"
  sqlstm.selerr = (unsigned short)1;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqlpfmem = (unsigned int  )0;
#line 1052 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 1052 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqhstv[0] = (unsigned char  *)&dbCodSinal;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
#line 1052 "tarifaCdr.pc"
  sqlstm.sqhsts[0] = (         int  )0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqindv[0] = (         short *)0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqharm[0] = (unsigned long )0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqhstv[1] = (unsigned char  *)&dbCount;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqhstl[1] = (unsigned long )sizeof(int);
#line 1052 "tarifaCdr.pc"
  sqlstm.sqhsts[1] = (         int  )0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqindv[1] = (         short *)0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqinds[1] = (         int  )0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqharm[1] = (unsigned long )0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1052 "tarifaCdr.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1052 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1052 "tarifaCdr.pc"
}

#line 1056 "tarifaCdr.pc"

  if (sqlca.sqlcode < 0)
  {
    printf("\n 3-ERRO[%d] NO SELECT que valida as condicoes do semaforo ... ", sqlca.sqlcode);

    // Desconecta no banco de dados
    //logOutDatabase("connQ");
    return 1;
  }

  // valida o retorno do select ...
  if (dbCount == 0)
  {
    // nao existe linha para o quebra ( primeira vez que esta rodando ) ...
    /* EXEC SQL INSERT into t_semaforo_cob (nom_rotina,dat_ini,cod_sinal)
    VALUES ('tarifa_cdr_envio',:dataB,1); */ 
#line 1071 "tarifaCdr.pc"

{
#line 1070 "tarifaCdr.pc"
    struct sqlexd sqlstm;
#line 1070 "tarifaCdr.pc"
    sqlorat((void **)0, &sqlctx, &oraca);
#line 1070 "tarifaCdr.pc"
    sqlstm.sqlvsn = 13;
#line 1070 "tarifaCdr.pc"
    sqlstm.arrsiz = 8;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqladtp = &sqladt;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqltdsp = &sqltds;
#line 1070 "tarifaCdr.pc"
    sqlstm.stmt = "insert into t_semaforo_cob ( nom_rotina , dat_ini , cod_s\
inal ) VALUES ( 'tarifa_cdr_envio' , :b0 , 1 ) ";
#line 1070 "tarifaCdr.pc"
    sqlstm.iters = (unsigned int  )1;
#line 1070 "tarifaCdr.pc"
    sqlstm.offset = (unsigned int  )275;
#line 1070 "tarifaCdr.pc"
    sqlstm.cud = sqlcud0;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqlety = (unsigned short)4352;
#line 1070 "tarifaCdr.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqhstv[0] = (unsigned char  *)dataB;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqhstl[0] = (unsigned long )1024;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqhsts[0] = (         int  )0;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqindv[0] = (         short *)0;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqinds[0] = (         int  )0;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqharm[0] = (unsigned long )0;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqadto[0] = (unsigned short )0;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqtdso[0] = (unsigned short )0;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqphsv = sqlstm.sqhstv;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqphsl = sqlstm.sqhstl;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqphss = sqlstm.sqhsts;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqpind = sqlstm.sqindv;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqpins = sqlstm.sqinds;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqparm = sqlstm.sqharm;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqparc = sqlstm.sqharc;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqpadto = sqlstm.sqadto;
#line 1070 "tarifaCdr.pc"
    sqlstm.sqptdso = sqlstm.sqtdso;
#line 1070 "tarifaCdr.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1070 "tarifaCdr.pc"
}

#line 1071 "tarifaCdr.pc"

    if (sqlca.sqlcode < 0)
    {
      printf("\n ERRO[%d] NO INSERT do semaforo ... ", sqlca.sqlcode);

      // Desconecta no banco de dados
      //logOutDatabase("connQ");
      return 1;
    }

    /* EXEC SQL COMMIT; */ 
#line 1081 "tarifaCdr.pc"

{
#line 1081 "tarifaCdr.pc"
    struct sqlexd sqlstm;
#line 1081 "tarifaCdr.pc"
    sqlorat((void **)0, &sqlctx, &oraca);
#line 1081 "tarifaCdr.pc"
    sqlstm.sqlvsn = 13;
#line 1081 "tarifaCdr.pc"
    sqlstm.arrsiz = 8;
#line 1081 "tarifaCdr.pc"
    sqlstm.sqladtp = &sqladt;
#line 1081 "tarifaCdr.pc"
    sqlstm.sqltdsp = &sqltds;
#line 1081 "tarifaCdr.pc"
    sqlstm.iters = (unsigned int  )1;
#line 1081 "tarifaCdr.pc"
    sqlstm.offset = (unsigned int  )294;
#line 1081 "tarifaCdr.pc"
    sqlstm.cud = sqlcud0;
#line 1081 "tarifaCdr.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1081 "tarifaCdr.pc"
    sqlstm.sqlety = (unsigned short)4352;
#line 1081 "tarifaCdr.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 1081 "tarifaCdr.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1081 "tarifaCdr.pc"
}

#line 1081 "tarifaCdr.pc"

    if (sqlca.sqlcode < 0)
    {
      printf("\n ERRO[%d] NO COMMIT INSERT do semaforo ... ", sqlca.sqlcode);
      return 1;
    }

  }
  else
  {
    if (dbCodSinal == 1)
    {
      printf("\n O PROGRAMA NAO PODE SER EXECUTADO, CHECAR SE TEM ALGUM TARIFA_CDR RODANDO OU \"ABENDADO\".\n");

      // Desconecta no banco de dados
      //logOutDatabase("connQ");
      return 1;
    }
    else
    {
      // valida se a quebra esta rodando apos os outros programas estarem ok ...
      /* EXEC SQL SELECT count(*)
      INTO    :dbCount
      FROM    t_semaforo_cob
      WHERE nom_rotina in ('batimento_envio','hpl_envio','headertot_env')
      AND cod_sinal = 0; */ 
#line 1106 "tarifaCdr.pc"

{
#line 1102 "tarifaCdr.pc"
      struct sqlexd sqlstm;
#line 1102 "tarifaCdr.pc"
      sqlorat((void **)0, &sqlctx, &oraca);
#line 1102 "tarifaCdr.pc"
      sqlstm.sqlvsn = 13;
#line 1102 "tarifaCdr.pc"
      sqlstm.arrsiz = 8;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqladtp = &sqladt;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqltdsp = &sqltds;
#line 1102 "tarifaCdr.pc"
      sqlstm.stmt = "select count ( * ) INTO :b0 FROM t_semaforo_cob WHERE n\
om_rotina in ( 'batimento_envio' , 'hpl_envio' , 'headertot_env' ) AND cod_sin\
al = 0 ";
#line 1102 "tarifaCdr.pc"
      sqlstm.iters = (unsigned int  )1;
#line 1102 "tarifaCdr.pc"
      sqlstm.offset = (unsigned int  )309;
#line 1102 "tarifaCdr.pc"
      sqlstm.selerr = (unsigned short)1;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqlpfmem = (unsigned int  )0;
#line 1102 "tarifaCdr.pc"
      sqlstm.cud = sqlcud0;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqlety = (unsigned short)4352;
#line 1102 "tarifaCdr.pc"
      sqlstm.occurs = (unsigned int  )0;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqhstv[0] = (unsigned char  *)&dbCount;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqhstl[0] = (unsigned long )sizeof(int);
#line 1102 "tarifaCdr.pc"
      sqlstm.sqhsts[0] = (         int  )0;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqindv[0] = (         short *)0;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqinds[0] = (         int  )0;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqharm[0] = (unsigned long )0;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqadto[0] = (unsigned short )0;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqtdso[0] = (unsigned short )0;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqphsv = sqlstm.sqhstv;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqphsl = sqlstm.sqhstl;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqphss = sqlstm.sqhsts;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqpind = sqlstm.sqindv;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqpins = sqlstm.sqinds;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqparm = sqlstm.sqharm;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqparc = sqlstm.sqharc;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqpadto = sqlstm.sqadto;
#line 1102 "tarifaCdr.pc"
      sqlstm.sqptdso = sqlstm.sqtdso;
#line 1102 "tarifaCdr.pc"
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1102 "tarifaCdr.pc"
}

#line 1106 "tarifaCdr.pc"

      if (sqlca.sqlcode < 0)
      {
        printf("\n 4-ERRO[%d] NO SELECT que valida as condicoes do semaforo ... ", sqlca.sqlcode);

        // Desconecta no banco de dados
        //logOutDatabase("connQ");
        return 1;
      }

      // valida o retorno do select ...
      if (dbCount != 3)
      {
        printf("\n O PROGRAMA NAO PODE SER EXECUTADO, CHECAR SE TEM ALGUM PROGRAMA RODANDO OU \"ABENDADO\".\n");

        // Desconecta no banco de dados
        //logOutDatabase("connQ");
        return 1;
      }
    }

    // faz o update para status rodando ...
    /* EXEC SQL UPDATE t_semaforo_cob
    SET cod_sinal =1,
    dat_ini =:dataB ,
    dat_fim = NULL
    where nom_rotina = 'tarifa_cdr_envio'; */ 
#line 1132 "tarifaCdr.pc"

{
#line 1128 "tarifaCdr.pc"
    struct sqlexd sqlstm;
#line 1128 "tarifaCdr.pc"
    sqlorat((void **)0, &sqlctx, &oraca);
#line 1128 "tarifaCdr.pc"
    sqlstm.sqlvsn = 13;
#line 1128 "tarifaCdr.pc"
    sqlstm.arrsiz = 8;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqladtp = &sqladt;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqltdsp = &sqltds;
#line 1128 "tarifaCdr.pc"
    sqlstm.stmt = "update t_semaforo_cob SET cod_sinal = 1 , dat_ini = :b0 ,\
 dat_fim = NULL where nom_rotina = 'tarifa_cdr_envio' ";
#line 1128 "tarifaCdr.pc"
    sqlstm.iters = (unsigned int  )1;
#line 1128 "tarifaCdr.pc"
    sqlstm.offset = (unsigned int  )328;
#line 1128 "tarifaCdr.pc"
    sqlstm.cud = sqlcud0;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqlety = (unsigned short)4352;
#line 1128 "tarifaCdr.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqhstv[0] = (unsigned char  *)dataB;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqhstl[0] = (unsigned long )1024;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqhsts[0] = (         int  )0;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqindv[0] = (         short *)0;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqinds[0] = (         int  )0;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqharm[0] = (unsigned long )0;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqadto[0] = (unsigned short )0;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqtdso[0] = (unsigned short )0;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqphsv = sqlstm.sqhstv;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqphsl = sqlstm.sqhstl;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqphss = sqlstm.sqhsts;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqpind = sqlstm.sqindv;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqpins = sqlstm.sqinds;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqparm = sqlstm.sqharm;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqparc = sqlstm.sqharc;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqpadto = sqlstm.sqadto;
#line 1128 "tarifaCdr.pc"
    sqlstm.sqptdso = sqlstm.sqtdso;
#line 1128 "tarifaCdr.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1128 "tarifaCdr.pc"
}

#line 1132 "tarifaCdr.pc"

    if (sqlca.sqlcode < 0)
    {
      printf("\n ERRO AO ATUALIZAR O STATUS DA TABELA T_SEMAFORO_COB PARA RODANDO(1) - [%d].", sqlca.sqlcode);
      //logOutDatabase("connQ");
      return 1;
    }
    /* EXEC SQL COMMIT; */ 
#line 1139 "tarifaCdr.pc"

{
#line 1139 "tarifaCdr.pc"
    struct sqlexd sqlstm;
#line 1139 "tarifaCdr.pc"
    sqlorat((void **)0, &sqlctx, &oraca);
#line 1139 "tarifaCdr.pc"
    sqlstm.sqlvsn = 13;
#line 1139 "tarifaCdr.pc"
    sqlstm.arrsiz = 8;
#line 1139 "tarifaCdr.pc"
    sqlstm.sqladtp = &sqladt;
#line 1139 "tarifaCdr.pc"
    sqlstm.sqltdsp = &sqltds;
#line 1139 "tarifaCdr.pc"
    sqlstm.iters = (unsigned int  )1;
#line 1139 "tarifaCdr.pc"
    sqlstm.offset = (unsigned int  )347;
#line 1139 "tarifaCdr.pc"
    sqlstm.cud = sqlcud0;
#line 1139 "tarifaCdr.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1139 "tarifaCdr.pc"
    sqlstm.sqlety = (unsigned short)4352;
#line 1139 "tarifaCdr.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 1139 "tarifaCdr.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1139 "tarifaCdr.pc"
}

#line 1139 "tarifaCdr.pc"

    if (sqlca.sqlcode < 0)
    {
      printf("\n ERRO[%d] NO COMMIT ATUALIZAR O STATUS DA TABELA T_SEMAFORO_COB PARA RODANDO(1) ", sqlca.sqlcode);
      return 1;
    }

  }

  // Desconecta no banco de dados
  //logOutDatabase("connQ");

  // Tudo Ok ...
  return 0;
}

// Funcao responsavel por atualizar o "Status" do semaforo para "0" ...
int finalizaSemaforo()
{
  char dataB[1024];
  char horC[8 + 1];
  char dtC[11 + 1];

  // recebe a data e a hora corrente para as threads utilizarem ...
  hoje(dtC);
  agora(horC);

  // recuperando a hora de inicio ...
  sprintf(dataB, "%s%s", dtC, horC);

  // Conecta no Banco para fazer as validacoes ...
  logInDatabase(DATABASE);

  /* EXEC SQL UPDATE t_semaforo_cob
  SET cod_sinal =0,
  dat_fim =:dataB
  where nom_rotina = 'tarifa_cdr_envio'; */ 
#line 1175 "tarifaCdr.pc"

{
#line 1172 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 1172 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 1172 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 1172 "tarifaCdr.pc"
  sqlstm.arrsiz = 8;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1172 "tarifaCdr.pc"
  sqlstm.stmt = "update t_semaforo_cob SET cod_sinal = 0 , dat_fim = :b0 whe\
re nom_rotina = 'tarifa_cdr_envio' ";
#line 1172 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )1;
#line 1172 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )362;
#line 1172 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 1172 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqhstv[0] = (unsigned char  *)dataB;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqhstl[0] = (unsigned long )1024;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqhsts[0] = (         int  )0;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqindv[0] = (         short *)0;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqharm[0] = (unsigned long )0;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1172 "tarifaCdr.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1172 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1172 "tarifaCdr.pc"
}

#line 1175 "tarifaCdr.pc"

  if (sqlca.sqlcode < 0)
  {
    gravaSoLog(fp_log_filho_erro, "ERRO AO ATUALIZAR O STATUS DA TABELA T_SEMAFORO_COB PARA OK (0).");
    //logOutDatabase("connQ");
    exit(1);
  }

  /* EXEC SQL COMMIT; */ 
#line 1183 "tarifaCdr.pc"

{
#line 1183 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 1183 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 1183 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 1183 "tarifaCdr.pc"
  sqlstm.arrsiz = 8;
#line 1183 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 1183 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1183 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )1;
#line 1183 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )381;
#line 1183 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 1183 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1183 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 1183 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1183 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1183 "tarifaCdr.pc"
}

#line 1183 "tarifaCdr.pc"

  if (sqlca.sqlcode < 0)
  {
    printf("\n ERRO[%d] NO COMMIT ATUALIZAR O STATUS DA TABELA T_SEMAFORO_COB PARA OK (0)", sqlca.sqlcode);
    return 1;
  }

  //logOutDatabase("connQ");
  return 0;
}



// busca as pessoas que irao receber o email informativo ...
void buscaListaEmail()
{
  /* EXEC SQL SELECT lista_email, nom_banco
  INTO :listaEmail, :bancoxx
  FROM t_parametros; */ 
#line 1201 "tarifaCdr.pc"

{
#line 1199 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 1199 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 1199 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 1199 "tarifaCdr.pc"
  sqlstm.arrsiz = 8;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1199 "tarifaCdr.pc"
  sqlstm.stmt = "select lista_email , nom_banco INTO :b0 , :b1 FROM t_parame\
tros ";
#line 1199 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )1;
#line 1199 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )396;
#line 1199 "tarifaCdr.pc"
  sqlstm.selerr = (unsigned short)1;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqlpfmem = (unsigned int  )0;
#line 1199 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 1199 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqhstv[0] = (unsigned char  *)listaEmail;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqhstl[0] = (unsigned long )1024;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqhsts[0] = (         int  )0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqindv[0] = (         short *)0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqharm[0] = (unsigned long )0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqhstv[1] = (unsigned char  *)bancoxx;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqhstl[1] = (unsigned long )200;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqhsts[1] = (         int  )0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqindv[1] = (         short *)0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqinds[1] = (         int  )0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqharm[1] = (unsigned long )0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqadto[1] = (unsigned short )0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqtdso[1] = (unsigned short )0;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1199 "tarifaCdr.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1199 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1199 "tarifaCdr.pc"
}

#line 1201 "tarifaCdr.pc"

  if (sqlca.sqlcode < 0)
  {
    printf("\n Erro[%d] ao buscar a lista de email na tabela t_parametros ... ", sqlca.sqlcode);
    exit(1);
  }

  rtrim(listaEmail);
  rtrim(bancoxx);
}



// ********************* FUNCOES DO BANCO DE DADOS ***********************
// conecta no Banco de Dados
void logInDatabase(char *banco)
{
  char msg[100];
  sprintf(dbNomeBanco, "%s", banco);
  /* EXEC SQL connect :dbNomeBanco; */ 
#line 1220 "tarifaCdr.pc"

{
#line 1220 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 1220 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 1220 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 1220 "tarifaCdr.pc"
  sqlstm.arrsiz = 8;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1220 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )10;
#line 1220 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )419;
#line 1220 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 1220 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqhstv[0] = (unsigned char  *)dbNomeBanco;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqhstl[0] = (unsigned long )100;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqhsts[0] = (         int  )100;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqindv[0] = (         short *)0;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqharm[0] = (unsigned long )0;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqlcmax = (unsigned int )100;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqlcmin = (unsigned int )2;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqlcincr = (unsigned int )1;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqlctimeout = (unsigned int )0;
#line 1220 "tarifaCdr.pc"
  sqlstm.sqlcnowait = (unsigned int )0;
#line 1220 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1220 "tarifaCdr.pc"
}

#line 1220 "tarifaCdr.pc"

  sprintf(msg, "ERRO AO CONECTAR NO BANCO %s", dbNomeBanco);
  escreveSQLErro(sqlca, msg);

  /* EXEC SQL ALTER SESSION SET NLS_DATE_FORMAT='YYYY-MM-DD HH24:MI:SS'; */ 
#line 1224 "tarifaCdr.pc"

{
#line 1224 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 1224 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 1224 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 1224 "tarifaCdr.pc"
  sqlstm.arrsiz = 8;
#line 1224 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 1224 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1224 "tarifaCdr.pc"
  sqlstm.stmt = "alter SESSION SET NLS_DATE_FORMAT = 'YYYY-MM-DD HH24:MI:SS'";
#line 1224 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )1;
#line 1224 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )450;
#line 1224 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 1224 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1224 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 1224 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1224 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1224 "tarifaCdr.pc"
}

#line 1224 "tarifaCdr.pc"

  sprintf(msg, "ALTER SESSION SET NLS_DATE_FORMAT");
  escreveSQLErro(sqlca, msg);

}

//Desconecta do Banco de Dados
//void //logOutDatabase(char *conexao)
//{
//      EXEC SQL BEGIN DECLARE SECTION ;
//      char dbConexao[15];
//      EXEC SQL END DECLARE SECTION ;
//      sprintf(dbConexao,"%s",conexao);
//      EXEC SQL DISCONNECT :dbConexao;
//      //EXEC SQL DISCONNECT current;
//      escreveSQLErro(sqlca,SQLCODE,sqlca.sqlerrd[1],"in disconnecting from database"," ");
//}

// conecta no Banco de Dados por thread ...
void logInDatabase1(char *conexao, char *banco1)
{
  /* EXEC SQL BEGIN DECLARE SECTION ; */ 
#line 1245 "tarifaCdr.pc"

    char dbConexao1[15 + 1];
    char dbNomeBanco1[100];
  /* EXEC SQL END DECLARE SECTION ; */ 
#line 1248 "tarifaCdr.pc"

  char msg[51];
  sprintf(dbNomeBanco1, "%s", banco1);
  sprintf(dbConexao1, "%s", conexao);
  /* EXEC SQL connect :dbNomeBanco1; */ 
#line 1252 "tarifaCdr.pc"

{
#line 1252 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 1252 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 1252 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 1252 "tarifaCdr.pc"
  sqlstm.arrsiz = 8;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1252 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )10;
#line 1252 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )465;
#line 1252 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 1252 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqhstv[0] = (unsigned char  *)dbNomeBanco1;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqhstl[0] = (unsigned long )100;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqhsts[0] = (         int  )100;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqindv[0] = (         short *)0;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqinds[0] = (         int  )0;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqharm[0] = (unsigned long )0;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqadto[0] = (unsigned short )0;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqtdso[0] = (unsigned short )0;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqphsv = sqlstm.sqhstv;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqphsl = sqlstm.sqhstl;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqphss = sqlstm.sqhsts;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqpind = sqlstm.sqindv;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqpins = sqlstm.sqinds;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqparm = sqlstm.sqharm;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqparc = sqlstm.sqharc;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqpadto = sqlstm.sqadto;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqptdso = sqlstm.sqtdso;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqlcmax = (unsigned int )100;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqlcmin = (unsigned int )2;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqlcincr = (unsigned int )1;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqlctimeout = (unsigned int )0;
#line 1252 "tarifaCdr.pc"
  sqlstm.sqlcnowait = (unsigned int )0;
#line 1252 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1252 "tarifaCdr.pc"
}

#line 1252 "tarifaCdr.pc"

  sprintf(msg, "ao conectar no Banco [%s] com a conexao [%s]", banco1, dbConexao1);
  escreveSQLErro(sqlca, msg);
  /* EXEC SQL ALTER SESSION SET NLS_DATE_FORMAT='YYYY-MM-DD HH24:MI:SS'; */ 
#line 1255 "tarifaCdr.pc"

{
#line 1255 "tarifaCdr.pc"
  struct sqlexd sqlstm;
#line 1255 "tarifaCdr.pc"
  sqlorat((void **)0, &sqlctx, &oraca);
#line 1255 "tarifaCdr.pc"
  sqlstm.sqlvsn = 13;
#line 1255 "tarifaCdr.pc"
  sqlstm.arrsiz = 8;
#line 1255 "tarifaCdr.pc"
  sqlstm.sqladtp = &sqladt;
#line 1255 "tarifaCdr.pc"
  sqlstm.sqltdsp = &sqltds;
#line 1255 "tarifaCdr.pc"
  sqlstm.stmt = "alter SESSION SET NLS_DATE_FORMAT = 'YYYY-MM-DD HH24:MI:SS'";
#line 1255 "tarifaCdr.pc"
  sqlstm.iters = (unsigned int  )1;
#line 1255 "tarifaCdr.pc"
  sqlstm.offset = (unsigned int  )496;
#line 1255 "tarifaCdr.pc"
  sqlstm.cud = sqlcud0;
#line 1255 "tarifaCdr.pc"
  sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1255 "tarifaCdr.pc"
  sqlstm.sqlety = (unsigned short)4352;
#line 1255 "tarifaCdr.pc"
  sqlstm.occurs = (unsigned int  )0;
#line 1255 "tarifaCdr.pc"
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1255 "tarifaCdr.pc"
}

#line 1255 "tarifaCdr.pc"

}


// Escreve MSG de ERROS ...
int escreveSQLErro(struct sqlca sqlca, char *msg)
{
  int ret = 1;
  if (sqlca.sqlcode < 0)
  {
    sqlca.sqlerrm.sqlerrmc[sqlca.sqlerrm.sqlerrml] = 0;
    printf("%s - SQLCODE: %d - %s\n\n", msg, sqlca.sqlcode, sqlca.sqlerrm.sqlerrmc);
    /* EXEC SQL ROLLBACK; */ 
#line 1267 "tarifaCdr.pc"

{
#line 1267 "tarifaCdr.pc"
    struct sqlexd sqlstm;
#line 1267 "tarifaCdr.pc"
    sqlorat((void **)0, &sqlctx, &oraca);
#line 1267 "tarifaCdr.pc"
    sqlstm.sqlvsn = 13;
#line 1267 "tarifaCdr.pc"
    sqlstm.arrsiz = 8;
#line 1267 "tarifaCdr.pc"
    sqlstm.sqladtp = &sqladt;
#line 1267 "tarifaCdr.pc"
    sqlstm.sqltdsp = &sqltds;
#line 1267 "tarifaCdr.pc"
    sqlstm.iters = (unsigned int  )1;
#line 1267 "tarifaCdr.pc"
    sqlstm.offset = (unsigned int  )511;
#line 1267 "tarifaCdr.pc"
    sqlstm.cud = sqlcud0;
#line 1267 "tarifaCdr.pc"
    sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1267 "tarifaCdr.pc"
    sqlstm.sqlety = (unsigned short)4352;
#line 1267 "tarifaCdr.pc"
    sqlstm.occurs = (unsigned int  )0;
#line 1267 "tarifaCdr.pc"
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1267 "tarifaCdr.pc"
}

#line 1267 "tarifaCdr.pc"

    exit(1);
  }
  return (ret);
} // escreveSQLErro

// **************** Funcoes do MUTEX **************************
// Inicializa o Mutex ( ou semaforo para thread) ...
void inicializaMutex(pthread_mutex_t Mutex)
{
  int rc;
  rc = pthread_mutex_init(&Mutex, NULL);
  if (rc != 0)
  {
    printf("Erro ao inicializar o Mutex.");
    exit(1);
  }
}

// Destroi o Mutex ( ou semaforo para thread) ...
void destroiMutex(pthread_mutex_t Mutex)
{
  int rc;
  rc = pthread_mutex_destroy(&Mutex);
  if (rc != 0)
  {
    printf("\n Erro ao destruir o Mutex.");
    exit(1);
  }
}

// **********
// FUNCOES AUXILIARES ...
char *agora(char *HHMMSS)
{
  static time_t ltnow;
  struct tm *hnow;
  ltnow = time(0);
  hnow = (struct tm*)localtime(&ltnow);
  sprintf(HHMMSS, "%02d:%02d:%02d", hnow->tm_hour, hnow->tm_min, hnow->tm_sec);
  return HHMMSS;
} // Agora

// **********
// FUNCOES AUXILIARES ...
char *agora1(char *HHMMSS)
{
  static time_t ltnow;
  struct tm *hnow;
  ltnow = time(0);
  hnow = (struct tm*)localtime(&ltnow);
  sprintf(HHMMSS, "%02d%02d%02d", hnow->tm_hour, hnow->tm_min, hnow->tm_sec);
  return HHMMSS;
} // Agora


//Funcao para capturar a data atual do sistema
char *hoje(char *AAAAMMDD)
{
  struct tm *hnow;
  time_t ltnow = time(0);
  hnow = (struct tm*)localtime(&ltnow);
  sprintf(AAAAMMDD, "%04d-%02d-%02d ", hnow->tm_year + 1900, hnow->tm_mon + 1, hnow->tm_mday);
  return AAAAMMDD;
}

//Funcao para capturar a data atual do sistema
char *hoje1(char *AAAAMMDD)
{
  struct tm *hnow;
  time_t ltnow = time(0);
  hnow = (struct tm*)localtime(&ltnow);
  sprintf(AAAAMMDD, "%04d%02d%02d", hnow->tm_year + 1900, hnow->tm_mon + 1, hnow->tm_mday);
  return AAAAMMDD;
}

/*******************************************************************************************
 * @executaChamada
 * Descrição: Executa uma chamada de linha de comando com os parâmetros informados.
 *******************************************************************************************/
int executaChamada(const char * strComando)
{
  int retorno = system(strComando);
  if (retorno && (errno == ECHILD))
    return 0;

  return retorno;
}

/**************************************************************************************************
 *@inverteString - inverte a string fornecida
 ***************************************************************************************************/
void inverteString(char *par_str)
{

  int j = 0;
  int i;
  char *pszInvString;

  pszInvString = strdup(par_str);
  memset(pszInvString, 0, strlen(pszInvString));

  for (i = strlen(par_str) - 1; i >= 0; i--)
    (pszInvString[j++]) = par_str[i];
  strcpy(par_str, pszInvString);
  free(pszInvString);
}

/*******************************************************************************************
 * @mascaraCampoValor
 * formatos possiveis
 *
 * 9
 * 9d       9dd           9ddd          9dddd         9ddddd
 * 9,d      9,dd          9,ddd         9,dddd        9,ddddd
 * 9.d      9.dd          9.ddd         9.dddd        9.ddddd
 *
 * Parametros: par_valor - valor de entrada, a ser convertido
 *             par_mascaraValor - mascara do valor de entrada
 *             par_mascaraSaida - mascara do valor de saida
 *             par_retorno - valor convertido retornado
 *
 * Obs. os campos a esquerda apesar de possuirem apenas um caracter podem ter varias posicoes
 *
 *******************************************************************************************/
int mascaraCampoValor(char *par_valor, char *par_mascaraValor, char *par_mascaraSaida, char *par_retorno)
{
  int i = 0;
  int j = 0;
  int k = 0;
  char szCaracteristica[BUFSIZ + 1];
  char szMantissa[BUFSIZ + 1];
  char szAux[BUFSIZ + 1];
  char szMascaraValorEntrada[BUFSIZ + 1];
  char cSeparador;

  int iCaracEntrada = 0;
  int iMantissaEntrada = 0;
  int iCaracSaida = 0;
  int iMantissaSaida = 0;
  int iPosSeparador = 0;

  memset(szCaracteristica, 0, sizeof(szCaracteristica));
  memset(szMantissa, 0, sizeof(szMantissa));
  memset(par_retorno, 0, sizeof(par_retorno));
  memset(szAux, 0, sizeof(szAux));
  memset(szMascaraValorEntrada, 0, sizeof(szMascaraValorEntrada));

  // testa mascara valida
  if ((j = strlen(par_mascaraValor) - 1) == -1)
    return 1;

  // converte mascara para minuscula
  for (k = 0; k < strlen(par_mascaraValor); k++)
    szMascaraValorEntrada[k] = tolower(par_mascaraValor[k]);

  for (i = strlen(par_valor) - 1 ; i >= 0; i--)
  {
    if (szMascaraValorEntrada[j] == '9')
      szCaracteristica[iCaracEntrada++] = par_valor[i];

    else if (szMascaraValorEntrada[j] == 'd')
      szMantissa[iMantissaEntrada++] = par_valor[i];

    else if (szMascaraValorEntrada[j] == ',' || szMascaraValorEntrada[j] == '.')
      iPosSeparador = j;
    else
      return 1;

    if (--j == -1)
      j = 0;
  }
  inverteString(szCaracteristica);
  inverteString(szMantissa);

  iMantissaSaida = 0;
  iCaracSaida = 0;
  iPosSeparador = 0;

  for (i = 0; i < strlen(par_mascaraSaida); i++)
  {
    if (par_mascaraSaida[i] == '9' )
      iCaracSaida++;
    else if (par_mascaraSaida[i] == 'd' || par_mascaraSaida[i] == 'D')
      iMantissaSaida++;
    else if (par_mascaraSaida[i] == ',' || par_mascaraSaida[i] == '.')
    {
      iPosSeparador = i;
      cSeparador = par_mascaraSaida[i];
    }
  }


  memset(       szAux, '0', sizeof(szAux));
  szAux[sizeof(szAux) - 1] = '\0';

  if (szMantissa[0] != 0)
    strncpy(szAux,     szMantissa, iMantissaEntrada);
  szAux[iMantissaSaida] = '\0';


  if (iPosSeparador == 0)
  {
    if (iMantissaSaida > 0)
      sprintf(par_retorno, "%s%s", szCaracteristica, szAux);
    else
      sprintf(par_retorno, "%s", szCaracteristica);
  }
  else
    sprintf(par_retorno, "%s%c%s", szCaracteristica, cSeparador, szAux);


  return 0;

}


int dirName (char *dir, char *arqIn)
{
  int x = 0, i = 0;
  char *aux;

  memset(dir, 0, (int) strlen(dir) + 1);

  aux = (char *) calloc(strlen(arqIn), sizeof(char));
  for (x = 0; arqIn[x] != '\0' && arqIn[x] != '\n'; x++)
  {
    if (arqIn[x] == '/')
    {
      i = 0;
      strcat(dir, aux);
      memset(aux, 0, strlen(aux) + 1);
    }
    aux[i++] = arqIn[x];
  }
  dir[strlen(dir)] = '\0';
  return (0);
}


void calculaDurTarifada( char *durReal, char *durTar)
{
  char cHora[3 + 1];
  char cMinuto[2 + 1];
  char cSegundos[2 + 1];

  int nResto = 0;
  long int nTotalSegundos = 0;
  float nHora = 0;
  float nMinuto = 0;
  float nSegundos = 0;
  char par_duracao[10 + 1];

  memset(par_duracao, sizeof(par_duracao), 0);


  // · total de segundos = (HHH * 3600) + (MM * 60) + SS.
  sprintf(cHora, "%3.3s", durReal);
  sprintf(cMinuto, "%2.2s", durReal + 3);
  sprintf(cSegundos, "%2.2s", durReal + 5);
  nTotalSegundos = ((atoi(cHora) * 3600) + (atoi(cMinuto) * 60) + atoi(cSegundos));


  // atualizar o valor do total de segundos para o minimo de 30 segundos.
  if (nTotalSegundos <= 30)
    nTotalSegundos = 30;

  // · Se o valor do total de segundos não for múltiplo de 6, o sistema deve arredondar o valor para o próximo múltiplo de 6 válido;
  if ((nResto = (nTotalSegundos % 6)) != 0)
    nTotalSegundos += (6 - nResto);

  // · Esta duração deve ser calculada no formato décimo de minuto ( o separador deve ser vírgula). Para transformar em décimo de minuto,
  nHora = (nTotalSegundos / 60) / 60;
  nMinuto = (nTotalSegundos - (nHora * 60 * 60)) / 60;
  nSegundos = (nTotalSegundos - (nHora * 60 * 60) - (nMinuto * 60));

  // · Esta duração deve ser calculada no formato décimo de minuto ( o separador deve ser vírgula). Para transformar em décimo de minuto,
  // aplicar a fórmula: (HH*60) + (MM) + (SS/60).
  sprintf(par_duracao, "%06.1f", (nHora * 60) + nMinuto + (nSegundos / 60));
  retiraCaractere(par_duracao, '.', par_duracao);
  sprintf(durTar, "%06d", atoi(par_duracao));
}

void calculaDurTarifadaDestFixo( char *durReal, char *durTar)
{
	char cHora[3+1];
	char cMinuto[2+1];
	char cSegundos[2+1];

	int nResto = 0;
	long int nTotalSegundos=0;
	float nHora = 0;
	float nMinuto = 0;
	float nSegundos = 0;
	char par_duracao[10+1];

	memset(par_duracao,sizeof(par_duracao),0);


	// · total de segundos = (HHH * 3600) + (MM * 60) + SS.
	sprintf(cHora, "%3.3s", durReal);
	sprintf(cMinuto, "%2.2s", durReal+3);
	sprintf(cSegundos, "%2.2s", durReal+5);
	nTotalSegundos = ((atoi(cHora) * 3600) + (atoi(cMinuto) * 60) + atoi(cSegundos));
 
 
	// atualizar o valor do total de segundos para o minimo de 30 segundos.
	if(nTotalSegundos <= 60)
		nTotalSegundos = 60;

	// · Se o valor do total de segundos não for múltiplo de 30, o sistema deve arredondar o valor para o próximo múltiplo de 30 válido;
	if((nResto = (nTotalSegundos % 30)) != 0)
		nTotalSegundos += (30-nResto);

	// · Esta duração deve ser calculada no formato décimo de minuto ( o separador deve ser vírgula). Para transformar em décimo de minuto,
	nHora = (nTotalSegundos/60) / 60;
	nMinuto = (nTotalSegundos - (nHora * 60 * 60)) / 60;
	nSegundos = (nTotalSegundos - (nHora * 60 * 60) - (nMinuto * 60));

	// · Esta duração deve ser calculada no formato décimo de minuto ( o separador deve ser vírgula). Para transformar em décimo de minuto,
	// aplicar a fórmula: (HH*60) + (MM) + (SS/60).
	sprintf(par_duracao, "%06.1f", (nHora*60) + nMinuto + (nSegundos/60));
	retiraCaractere(par_duracao, '.', par_duracao);
	sprintf(durTar, "%06d", atoi(par_duracao));
}


void retiraCaractere(const char *par_strBufferEntrada, const char par_cCaractere, char *par_strBufferSaida)
{
  const char *q;
  char *p, *r;
  int rem;
  int iTamEnt;
  const char *iUltimo;

  for (q = par_strBufferEntrada, p = par_strBufferSaida, r = par_strBufferSaida,
       rem = 0, iTamEnt = strlen(par_strBufferEntrada), iUltimo = par_strBufferEntrada + iTamEnt - sizeof(char);
       (p = memccpy(p, q, par_cCaractere, iUltimo - q + 1));
       q += (p - r), r = --p, rem++
      );

  par_strBufferSaida[iTamEnt - rem] = '\0';
}

int atualizaConvCarga()
{
  double aux = 0;
  double vlr = 0;
  double dur = 0;
  long seq = 0;

  for (seq = 0; seq < 6999999; seq++)
  {
    // so atualiza para as remessa que tem valor
    if (seqRemessaVal[seq])
    {
      aux = seqRemessaVal[seq];
      vlr = aux / 100000;
      aux = seqRemessaDurTar[seq];
      dur = aux / 10;
      

      /* EXEC SQL update t_conv_carga set val_conversao = :vlr, dur_conversao = :dur
               where seq_conv_carga in(select seq_conv_carga from t_remessareg where num_seqremessa = :seq); */ 
#line 1630 "tarifaCdr.pc"

{
#line 1629 "tarifaCdr.pc"
      struct sqlexd sqlstm;
#line 1629 "tarifaCdr.pc"
      sqlorat((void **)0, &sqlctx, &oraca);
#line 1629 "tarifaCdr.pc"
      sqlstm.sqlvsn = 13;
#line 1629 "tarifaCdr.pc"
      sqlstm.arrsiz = 8;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqladtp = &sqladt;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqltdsp = &sqltds;
#line 1629 "tarifaCdr.pc"
      sqlstm.stmt = "update t_conv_carga set val_conversao = :b0 , dur_conve\
rsao = :b1 where seq_conv_carga in ( select seq_conv_carga from t_remessareg w\
here num_seqremessa = :b2 ) ";
#line 1629 "tarifaCdr.pc"
      sqlstm.iters = (unsigned int  )1;
#line 1629 "tarifaCdr.pc"
      sqlstm.offset = (unsigned int  )526;
#line 1629 "tarifaCdr.pc"
      sqlstm.cud = sqlcud0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqlety = (unsigned short)4352;
#line 1629 "tarifaCdr.pc"
      sqlstm.occurs = (unsigned int  )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqhstv[0] = (unsigned char  *)&vlr;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqhstl[0] = (unsigned long )sizeof(double);
#line 1629 "tarifaCdr.pc"
      sqlstm.sqhsts[0] = (         int  )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqindv[0] = (         short *)0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqinds[0] = (         int  )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqharm[0] = (unsigned long )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqadto[0] = (unsigned short )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqtdso[0] = (unsigned short )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqhstv[1] = (unsigned char  *)&dur;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqhstl[1] = (unsigned long )sizeof(double);
#line 1629 "tarifaCdr.pc"
      sqlstm.sqhsts[1] = (         int  )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqindv[1] = (         short *)0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqinds[1] = (         int  )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqharm[1] = (unsigned long )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqadto[1] = (unsigned short )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqtdso[1] = (unsigned short )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqhstv[2] = (unsigned char  *)&seq;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqhstl[2] = (unsigned long )sizeof(long);
#line 1629 "tarifaCdr.pc"
      sqlstm.sqhsts[2] = (         int  )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqindv[2] = (         short *)0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqinds[2] = (         int  )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqharm[2] = (unsigned long )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqadto[2] = (unsigned short )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqtdso[2] = (unsigned short )0;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqphsv = sqlstm.sqhstv;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqphsl = sqlstm.sqhstl;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqphss = sqlstm.sqhsts;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqpind = sqlstm.sqindv;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqpins = sqlstm.sqinds;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqparm = sqlstm.sqharm;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqparc = sqlstm.sqharc;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqpadto = sqlstm.sqadto;
#line 1629 "tarifaCdr.pc"
      sqlstm.sqptdso = sqlstm.sqtdso;
#line 1629 "tarifaCdr.pc"
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1629 "tarifaCdr.pc"
}

#line 1630 "tarifaCdr.pc"

      if (sqlca.sqlcode < 0)
      {
        printf("\n ERRO:[%d] - No update da tabela t_conv_carga.", sqlca.sqlcode);
        return 1;
      }
      
      /* EXEC SQL COMMIT; */ 
#line 1637 "tarifaCdr.pc"

{
#line 1637 "tarifaCdr.pc"
      struct sqlexd sqlstm;
#line 1637 "tarifaCdr.pc"
      sqlorat((void **)0, &sqlctx, &oraca);
#line 1637 "tarifaCdr.pc"
      sqlstm.sqlvsn = 13;
#line 1637 "tarifaCdr.pc"
      sqlstm.arrsiz = 8;
#line 1637 "tarifaCdr.pc"
      sqlstm.sqladtp = &sqladt;
#line 1637 "tarifaCdr.pc"
      sqlstm.sqltdsp = &sqltds;
#line 1637 "tarifaCdr.pc"
      sqlstm.iters = (unsigned int  )1;
#line 1637 "tarifaCdr.pc"
      sqlstm.offset = (unsigned int  )553;
#line 1637 "tarifaCdr.pc"
      sqlstm.cud = sqlcud0;
#line 1637 "tarifaCdr.pc"
      sqlstm.sqlest = (unsigned char  *)&sqlca;
#line 1637 "tarifaCdr.pc"
      sqlstm.sqlety = (unsigned short)4352;
#line 1637 "tarifaCdr.pc"
      sqlstm.occurs = (unsigned int  )0;
#line 1637 "tarifaCdr.pc"
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
#line 1637 "tarifaCdr.pc"
}

#line 1637 "tarifaCdr.pc"

      if (sqlca.sqlcode < 0)
      {
        printf("\n ERRO:[%d] - No commit da tabela t_conv_carga.", sqlca.sqlcode);
        return 1;
      }
    }

  } // fim for


  return 0;
}
