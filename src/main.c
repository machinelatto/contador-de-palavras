#include <stdio.h>
#include<string.h>
int main(){
int n, num_palavras=0, i;
char st[1001];
fgets(st,1000,stdin);
n=strlen(st); //descubro o tamanho da string
for(i=0;i<n;i++){ //percorro essa string
    while(st[i]==' ' || st[i]=='.' || st[i]==',' || st[i]=='-' || st[i]=='!')  //continuo enquanto nao encontro palavras
        i++; 
    if(st[i]!='\n') //Se achou uma palavra
        num_palavras++;                      //incrementa numero de palavras
    while(st[i]!=' ' && st[i] != '\n' && st[i]!='.' && st[i]!=',' && st[i]!='-')//passa pela palavra
    	i++;
    if((st[i] == '.' || st[i] == ',') && (st[i+1] >= 48 && st[i+1]<=57))
    	num_palavras--;
} 
printf("%d\n", num_palavras);//j conta o numero de palavras
return(0);
}
