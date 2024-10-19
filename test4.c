#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
void program_filter(char *file_name);
   FILE *fp,*ffp,*tp;
   char c,date[20],temp[100];
    // declare a char buffer
    char string[20];
    char t[10];
    int i=1,usrtime=0,j=0, a;
    char show[100]; 
int main()
{

    JUMP:printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
    gets(t);
         ffp=fopen("Weekly_schedule.txt","r");
         tp=fopen("temp.txt","w");
         int m=0; 
    while(m<50)
    {    
         fscanf(ffp,"%s",temp);
         if(strcmp(temp,t)!=0)
         {
            fprintf(tp,"%s\n",temp);
         }else
         {
            fprintf(tp,"%s",temp);
            fscanf(ffp,"%s",temp);
            program_filter("Monday.txt");
            printf("Enter the name of the show you'd like to watch>> ");
            fgets(show,sizeof(show),stdin);
            strcpy(temp,show);
            fprintf(tp,"\n%s",temp);
         }
      c==fgetc(ffp);
      if(c==EOF)
      {
         break;
      }
         m++;
    }
    
    fclose(ffp);
    fclose(tp);
   
    remove("Weekly_schedule.txt");
    rename("temp.txt","Weekly_schedule.txt");
return 0;
}
void program_filter(char *file_name)
{
              fp=fopen (file_name, "r");
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
}