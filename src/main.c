#include <stdio.h>
#include <string.h>
int main(){
int n, num_palavras=0, i;
char st[1001];
fgets(st,1000,stdin); //usei fgets() em vez de scanf() e funcionou, espero que aceite :)
n=strlen(st); //descubro o tamanho da string
for(i=0;i<n;i++){ //percorro essa string
    while(st[i]==' ' || st[i]=='.' || st[i]==',' || st[i]=='-' || st[i]=='!')  //continuo enquanto nao encontro o começo de uma palavra
        i++; 
    if(st[i]!='\n') //Se achar uma palavra, sai do while e entra aqui incrementando o valor
        num_palavras++;                     
    while(st[i]!=' ' && st[i] != '\n' && st[i]!='.' && st[i]!=',' && st[i]!='-') //percorre a palavra, '.,- ' indicam o final de uma palavra 
    	i++;
    if((st[i] == '.' || st[i] == ',') && (st[i+1] >= 48 && st[i+1]<=57)) //a lógica utilizada iria contar números com vírgula ou ponto em dobro
    	num_palavras--;                                                  //assim se o o ponto ou virgula estiver num numero subtrai um do total
} 
printf("%d\n", num_palavras);//imprime o resultado
return(0);
}
