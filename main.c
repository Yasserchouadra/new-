#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void lire_fichier(char chemin[20]){
    FILE *f;
   f=fopen(chemin,"r");
   if(f == NULL || feof(f)){ printf("vide");}
   char mot[256];

   while(!feof(f)){
   fgets(mot,256,f);
   if (!feof(f))
    printf("%s",mot);
     }}
    void ecrit(char chemin[20]){

   FILE *r;
   r=fopen(chemin,"a+");
   char inter[256];
       int i=1;

   if(r == NULL){ printf("pas exixst");}
   else{
    while(!feof(r) && (i<5))
    {
        scanf("%s",inter);
        if(strcasecmp(inter,"ok")!=0)
        {
         fputs(inter,r);
         fputs("\n",r);
        }
        else{i=100;}
    }
   }

    fclose(r);
    }
int main()
{
    FILE *f,*p;
   f=fopen("fic1","a+");
   p=fopen("fic2","a+");
      if(f == NULL || feof(f)){ printf("vide");}
      if(p == NULL || feof(f)){ printf("vide");}

   char mot[256];

   while(!feof(p)){
    fgets(mot,256,p);
       while (!feof(f))
       {
               fgets(mot,256,f);
               if(feof(f))
               {
                    fputs(mot,f);
                    fputs("\n",f);
               }
       }
                  }
}
