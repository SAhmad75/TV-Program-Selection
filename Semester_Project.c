#include<stdio.h>
#include<time.h>
#include<string.h>
void program_display(char *file_name);
FILE *fp,*ffp,*tp;
	int usrday=0;
    char c,date[20],temp[100];
    // declare a char buffer
    char string[20];
    char t[10];
    int i=1,usrtime=0,j=0, a;
    char show[100];
struct userinfo
    {
        char user_name[50];
        char user_ID[50];

    };
int main()
{
    
    struct userinfo user_1;
    printf("\nEnter your good Name:");
    scanf("%s", user_1.user_name);
    printf("Enter user_ID:");
    scanf("%s", user_1.user_ID);
    
    clock_t tic = clock();
    
    printf("Welcome to TV program scheduler. Here, you can set schedule of your favourite TV programs.\n\n");
    JUMP:
    printf("Please select a day on which you'd like to watch a show.\n");
    printf("1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n7. Sunday\n");
    printf("Enter the day number>>");
    scanf("%d", &usrday);
    switch (usrday)
    {
    case 1:
       printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
    scanf("%s",&t);
   program_display("Monday.txt");
   printf("Enter the name of the show you'd like to watch>>");
   fgets(show,sizeof(show),stdin);
   fgets(show,sizeof(show),stdin);
   fp=fopen("Weekly_schedule.txt", "a+");
   fprintf(fp,"%s \t\t Time:%s\t Monday\n", show,t);
   fclose(fp);
   printf("Press 2 to go to the beginning and 3 to change the previous show for the previous timing>>");
      scanf("%d", &a);
      if (a==2)
      {
         goto JUMP;
      }
      if(a==3)
      {
        printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
      gets(t);
      gets(t);
         strcpy(date,"Time:");
         strcat(date,t);
         ffp=fopen("Weekly_schedule.txt","r");
         tp=fopen("temp.txt","w+");
         int m=0; 
    while(m<50)
    {    
         fscanf(ffp,"%s",temp);
         if(strcmp(temp,date)!=0)
         {
            fprintf(tp,"%s",temp);
         }else
         {
            fprintf(tp,"%s\n",temp);
            fscanf(ffp,"%s",temp);
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
                     printf("Enter the name of the show you'd like to watch>> ");
                     fgets(show,sizeof(show),stdin);
                     strcpy(temp,show);
                     fprintf(tp," %s",temp);
      }
      c=fgetc(ffp);
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
    }
    break;
    case 2:
     printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
    scanf("%s",&t);
   program_display("Tuesday.txt");
   printf("Enter the name of the show you'd like to watch>>");
   fgets(show,sizeof(show),stdin);
   fgets(show,sizeof(show),stdin);
   fp=fopen("Weekly_schedule.txt", "a+");
   fprintf(fp,"%s \t\t Time:%s\t Tuesday\n", show,t);
   fclose(fp);
   printf("Press 2 to go to the beginning and 3 to change the previous show for the previous timing>>");
      scanf("%d", &a);
      if (a==2)
      {
         goto JUMP;
      }
      if(a==3)
      {
        printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
      gets(t);
      gets(t);
         strcpy(date,"Time:");
         strcat(date,t);
         ffp=fopen("Weekly_schedule.txt","r");
         tp=fopen("temp.txt","w");
         int m=0; 
    while(m<50)
    {    
         fscanf(ffp,"%s",temp);
         if(strcmp(temp,date)!=0)
         {
            fprintf(tp,"%s",temp);
         }else
         {
            fprintf(tp,"%s",temp);
            fscanf(ffp,"%s",temp);
            fp=fopen ("Tuesday.txt", "r");
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
                     printf("Enter the name of the show you'd like to watch>> ");
                     fgets(show,sizeof(show),stdin);
                     
                     strcpy(temp,show);
                     fprintf(tp,"\n%s",temp);
      }
      c=fgetc(ffp);
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
    }
    break;
    case 3:
     printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
    scanf("%s",&t);
   program_display("Wednesday.txt");
   printf("Enter the name of the show you'd like to watch>>");
   fgets(show,sizeof(show),stdin);
   fgets(show,sizeof(show),stdin);
   fp=fopen("Weekly_schedule.txt", "a+");
   fprintf(fp,"%s \t\t Time:%s\t Wednesday\n", show,t);
   fclose(fp);
   printf("Press 2 to go to the beginning and 3 to change the previous show for the previous timing>>");
      scanf("%d", &a);
      if (a==2)
      {
         goto JUMP;
      }
      if(a==3)
      {
        printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
      gets(t);
      gets(t);
         strcpy(date,"Time:");
         strcat(date,t);
         ffp=fopen("Weekly_schedule.txt","r");
         tp=fopen("temp.txt","w");
         int m=0; 
    while(m<50)
    {    
         fscanf(ffp,"%s",temp);
         if(strcmp(temp,date)!=0)
         {
            fprintf(tp,"%s",temp);
         }else
         {
            fprintf(tp,"%s",temp);
            fscanf(ffp,"%s",temp);
            fp=fopen ("Wednesday.txt", "r");
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
                     printf("Enter the name of the show you'd like to watch>> ");
                     fgets(show,sizeof(show),stdin);
                     
                     strcpy(temp,show);
                     fprintf(tp,"\n%s",temp);
      }
      c=fgetc(ffp);
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
    }
    break;
    case 4:
     printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
    scanf("%s",&t);
   program_display("Thursday.txt");
   printf("Enter the name of the show you'd like to watch>>");
   fgets(show,sizeof(show),stdin);
   fgets(show,sizeof(show),stdin);
   fp=fopen("Weekly_schedule.txt", "a+");
   fprintf(fp,"%s \t\t Time:%s\t Thursday\n", show,t);
   fclose(fp);
   printf("Press 2 to go to the beginning and 3 to change the previous show for the previous timing>>");
      scanf("%d", &a);
      if (a==2)
      {
         goto JUMP;
      }
      if(a==3)
      {
        printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
      gets(t);
      gets(t);
         strcpy(date,"Time:");
         strcat(date,t);
         ffp=fopen("Weekly_schedule.txt","r");
         tp=fopen("temp.txt","w");
         int m=0; 
    while(m<50)
    {    
         fscanf(ffp,"%s",temp);
         if(strcmp(temp,date)!=0)
         {
            fprintf(tp,"%s",temp);
         }else
         {
            fprintf(tp,"%s",temp);
            fscanf(ffp,"%s",temp);
            fp=fopen ("Thursday.txt", "r");
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
                     printf("Enter the name of the show you'd like to watch>> ");
                     fgets(show,sizeof(show),stdin);
                     
                     strcpy(temp,show);
                     fprintf(tp,"\n%s",temp);
      }
      c=fgetc(ffp);
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
    }
    break;
    case 5:
     printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
    scanf("%s",&t);
   program_display("Friday.txt");
   printf("Enter the name of the show you'd like to watch>>");
   fgets(show,sizeof(show),stdin);
   fgets(show,sizeof(show),stdin);
   fp=fopen("Weekly_schedule.txt", "a+");
   fprintf(fp,"%s \t\t Time:%s\t Friday\n", show,t);
   fclose(fp);
   printf("Press 2 to go to the beginning and 3 to change the previous show for the previous timing>>");
      scanf("%d", &a);
      if (a==2)
      {
         goto JUMP;
      }
      if(a==3)
      {
        printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
      gets(t);
      gets(t);
         strcpy(date,"Time:");
         strcat(date,t);
         ffp=fopen("Weekly_schedule.txt","r");
         tp=fopen("temp.txt","w");
         int m=0; 
    while(m<50)
    {    
         fscanf(ffp,"%s",temp);
         if(strcmp(temp,date)!=0)
         {
            fprintf(tp,"%s",temp);
         }else
         {
            fprintf(tp,"%s",temp);
            fscanf(ffp,"%s",temp);
            fp=fopen ("Friday.txt", "r");
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
                     printf("Enter the name of the show you'd like to watch>> ");
                     fgets(show,sizeof(show),stdin);
                     
                     strcpy(temp,show);
                     fprintf(tp,"\n%s",temp);
      }
      c=fgetc(ffp);
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
    }
    break;
    case 6:
     printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
    scanf("%s",&t);
   program_display("Saturday.txt");
   printf("Enter the name of the show you'd like to watch>>");
   fgets(show,sizeof(show),stdin);
   fgets(show,sizeof(show),stdin);
   fp=fopen("Weekly_schedule.txt", "a+");
   fprintf(fp,"%s \t\t Time:%s\t Saturday\n", show,t);
   fclose(fp);
   printf("Press 2 to go to the beginning and 3 to change the previous show for the previous timing>>");
      scanf("%d", &a);
      if (a==2)
      {
         goto JUMP;
      }
      if(a==3)
      {
        printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
      gets(t);
      gets(t);
         strcpy(date,"Time:");
         strcat(date,t);
         ffp=fopen("Weekly_schedule.txt","r");
         tp=fopen("temp.txt","w");
         int m=0; 
    while(m<50)
    {    
         fscanf(ffp,"%s",temp);
         if(strcmp(temp,date)!=0)
         {
            fprintf(tp,"%s",temp);
         }else
         {
            fprintf(tp,"%s",temp);
            fscanf(ffp,"%s",temp);
            fp=fopen ("Saturday.txt", "r");
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
                     printf("Enter the name of the show you'd like to watch>> ");
                     fgets(show,sizeof(show),stdin);
                     
                     strcpy(temp,show);
                     fprintf(tp,"\n%s",temp);
      }
      c=fgetc(ffp);
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
    }
    break;
    case 7:
     printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
    scanf("%s",&t);
   program_display("Sunday.txt");
   printf("Enter the name of the show you'd like to watch>>");
   fgets(show,sizeof(show),stdin);
   fgets(show,sizeof(show),stdin);
   fp=fopen("Weekly_schedule.txt", "a+");
   fprintf(fp,"%s \t\t Time:%s\t Sunday\n", show,t);
   fclose(fp);
   printf("Press 2 to go to the beginning and 3 to change the previous show for the previous timing>>");
      scanf("%d", &a);
      if (a==2)
      {
         goto JUMP;
      }
      if(a==3)
      {
        printf("\nEnter the time in \"hh:mmam/pm \"  format >> ");
      gets(t);
      gets(t);
         strcpy(date,"Time:");
         strcat(date,t);
         ffp=fopen("Weekly_schedule.txt","r");
         tp=fopen("temp.txt","w");
         int m=0; 
    while(m<50)
    {    
         fscanf(ffp,"%s",temp);
         if(strcmp(temp,date)!=0)
         {
            fprintf(tp,"%s",temp);
         }else
         {
            fprintf(tp,"%s ",temp);
            fscanf(ffp,"%s",temp);
            fp=fopen ("Sunday.txt", "r");
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
                     printf("Enter the name of the show you'd like to watch>> ");
                     fgets(show,sizeof(show),stdin);
                     
                     strcpy(temp,show);
                     fprintf(tp,"\n%s",temp);
      }
      c=fgetc(ffp);
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
    }
    break;
    default:
    printf("Enter a valid number");
    break;
    }
    clock_t toc = clock();
    printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
return 0;
}
void program_display(char *file_name)
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
