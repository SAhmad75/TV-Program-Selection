#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
   FILE *fp;
   char c;
    // declare a char buffer
    char string[20];
    char t[10];
    int i=1,usrtime=0,j=0, a;
    char show[100]; 
    JUMP:printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
    scanf("%s",t);
    // printf("You entered ");
    // puts(t);
    fp=fopen ("Monday.txt", "r");
     while (1)
     {
      fscanf(fp,"%s",string);     
      if(strcmp(t,string)==0)
      {     c=fgetc(fp);
            while(string[0]!='\n')
            {
               printf("%c",c);
               c=fgetc(fp);
               if(c=='\n')
               {
                   printf("\n");
                    break;    
               }        
            }
      }
       c=fgetc(fp);
      if(c==EOF)
      {
         break;
      } 
    } 
   fclose(fp);
   printf("Press 1 to continue>>");
   scanf("%d", &j);
   if (j==1)
   { 
    printf("Enter the name of the show you'd like to watch>>");
    fgets(show,sizeof(show),stdin);
    fgets(show,sizeof(show),stdin);
    fp=fopen("Weekly_schedule.txt", "a+");
    fprintf(fp,"%s \t\t Time:%s\n", show,t);
    fclose(fp);
   }
   fp=fopen("Weeklys_schedule.txt", "r");
   while (1)
   {
      
      if (c==EOF)
      {
         break;
      }
      
   }
      printf("Press 2 to go to the beginning >>");
      scanf("%d", &a);
      if (a==2)
      {
         goto JUMP;
      }
return 0;
}