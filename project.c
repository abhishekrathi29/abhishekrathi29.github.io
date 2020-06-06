#include<stdio.h> 
#include<string.h>
#include <stdlib.h>
#define COLOR_BOLDRED "\x1b[1;31m"
#define COLOR_RED "\x1b[31m"
#define COLOR_BOLDGREEN "\x1b[1;32m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_BOLDYELLOW "\x1b[1;33m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_BOLDBLUE "\x1b[1;34m"
#define COLOR_BLUE "\x1b[34m"
#define COLOR_BOLDMAGENTA "\x1b[1;35m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_BOLDCYAN "\x1b[1;36m"
#define COLOR_CYAN "\x1b[36m"
#define COLOR_BOLDRED1 "\x1b[91;1;7m"
#define COLOR_BOLDCYAN1 "\x1b[1;36;7m"
#define COLOR_BOLDGREEN1 "\x1b[1;32;7m"
#define COLOR_BOLDRESET "\x1b[107;7m"
#define COLOR_RESET "\x1b[0m"
#define COLOR_BOLD "\x1b[1;4;m"


int main()
{
    char quiz[15][300] , name[20];
    char option1[4][50],option2[4][50],option3[4][50],option4[4][50],
         option5[4][50],option6[4][50],option7[4][50],option8[4][50],
         option9[4][50],option10[4][50],option11[4][50],option12[4][50],
         option13[4][50],option14[4][50],option15[4][50];

    int  i, option, mark, ans[15], re[15];

    system("cls");
          printf(COLOR_RESET"\n\n");
          printf(COLOR_RESET COLOR_BOLDRED1"\t\t\t\t\t\t\t\t\t\t   Online Quiz   ");
          printf(COLOR_RESET"\n\n");
          printf(COLOR_RESET COLOR_BOLD"\t\t\t\t\t\t\t\t\tYour name is ");
          gets(name);
         strcpy (quiz[0],COLOR_RESET COLOR_BOLDCYAN"\t\t\t\t\t\t\t1. The loop for which the condition is checked at the end of the loop.");
         strcpy (option1 [0],"\t\t\t\t\t\t\t1. for");
         strcpy (option1 [1],"\t\t\t\t\t\t\t2. while");
         strcpy (option1 [2],"\t\t\t\t\t\t\t3. do-while");
         strcpy (option1 [3],"\t\t\t\t\t\t\t4. switch");
         ans[0]=2;
         strcpy (quiz[1],COLOR_BOLDCYAN"\t\t\t\t\t\t\t2. The starting value of an array index is _ _ _ _ _ _.");
         strcpy (option2 [0],"\t\t\t\t\t\t\t1. 0");
         strcpy (option2 [1],"\t\t\t\t\t\t\t2. 1");
         strcpy (option2 [2],"\t\t\t\t\t\t\t3. 2");
         strcpy (option2 [3],"\t\t\t\t\t\t\t4. 3");
         ans[1]=0;
         strcpy (quiz[2],COLOR_BOLDCYAN"\t\t\t\t\t\t\t3. The reserved words in C program is called.");
         strcpy (option3 [0],"\t\t\t\t\t\t\t1. Variable");
         strcpy (option3 [1],"\t\t\t\t\t\t\t2. Datatype");
         strcpy (option3 [2],"\t\t\t\t\t\t\t3. Keyword");
         strcpy (option3 [3],"\t\t\t\t\t\t\t4. None of these");
         ans[2]=2;
         strcpy (quiz[3],COLOR_BOLDCYAN"\t\t\t\t\t\t\t4. Which of the following is a loop statement.");
         strcpy (option4 [0],"\t\t\t\t\t\t\t1. for");
         strcpy (option4 [1],"\t\t\t\t\t\t\t2. while");
         strcpy (option4 [2],"\t\t\t\t\t\t\t3. do while");
         strcpy (option4 [3],"\t\t\t\t\t\t\t4. all of these");
         ans[3]=3;
         strcpy (quiz[4],COLOR_BOLDCYAN"\t\t\t\t\t\t\t5. Which of the following represents a logical operator.");
         strcpy (option5 [0],"\t\t\t\t\t\t\t1. <<");
         strcpy (option5 [1],"\t\t\t\t\t\t\t2. +=");
         strcpy (option5 [2],"\t\t\t\t\t\t\t3. &&");
         strcpy (option5 [3],"\t\t\t\t\t\t\t4. ++");
         ans[4]=2;
         strcpy (quiz[5],COLOR_BOLDCYAN"\t\t\t\t\t\t\t6. _ _ _ _ _ _ must be given at the end of case statement.");
         strcpy (option6 [0],"\t\t\t\t\t\t\t1. break");
         strcpy (option6 [1],"\t\t\t\t\t\t\t2. continue");
         strcpy (option6 [2],"\t\t\t\t\t\t\t3. goto");
         strcpy (option6 [3],"\t\t\t\t\t\t\t4. else");
         ans[5]=0;
         strcpy (quiz[6],COLOR_BOLDCYAN"\t\t\t\t\t\t\t7. The function for dynamic memory allocation is _ _ _ _ _ _.");
         strcpy (option7 [0],"\t\t\t\t\t\t\t1. malloc");
         strcpy (option7 [1],"\t\t\t\t\t\t\t2. rand");
         strcpy (option7 [2],"\t\t\t\t\t\t\t3. srand");
         strcpy (option7 [3],"\t\t\t\t\t\t\t4. scanf");
         ans[6]=0;
         strcpy (quiz[7],COLOR_BOLDCYAN"\t\t\t\t\t\t\t8. _ _ _ _ _ _ is essential for the execution of a C program.");
         strcpy (option8 [0],"\t\t\t\t\t\t\t1. Interpreter");
         strcpy (option8 [1],"\t\t\t\t\t\t\t2. Compiler");
         strcpy (option8 [2],"\t\t\t\t\t\t\t3. Editor");
         strcpy (option8 [3],"\t\t\t\t\t\t\t4. Defragmenter");
         ans[7]=1;
         strcpy (quiz[8],COLOR_BOLDCYAN"\t\t\t\t\t\t\t9. A group of variable with same name and data type is _ _ _ _ _ _.");
         strcpy (option9 [0],"\t\t\t\t\t\t\t1. Function");
         strcpy (option9 [1],"\t\t\t\t\t\t\t2. Header File");
         strcpy (option9 [2],"\t\t\t\t\t\t\t3. Structure");
         strcpy (option9 [3],"\t\t\t\t\t\t\t4. Array");
         ans[8]=3 ;
         strcpy (quiz[9],COLOR_BOLDCYAN"\t\t\t\t\t\t\t10. The data type that represent valueless purpose is _ _ _ _ _ _.");
         strcpy (option10 [0],"\t\t\t\t\t\t\t1. int");
         strcpy (option10 [1],"\t\t\t\t\t\t\t2. char");
         strcpy (option10 [2],"\t\t\t\t\t\t\t3. void");
         strcpy (option10 [3],"\t\t\t\t\t\t\t4. float");
         ans[9]=2;
         strcpy (quiz[10],COLOR_BOLDCYAN"\t\t\t\t\t\t\t11. The library function to read a single character is _ _ _ _ _ _.");
         strcpy (option11 [0],"\t\t\t\t\t\t\t1. printf");
         strcpy (option11 [1],"\t\t\t\t\t\t\t2. scan");
         strcpy (option11 [2],"\t\t\t\t\t\t\t3. getch");
         strcpy (option11 [3],"\t\t\t\t\t\t\t4. none of the above");
         ans[10]=2;
         strcpy (quiz[11],COLOR_BOLDCYAN"\t\t\t\t\t\t\t12. A structure declaration starts with the keyword.");
         strcpy (option12 [0],"\t\t\t\t\t\t\t1. structure");
         strcpy (option12 [1],"\t\t\t\t\t\t\t2. str");
         strcpy (option12 [2],"\t\t\t\t\t\t\t3. struct");
         strcpy (option12 [3],"\t\t\t\t\t\t\t4. define");
         ans[11]=2;
         strcpy (quiz[12],COLOR_BOLDCYAN"\t\t\t\t\t\t\t13. The scope of a global variable.");
         strcpy (option13 [0],"\t\t\t\t\t\t\t1. extern");
         strcpy (option13 [1],"\t\t\t\t\t\t\t2. auto");
         strcpy (option13 [2],"\t\t\t\t\t\t\t3. static");
         strcpy (option13 [3],"\t\t\t\t\t\t\t4. dynamic");
         ans[12]=0;
         strcpy (quiz[13],COLOR_BOLDCYAN"\t\t\t\t\t\t\t14. Write declaration statement of xy=45.");
         strcpy (option14 [0],"\t\t\t\t\t\t\t1. int xy=45;");
         strcpy (option14 [1],"\t\t\t\t\t\t\t2. 45");
         strcpy (option14 [2],"\t\t\t\t\t\t\t3. int xy;");
         strcpy (option14 [3],"\t\t\t\t\t\t\t4. char xy;");
         ans[13]=2;
         strcpy (quiz[14],COLOR_BOLDCYAN"\t\t\t\t\t\t\t15. Software that is essential for the management of hardware and other user programs.");
         strcpy (option15 [0],"\t\t\t\t\t\t\t1. Editor");
         strcpy (option15 [1],"\t\t\t\t\t\t\t2. Operating System");
         strcpy (option15 [2],"\t\t\t\t\t\t\t3. Linker");
         strcpy (option15 [3],"\t\t\t\t\t\t\t4. Loader");
         ans[14]=1;

         do
         {
             printf(COLOR_RESET"\n\n\n");
             printf(COLOR_RESET  COLOR_BOLDRESET"\t\t\t\t\t\t\t\t          ");
             printf(COLOR_RESET COLOR_BOLDCYAN "  Quiz C programming  ");
             printf( COLOR_RESET COLOR_BOLDRESET"          ");
              printf(COLOR_RESET"\n");

             printf(COLOR_RESET COLOR_BOLDBLUE "\n\t\t\t\t\t\t\t\t ****************************************");
             printf(COLOR_RESET COLOR_BOLDYELLOW "\n\t\t\t\t\t\t\t\t\t 1. Display Questions");
             printf(COLOR_BOLDYELLOW "\n\t\t\t\t\t\t\t\t\t 2. Display Correct Answers");
             printf(COLOR_BOLDYELLOW "\n\t\t\t\t\t\t\t\t\t 3. Display Result");
             printf(COLOR_BOLDYELLOW "\n\t\t\t\t\t\t\t\t\t 4. EXIT");
             printf(COLOR_BOLDBLUE "\n\t\t\t\t\t\t\t\t ****************************************");
             printf(COLOR_RESET COLOR_BOLDRED "\n\n\n\t\t\t\t\t\t\t\t Enter your option : ");
             scanf("%d",&option);
             switch(option)
             {
                 case 1:

                     printf(COLOR_RESET "\n %s \n",quiz [0]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option1[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[0]);

                     printf("\n %s \n",quiz[1]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option2[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[1]);

                     printf("\n %s \n",quiz[2]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option3[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[2]);

                     printf("\n %s \n",quiz[3]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option4[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[3]);

                     printf("\n %s \n",quiz[4]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option5[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[4]);

                     printf("\n %s \n",quiz[5]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option6[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[5]);

                     printf("\n %s \n",quiz[6]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option7[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[6]);

                     printf("\n %s \n",quiz[7]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option8[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[7]);

                     printf("\n %s \n",quiz[8]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option9[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[8]);

                     printf("\n %s \n",quiz[9]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option10[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[9]);

                     printf("\n %s \n",quiz[10]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option11[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[10]);

                     printf("\n %s \n",quiz[11]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option12[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[11]);

                     printf("\n %s \n",quiz[12]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option13[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[12]);

                     printf("\n %s \n",quiz[13]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option14[i]);
                     }
                     printf(COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[13]);

                     printf("\n %s \n",quiz[14]);
                     for(i=0;i<4;i++)
                     {
                         printf("\n %s",option15[i]);
                     }
                     printf(COLOR_RESET COLOR_BOLDMAGENTA"\n\n\t\t\t\t\t\t\t Enter your answers number : ");
                     scanf("%d",&re[14]);
                     break;

                 case 2:

                     printf(COLOR_RESET COLOR_MAGENTA"\n\n\t\t\t\t\t\t\tCHECK THE CORRECT ANSWERS");
                     printf(COLOR_RESET COLOR_BOLDBLUE"\n\t\t\t\t\t\t\t*************************");
                     printf(COLOR_BOLDBLUE"\n\n %s \n %s",quiz[0] ,option1[ans[0]]);
                     printf(COLOR_BOLDGREEN"\n\n %s \n %s",quiz[1] ,option2[ans[1]]);
                     printf(COLOR_BOLDGREEN"\n\n %s \n %s",quiz[2] ,option3[ans[2]]);
                     printf(COLOR_BOLDGREEN"\n\n %s \n %s",quiz[3] ,option4[ans[3]]);
                     printf(COLOR_BOLDGREEN"\n\n %s \n %s",quiz[4] ,option5[ans[4]]);
                     printf(COLOR_BOLDGREEN"\n\n %s \n %s",quiz[5] ,option6[ans[5]]);
                     printf(COLOR_BOLDGREEN"\n\n %s \n %s",quiz[6] ,option7[ans[6]]);
                     printf(COLOR_BOLDGREEN"\n\n %s \n %s",quiz[7] ,option8[ans[7]]);
                     printf(COLOR_BOLDGREEN"\n\n %s \n %s",quiz[8] ,option9[ans[8]]);
                     printf(COLOR_BOLDGREEN"\n\n %s \n %s",quiz[9] ,option10[ans[9]]);
                     printf(COLOR_BOLDGREEN"\n\n %s \n %s",quiz[10] ,option11[ans[10]]);
                     printf(COLOR_BOLDGREEN"\n\n %s \n %s",quiz[11] ,option12[ans[11]]);
                     printf(COLOR_BOLDGREEN"\n\n %s \n %s",quiz[12] ,option13[ans[12]]);
                     printf(COLOR_BOLDGREEN"\n\n %s \n %s",quiz[13] ,option14[ans[13]]);
                     printf(COLOR_RESET COLOR_BOLDGREEN"\n\n %s \n %s",quiz[14] ,option15[ans[14]]);
                     break ;

                 case 3:
                    printf(COLOR_RESET"\n\n\t\t\t\t\t\t\tMarks\tMessage\n");
                    printf(COLOR_RESET"\n\t\t\t\t\t\t\t12-15\tExcellent\t"COLOR_BOLDGREEN1 "  ");
                    printf(COLOR_RESET"\n");
                    printf(COLOR_RESET"\n\t\t\t\t\t\t\t8-12\tGood marks\t"COLOR_BOLDCYAN1 "  ");
                    printf(COLOR_RESET"\n");
                    printf(COLOR_RESET"\n\t\t\t\t\t\t\t0-8\tyou can improve\t"COLOR_RESET COLOR_BOLDRED1 "  ");
                    printf(COLOR_RESET"\n\n");

                     mark=0;
                     for(i=0;i<=15;i++)
                     {
                         if(ans[i]+1==re[i])
                         {
                             mark++;
                         }
                     }
                        printf(COLOR_RESET COLOR_BOLDMAGENTA"\n\t\t\t\t\t\t\t\t Out of 15 you score %d ",mark);

                        if(mark>12)
                        {
                            printf(COLOR_BOLDGREEN"\n\n\t\t\t\t\t\t\t\t** Excellent!! **");
                        }
                        else if(mark>8)
                        {
                            printf(COLOR_BOLDCYAN"\n\n\t\t\t\t\t\t\t\t** Good marks!! **");
                        }
                        else if(mark<8)
                        {
                            printf(COLOR_RESET COLOR_BOLDRED"\n\n\t\t\t\t\t\t\t\t** You can improve!! **");
                        }

                        break;

             }
         }
         while(option!=15);
         return 0 ;
}
