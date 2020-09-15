#include "gerais.h"







static time_t ltnow;



//static char AAAAMMDD[TAM_MAX_CAMPO+1];



static char AAAAMMDDHHMMSS[TAM_MAX_CAMPO+1];



//static int  dataAferida = FALSE;



static int  inicioAferido = FALSE;







static int tabEbcdicAscii[] =



  {



  /*   0 */   0, /*   1 */ '&', /*   2 */ '&', /*   3 */ '&',



  /*   4 */ '&', /*   5 */ '&', /*   6 */ '&', /*   7 */ 127,



  /*   8 */ '&', /*   9 */ '&', /*  10 */ '&', /*  11 */ '&',



  /*  12 */ '&', /*  13 */ '&', /*  14 */ '&', /*  15 */ '&',



  /*  16 */ '&', /*  17 */ '&', /*  18 */ '&', /*  19 */ '&',



  /*  20 */ '&', /*  21 */ '&', /*  22 */ '&', /*  23 */ '&',



  /*  24 */ '&', /*  25 */ '&', /*  26 */ '&', /*  27 */ '&',



  /*  28 */ '&', /*  29 */ '&', /*  30 */ '&', /*  31 */ '&',



  /*  32 */ '&', /*  33 */ '&', /*  34 */ '&', /*  35 */ '&',



  /*  36 */ '&', /*  37 */ '&', /*  38 */ '&', /*  39 */ '&',



  /*  40 */ '&', /*  41 */ '&', /*  42 */ '&', /*  43 */ '&',



  /*  44 */ '&', /*  45 */ '&', /*  46 */ '&', /*  47 */ '&',



  /*  48 */ '&', /*  49 */ '&', /*  50 */ '&', /*  51 */ '&',



  /*  52 */ '&', /*  53 */ '&', /*  54 */ '&', /*  55 */ '&',



  /*  56 */ '&', /*  57 */ '&', /*  58 */ '&', /*  59 */ '&',



  /*  60 */ '&', /*  61 */ '&', /*  62 */ '&', /*  63 */ '&',



  /*  64 */  32, /*  65 */ '&', /*  66 */ '&', /*  67 */ '&',



  /*  68 */ '&', /*  69 */ '&', /*  70 */ '&', /*  71 */ '&',



  /*  72 */ '&', /*  73 */ '&', /*  74 */  91, /*  75 */  46,



  /*  76 */  60, /*  77 */  40, /*  78 */  43, /*  79 */  33,



  /*  80 */  38, /*  81 */ '&', /*  82 */ '&', /*  83 */ '&',



  /*  84 */ '&', /*  85 */ '&', /*  86 */ '&', /*  87 */ '&',



  /*  88 */ '&', /*  89 */ '&', /*  90 */  93, /*  91 */  36,



  /*  92 */  42, /*  93 */  41, /*  94 */  59, /*  95 */  94,



  /*  96 */  45, /*  97 */  47, /*  98 */ '&', /*  99 */ '&',



  /* 100 */ '&', /* 101 */ '&', /* 102 */ '&', /* 103 */ '&',



  /* 104 */ '&', /* 105 */ '&', /* 106 */ 124, /* 107 */  44,



  /* 108 */  37, /* 109 */  95, /* 110 */  62, /* 111 */  63,



  /* 112 */ '&', /* 113 */ '&', /* 114 */ '&', /* 115 */ '&',



  /* 116 */ '&', /* 117 */ '&', /* 118 */ '&', /* 119 */ '&',



  /* 120 */ '&', /* 121 */  96, /* 122 */  58, /* 123 */  35,



  /* 124 */  64, /* 125 */  39, /* 126 */  61, /* 127 */  34,



  /* 128 */ '&', /* 129 */  65, /* 130 */  66, /* 131 */  67,



  /* 132 */  68, /* 133 */  69, /* 134 */  70, /* 135 */  71,



  /* 136 */  72, /* 137 */  73, /* 138 */ '&', /* 139 */ '&',



  /* 140 */ '&', /* 141 */ '&', /* 142 */ '&', /* 143 */ '&',



  /* 144 */ '&', /* 145 */  74, /* 146 */  75, /* 147 */  76,



  /* 148 */  77, /* 149 */  78, /* 150 */  79, /* 151 */  80,



  /* 152 */  81, /* 153 */  82, /* 154 */ '&', /* 155 */ '&',



  /* 156 */ '&', /* 157 */ '&', /* 158 */ '&', /* 159 */ '&',



  /* 160 */ '&', /* 161 */ 126, /* 162 */  83, /* 163 */  84,



  /* 164 */  85, /* 165 */  86, /* 166 */  87, /* 167 */  88,



  /* 168 */  89, /* 169 */  90, /* 170 */ '&', /* 171 */ '&',



  /* 172 */ '&', /* 173 */ '&', /* 174 */ '&', /* 175 */ '&',



  /* 176 */ '&', /* 177 */ '&', /* 178 */ '&', /* 179 */ '&',



  /* 180 */ '&', /* 181 */ '&', /* 182 */ '&', /* 183 */ '&',



  /* 184 */ '&', /* 185 */ '&', /* 186 */ '&', /* 187 */ '&',



  /* 188 */ '&', /* 189 */ '&', /* 190 */ '&', /* 191 */ '&',



  /* 192 */ 123, /* 193 */  65, /* 194 */  66, /* 195 */  67,



  /* 196 */  68, /* 197 */  69, /* 198 */  70, /* 199 */  71,



  /* 200 */  72, /* 201 */  73, /* 202 */ '&', /* 203 */ '&',



  /* 204 */ '&', /* 205 */ '&', /* 206 */ '&', /* 207 */ '&',



  /* 208 */ 125, /* 209 */  74, /* 210 */  75, /* 211 */  76,



  /* 212 */  77, /* 213 */  78, /* 214 */  79, /* 215 */  80,



  /* 216 */  81, /* 217 */  82, /* 218 */ '&', /* 219 */ '&',



  /* 220 */ '&', /* 221 */ '&', /* 222 */ '&', /* 223 */ '&',



  /* 224 */  92, /* 225 */ '&', /* 226 */  83, /* 227 */  84,



  /* 228 */  85, /* 229 */  86, /* 230 */  87, /* 231 */  88,



  /* 232 */  89, /* 233 */  90, /* 234 */ '&', /* 235 */ '&',



  /* 236 */ '&', /* 237 */ '&', /* 238 */ '&', /* 239 */ '&',



  /* 240 */  48, /* 241 */  49, /* 242 */  50, /* 243 */  51,



  /* 244 */  52, /* 245 */  53, /* 246 */  54, /* 247 */  55,



  /* 248 */  56, /* 249 */  57, /* 250 */ '&', /* 251 */ '&',



  /* 252 */ '&', /* 253 */ '&', /* 254 */ '&', /* 255 */ '&'



  };







int converteEbcdic(char *bufferIn, char *bufferOut)



{



  unsigned char c;



  int n=0;



  for(; *bufferIn; bufferIn++)



  {



    c = *bufferIn;



    *bufferOut = tabEbcdicAscii[(int)c];



    if(isdigit((int)*bufferIn)||(*bufferIn == '-'))



    {



      n++;



    }



    if(isdigit((int)*bufferOut)||(*bufferOut == '-'))



    {



      n--;



    }



    bufferOut++;



  }



  return n;



}







int numerico(char *campo)



{



  int i;







  for(i=0;campo[i];i++)



  {



    if(!isdigit((int)campo[i]))



    {



      return FALSE;



    }



  }







  return TRUE;



}







void dataNumerica(char *AAAAMMDD, int *ano, int *mes, int *dia)



{



  char strRascunho[5];







  //Pega o ano



  strRascunho[0] = 0;



  strncat(strRascunho, AAAAMMDD, 4);







  //Converte o ano



  *ano = atoi(strRascunho);







  //Pega o mes



  strRascunho[0] = 0;



  strncat(strRascunho, AAAAMMDD+4, 2);







  //Converte o mes



  *mes = atoi(strRascunho);







  //Pega o dia



  strRascunho[0] = 0;



  strncat(strRascunho, AAAAMMDD+6, 2);







  //Converte o dia



  *dia = atoi(strRascunho);



}







void horaNumerica(char *HHMMSS, int *hora, int *minuto, int *segundo)



{



  char strRascunho[5];







  //Pega a hora



  strRascunho[0] = 0;



  strncat(strRascunho, HHMMSS, 2);







  //Converte a hora



  *hora = atoi(strRascunho);







  //Pega o minuto



  strRascunho[0] = 0;



  strncat(strRascunho, HHMMSS+2, 2);







  //Converte o minuto



  *minuto = atoi(strRascunho);







  //Pega o segundo



  strRascunho[0] = 0;



  strncat(strRascunho, HHMMSS+4, 2);







  //Converte o segundo



  *segundo = atoi(strRascunho);



}







void longaDuracaoNumerica(char *HHHMMSS, int *hora, int *minuto, int *segundo)



{



  char strRascunho[5];







  //Pega a hora



  strRascunho[0] = 0;



  strncat(strRascunho, HHHMMSS, 3);







  //Converte a hora



  *hora = atoi(strRascunho);







  //Pega o minuto



  strRascunho[0] = 0;



  strncat(strRascunho, HHHMMSS+3, 2);







  //Converte o minuto



  *minuto = atoi(strRascunho);







  //Pega o segundo



  strRascunho[0] = 0;



  strncat(strRascunho, HHHMMSS+5, 2);







  //Converte o segundo



  *segundo = atoi(strRascunho);



}





char *Inicio(void)



{



  struct tm *hnow;







  if (!inicioAferido)



  {



    inicioAferido = TRUE;



    ltnow = time(0);



    hnow = (struct tm*)localtime(&ltnow);



    sprintf(AAAAMMDDHHMMSS,



            "%04d%02d%02d%02d%02d%02d",



            hnow->tm_year+1900,



            hnow->tm_mon+1,



            hnow->tm_mday,



            hnow->tm_hour,



            hnow->tm_min,



            hnow->tm_sec);



  }







  return AAAAMMDDHHMMSS;



}







int abreLog(char *nomeLog, int trunca)



{



  int  modo;







  if (trunca)



  {



    modo = O_WRONLY|O_CREAT|O_TRUNC|O_APPEND;



  }



  else



  {



    modo = O_WRONLY|O_CREAT|O_APPEND;



  }







  return open(nomeLog, modo, 0666);



}







void gravaLog(int fp_log, char *msg)



{



  struct tm *hnow;



  char DDMMAAAAA[32];



  char buffer[TAM_MAX_BUFFER+1];







  ltnow = time(0);



  hnow = (struct tm*)localtime(&ltnow);



  sprintf(DDMMAAAAA,



	  "%02d/%02d/%04d %02d:%02d:%02d",



          hnow->tm_mday,



	  hnow->tm_mon+1,



	  hnow->tm_year+1900,



	  hnow->tm_hour,



	  hnow->tm_min,



	  hnow->tm_sec);



  sprintf(buffer, "%s|%s\n", DDMMAAAAA, msg);



  write(fp_log, buffer, strlen(buffer));



}



void gravaSoLog(int fp_log, char *msg)

{

  char buffer[TAM_MAX_BUFFER+1];

  

  sprintf(buffer,"%s\n", msg);

  

  write(fp_log, buffer, strlen(buffer));

}





static int flagLiberacaoTabelas = TRUE;







int liberarTabelas(void)



{



  return flagLiberacaoTabelas;



}







void naoLiberarTabelas(void)



{



  flagLiberacaoTabelas = FALSE;



}







int tamanhoTerminal(char *terminal)



{



  int indice;







  for (indice=0;terminal[indice]!=0;indice++)



  {  



    if (!(isdigit((int)terminal[indice])))



    {



      return indice;



    }



  }



  



  return indice;



}







void strRight(char *saida,char *entrada,int qtde)



{



  int tam;







  tam = strlen(entrada);







  if (tam > qtde)



  {



    *saida = 0;



    strncat(saida,entrada+(tam-qtde),qtde);



  }



  else



  {



    strcpy(saida,entrada);



  }







  return;



} 







char identDelimitador(char *string)



{



  int contaPipe = 0,



      contaVirg = 0,



      contaPV = 0,



      aspas = FALSE;



  char delimitador;



  int x;







  for(x=0;string[x];x++)



  {



    if (!aspas)



    {



      if (string[x] == '\"')



      { 



        aspas = TRUE;



      }



      else if (string[x] == '|')



      {



        contaPipe++;



      }



      else if (string[x] == ';')



      {



        contaPV++;



      }



      else if (string[x] == ',')



      {



        contaVirg++;



      }      



    }



    else if (string[x] == '\"')



    {



      aspas = FALSE;



    }



  }



 



  if (contaPipe >= contaVirg)



  {



    if (contaPipe >= contaPV)



    {



      delimitador = '|';



    } 



    else



    {



      delimitador = ';';



    }     



  }



  else



  {



    if (contaVirg >= contaPV)



    {



      delimitador = ',';



    } 



    else



    {



      delimitador = ';';



    }     



  }







  return delimitador;



}







void trocaDelimitador(char *string,char dlmAtual,char dlmNovo)



{



  for (;*string;string++)



  {



    if (*string == dlmAtual)



    {



      *string = dlmNovo;



    }



  }







  return;



}











long tamanhoArquivo(FILE *arq)



{



  long tamanho;  







  fseek(arq,0,SEEK_END);







  tamanho = ftell(arq);







  fseek(arq,0,SEEK_SET);







  return tamanho;



}











long qtdeLinhas(FILE *arq)



{



  long qtde = 0;



  static char buffer[TAM_BIG_BUFFER+1];







  fseek(arq,0,SEEK_SET);







  for(;!feof(arq);qtde++)



  {



    fgets(buffer,sizeof(buffer)-1,arq);



  }



  



  fseek(arq,0,SEEK_SET);







  return qtde-1;



}







long ultimaLinha(FILE *arq, char *linha)



{



  long qtde = 0;







  fseek(arq,0,SEEK_SET);







  for(;!feof(arq);qtde++)



  {



    fgets(linha,TAM_MAX_BUFFER,arq);



  }







  fseek(arq,0,SEEK_SET);







  return qtde-1;



}







void separaCampos(char *registro, char del, CAMPOS_STR *vetcampos, int qtdecampos)



{



  char *PosI, *PosF;



  int i;







  PosI = registro;







  for(i=0;i<qtdecampos;i++)



  {



    PosF = strchr(PosI, del);



    if (!PosF)



    {



      strcpy(vetcampos->campo[i], PosI);



      break;



    }



    else



    {



      vetcampos->campo[i][0] = 0;



      strncat(vetcampos->campo[i], PosI, PosF-PosI);



      PosI = PosF + 1;



    }



  }



}







void rtrim(char *string)



{



  int t;







  for(t=strlen(string)-1; t>=0; t--)



    if (*(string+t) != ' ') break;



    else *(string+t) = 0;



}







void quebraTerm(char *assA,char *prefixo)



{



  int i, j;







  for(i=0;assA[i] == '0';i++);



  for(j=0;(isdigit((int)assA[i]))&&(j<4);i++) prefixo[j++] = assA[i];



  prefixo[j] = 0;



}







int aguardaProcessos(int qtdeMax, int qtdeAguardar,



                     int *contaFilhos, int fp_log, char *buffer)



{



  int    numProcessos;



  pid_t  pidw, status;







  if (qtdeAguardar == 0)



  {



    if (*contaFilhos == qtdeMax)



    {



      qtdeAguardar = 1;



    }



    else



    {



      return 0;



    }



  }







  for(numProcessos = 0; numProcessos < qtdeAguardar; numProcessos++)



  {



    pidw = wait((int *)&status);



    (*contaFilhos)--;



    if(WIFEXITED(status))



    {



      if (WEXITSTATUS(status) == 0)



      {



        continue;



      }



      else



      {



        sprintf(buffer, "Processo %d - termino com erro (rc=%d)", (int)pidw, 



                (int)WEXITSTATUS(status));



        gravaLog(fp_log, buffer);



        return (int)pidw;



      }



    }



    else



    {



      if(WIFSIGNALED(status))



      {



        sprintf(buffer, "Processo %d - termino com erro (sinal=%d)", (int)pidw, 



                (int)WTERMSIG(status));



        if(WCOREDUMP(status))



        {



          strcat(buffer, " *** core dump *** ");



        }



      }



      else



      {



        sprintf(buffer, "Processo %d - termino com erro (causa desconhecida)", (int)pidw);



      }



      gravaLog(fp_log, buffer);



      return (int)pidw;



    }



  }



  return 0;



}







int descartaArquivo(char *fullpath)



//Este procedimento move para uma "lixeira" o arquivo ou subdiretorio informado (fullpath).



//A lixeira e' criada um nivel acima em relacao a fullpath.



{



  char *pos1;



  char subDirAcima[TAM_MAX_BUFFER+1];



  char nomeArquivo[TAM_MAX_BUFFER+1];







  strcpy(subDirAcima, fullpath);



  if((pos1 = strrchr(subDirAcima, '/')) > subDirAcima)



  {



    //Remove o ultimo nivel do nome



    *pos1 = 0;



    //Guarda o ultimo nivel do nome



    strcpy(nomeArquivo, pos1+1);



    //Gera o nome da lixeira



    strcat(subDirAcima, "_lixeira");



    //Cria a lixeira



    mkdir(subDirAcima, 0777);



    //Completa o resto do nome



    strcat(subDirAcima, "/");



    strcat(subDirAcima, nomeArquivo);



    //Realiza a renomeacao



    return rename(fullpath, subDirAcima);



  }



  return -1;



}







void limpezaGeral(char *dirSaida, int log, int qtdeMaxProcessos)



//Em casos de erros irrecuperaveis, limpa todos os resultados relacionados ao pid fornecido



//do diretorio de saida



{



  char  strRascunho[TAM_MAX_BUFFER+1];







  DIR   *fdir;



  pid_t pid;



  int   contaFilhos;







  struct dirent *dirlinha;







  //Posiciona o diretorio corrente no diretorio de saida do processamento



  if(chdir(dirSaida))



  {



    sprintf(strRascunho,



            "Erro no acesso (chdir) ao diretorio %s",



            dirSaida);



    gravaLog(log, strRascunho);



    sprintf(strRascunho, "Causa: %s", strerror(errno));



    gravaLog(log, strRascunho);



    exit(94);



  }







  if ((fdir = opendir(dirSaida)) == 0)



  {



    sprintf(strRascunho,



            "Erro na leitura (opendir) do diretorio %s",



            dirSaida);



    gravaLog(log, strRascunho);



    sprintf(strRascunho, "Causa: %s", strerror(errno));



    gravaLog(log, strRascunho);



    exit(95);



  }







  //Le o diretorio de saida, onde estao os resultados a serem removidos



  contaFilhos = 0;



  while ((dirlinha = readdir(fdir)) != 0)



  {



    sprintf(strRascunho, "%05d_", (int)getpid());



    if(strstr(dirlinha->d_name, strRascunho))



    {



      //Aguarda todos os filhos terminarem antes de tentar novas bifurcacoes



      while((pid=fork())<0)



      {



	if (contaFilhos)



	{



          if((aguardaProcessos(qtdeMaxProcessos, contaFilhos,



                               &contaFilhos, log, strRascunho)))



          {



            break;



          }



	}



	else



	{



          //Desiste se nao for possivel bifurcar pelo menos uma vez



          sprintf(strRascunho, "Erro bifurcando para remover %s", dirlinha->d_name);



          gravaLog(log, strRascunho);



          sprintf(strRascunho, "Causa: %s", strerror(errno));



          gravaLog(log, strRascunho);



          exit(96);



	}



      }



      if(pid==0) //processo-filho



      {



        sprintf(strRascunho, "%s/%s", dirSaida, dirlinha->d_name);



	closedir(fdir);



        close(log);



        descartaArquivo(strRascunho);



	exit(0);



      }



      else //processo-pai



      {



        //Mantem controle sobre o maximo de bifurcacoes permitidas



        contaFilhos++;



        if(aguardaProcessos(qtdeMaxProcessos, 0, &contaFilhos, log, strRascunho))



        {



          break;



        }



      }



    }



  }







  closedir(fdir);







  //Aguarda todos os filhos terminarem



  while(aguardaProcessos(qtdeMaxProcessos, contaFilhos, &contaFilhos, log, strRascunho));



}







void limpezaParcial(char *okNok, char *dirSaida, int log, int qtdeMaxProcessos)



//Em casos de erros recuperaveis, limpa todos os resultados nok



//do diretorio de saida



{



  char  strRascunho[TAM_MAX_BUFFER+1];







  DIR   *fdir;



  pid_t pid;



  int   contaFilhos;







  struct dirent *dirlinha;







  //Posiciona o diretorio corrente no diretorio de saida do processamento



  if(chdir(dirSaida))



  {



    sprintf(strRascunho,



            "Erro no acesso (chdir) ao diretorio %s",



            dirSaida);



    gravaLog(log, strRascunho);



    sprintf(strRascunho, "Causa: %s", strerror(errno));



    gravaLog(log, strRascunho);



    exit(97);



  }







  if ((fdir = opendir(dirSaida)) == 0)



  {



    sprintf(strRascunho,



            "Erro na leitura (opendir) do diretorio %s",



            dirSaida);



    gravaLog(log, strRascunho);



    sprintf(strRascunho, "Causa: %s", strerror(errno));



    gravaLog(log, strRascunho);



    exit(98);



  }







  //Le o diretorio de saida, onde estao os resultados a serem removidos



  contaFilhos = 0;



  while ((dirlinha = readdir(fdir)) != 0)



  {



    sprintf(strRascunho, "%s_%05d", okNok, (int)getpid());



    if(strstr(dirlinha->d_name, strRascunho))



    {



      //Aguarda todos os filhos terminarem antes de tentar novas bifurcacoes



      while((pid=fork())<0)



      {



        if (contaFilhos)



        {



          if((aguardaProcessos(qtdeMaxProcessos, contaFilhos,



                               &contaFilhos, log, strRascunho)))



          {



            break;



          }



        }



        else



        {



          //Desiste se nao for possivel bifurcar pelo menos uma vez



          sprintf(strRascunho, "Erro bifurcando para remover %s", dirlinha->d_name);



          gravaLog(log, strRascunho);



          sprintf(strRascunho, "Causa: %s", strerror(errno));



          gravaLog(log, strRascunho);



          exit(99);



        }



      }



      if(pid==0) //processo-filho



      {



        sprintf(strRascunho, "%s/%s", dirSaida, dirlinha->d_name);



        closedir(fdir);



        close(log);



        descartaArquivo(strRascunho);



        exit(0);



      }



      else //processo-pai



      {



        //Mantem controle sobre o maximo de bifurcacoes permitidas



        contaFilhos++;



        if(aguardaProcessos(qtdeMaxProcessos, 0, &contaFilhos, log, strRascunho))



        {



          break;



        }



      }



    }



  }







  closedir(fdir);







  //Aguarda todos os filhos terminarem



  while(aguardaProcessos(qtdeMaxProcessos, contaFilhos, &contaFilhos, log, strRascunho));



}







void limpezaPorRemessa(char *seqRemessa, char *dirSaida, int log, int qtdeMaxProcessos)



//Em casos de erros recuperaveis, limpa todos os resultados das remessas



//cujas quebras tenham falhado



{



  char  strRascunho[TAM_MAX_BUFFER+1];







  DIR   *fdir;



  pid_t pid;



  int   contaFilhos;







  struct dirent *dirlinha;







  //Posiciona o diretorio corrente no diretorio de saida do processamento



  if(chdir(dirSaida))



  {



    sprintf(strRascunho,



            "Erro no acesso (chdir) ao diretorio %s",



            dirSaida);



    gravaLog(log, strRascunho);



    sprintf(strRascunho, "Causa: %s", strerror(errno));



    gravaLog(log, strRascunho);



    exit(97);



  }







  if ((fdir = opendir(dirSaida)) == 0)



  {



    sprintf(strRascunho,



            "Erro na leitura (opendir) do diretorio %s",



            dirSaida);



    gravaLog(log, strRascunho);



    sprintf(strRascunho, "Causa: %s", strerror(errno));



    gravaLog(log, strRascunho);



    exit(98);



  }







  //Le o diretorio de saida, onde estao os resultados a serem removidos



  contaFilhos = 0;



  while ((dirlinha = readdir(fdir)) != 0)



  {



    if(strstr(dirlinha->d_name, seqRemessa))



    {



      //Aguarda todos os filhos terminarem antes de tentar novas bifurcacoes



      while((pid=fork())<0)



      {



        if (contaFilhos)



        {



          if((aguardaProcessos(qtdeMaxProcessos, contaFilhos,



                               &contaFilhos, log, strRascunho)))



          {



            break;



          }



        }



        else



        {



          //Desiste se nao for possivel bifurcar pelo menos uma vez



          sprintf(strRascunho, "Erro bifurcando para remover %s", dirlinha->d_name);



          gravaLog(log, strRascunho);



          sprintf(strRascunho, "Causa: %s", strerror(errno));



          gravaLog(log, strRascunho);



          exit(99);



        }



      }



      if(pid==0) //processo-filho



      {



        sprintf(strRascunho, "%s/%s", dirSaida, dirlinha->d_name);



        closedir(fdir);



        close(log);



        descartaArquivo(strRascunho);



        exit(0);



      }



      else //processo-pai



      {



        //Mantem controle sobre o maximo de bifurcacoes permitidas



        contaFilhos++;



        if(aguardaProcessos(qtdeMaxProcessos, 0, &contaFilhos, log, strRascunho))



        {



          break;



        }



      }



    }



  }







  closedir(fdir);







  //Aguarda todos os filhos terminarem



  while(aguardaProcessos(qtdeMaxProcessos, contaFilhos, &contaFilhos, log, strRascunho));



}







int arquivoExiste(char *nomeArquivo)



{



  int fp;







  fp = open(nomeArquivo, O_RDONLY);



  if(fp < 0)



  {



    return FALSE;



  }



  else



  {



    close(fp);



    return TRUE;



  }



}







int regularFile(char *fullpath)



{



  struct stat propriedades;







  if (lstat(fullpath,&propriedades) < 0)



  {



    return TRUE; //deixa pensar que se trata de um arquivo, para que um tratamento de erro



                 //atue mais para a frente



  }



  



  if(S_ISREG(propriedades.st_mode))



  {



    return TRUE;



  }







  return FALSE;



}







int recuperaQtdeProcessos(void)



{



  FILE *arq;



  char qtde[TAM_MAX_CAMPO+1];



  int result=0;



  if((arq=fopen("numero_processos_filhos.txt","r"))!= NULL)



  {



    fgets(qtde,TAM_MAX_CAMPO,arq);



    fclose(arq);



    qtde[strlen(qtde)-1]=0;



    result=atoi(qtde);



  }



  return result;



} // recuperaQtdeProcessos




// tira os espacos em branco ...
void trim(char *string) 
{
  int    t,i=0;
  char   strOut[strlen(string)+1];
 
  memset(strOut,0,sizeof(strOut));
 
  for(t=0;t<strlen(string);t++){
    if (string[t] != ' ') {
      strOut[i++] = string[t];
    }
  }
  strcpy(string,strOut);
}
