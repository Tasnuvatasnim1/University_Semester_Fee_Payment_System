#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<time.h>

void call_func1(void);
void call_func2(void);
void call_func3(void);
void callID(void);
 char ch;
  int m,i,n,a,sum=0;
  int add4;
   int arr[4];
   char id[20];
    int len;
 int decision;
int revise_course;
  double tution_fee=0;
   double grand_total=0;
char name[30];



//------------------------Main function--------------------------


int main ()
{
    int ID;
     printf("\n \t \t  \t \t  \t \t \t WELCOME TO EAST WEST UNIVERSITY \n");
    printf("Enter your Name: ");

    gets(name);

    callID();

call_func1();
    call_func2();



    if (sum>=9 && sum<=15)
        printf("\t\t\t\tYou are ready to proceed........\n\n\n");
     else
        {
             printf("\t\tYour have taken %d credit that does not follow the credit rule system.SORRY!\n",sum);
            printf("\t\tYou have to revise your course.Would you like to do that again?\n\t\tIf Yes,Press 1\n\t\tIf No, Press 2\n\t\tYour Input:");
    scanf("%d",&revise_course);
    if(revise_course==1)
    {
        call_func2();
    }
    else
        {printf("\t\tInvalid Input.Would you like to do that again?\n\t\tIf Yes,Press 1\n\t\tIf No, Press any key to exit\n\t\tYour Input:");
        scanf("%d",&revise_course);
   if(revise_course==1)
    {
        call_func2();
    }
    else
        exit(1);
        }
    }


     call_func3();

     printf("Press any key to close the application");
     getch();
     return 0;
     }


//------------------------call function one--------------------------


void call_func1(void)
    {
    FILE *ptvar;
    ptvar=fopen("text1.txt","r");
    if (ptvar==NULL)
    {
        printf("error");
        exit (1);
    }

    while ((ch=fgetc(ptvar)) !=EOF)
        printf("%c",ch);
    fclose(ptvar);
    printf("\n");
    }


//------------------------call function two--------------------------


void call_func2(void)
    {
       printf("\t\tEnter the Course no. you want to take:\n");
        for (i=1;i<=3;i++)
{
    tryy:
    fflush(stdin);
        printf("\t\tCourse No %d is ",i);

    scanf("%d",&m);
    switch (m)
    {
        case 1 ... 10:
            sum=sum+3;
            break;
        case 11 ... 14:
            sum=sum+4;
            break;
        case 15 ... 18:
            sum=sum+4.5;
            break;
            default:
            {
                printf("\t\tInvalid Input. Try Again\n");
                goto tryy;
            }
    }
      arr[(i-1)]=m;
     if(i==3)
        {
            tryy2:
            fflush(stdin);
            printf("\t\tDo you want to add one more course?\n\t\tIf Yes,Press 1\n\t\tIf No, Press 2\n\t\tYour Input: ");
            scanf("%d",&decision);

    if(decision==1)
    {
        printf("\t\tWhich Course you would like to add?\n\t\tCourse No. ");
        scanf("%d",&add4);
        arr[3]=add4;
    switch (add4)
{
        case 1 ... 10:
            sum=sum+3;
            break;
        case 11 ... 14:
            sum=sum+4;
            break;
        case 15 ... 18:
            sum=sum+4.5;
            break;
        default:
            printf("\t\tInvalid Input\n");
            goto tryy2;
        } //switch
        }//if
            else
            {break;}
}



    }//for
    }//func


//------------------------call function three--------------------------

void call_func3()
    {
         for(i=0;i<4;i++)
    {
        n=arr[i];
    switch (n)
    {
        case 1 ... 10:
           tution_fee=tution_fee+3*5000;
            break;
        case 11 ... 14:
            tution_fee=tution_fee+4*5000;
            break;
        case 15 ... 18:
            tution_fee=tution_fee+4.5*5000;
            break;}

            }






        //advising slip are\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

    time_t t;
    time(&t);

        printf("\n \t \t  \t \t  \t \t \t  East West University \n");
        printf("\t \t  \t \t  A/2,Jahurul Islam Avenue, Jahurul Islam City, Aftabnagar, Dhaka-1212 \n");
        printf("\t \t  \t \t  \t  Tel: 09666775577 (Hunting), Ext-224,364,365 \n");
        printf(" \t \t  \t \t  \t \t \t Advising / Deposit Slip \n");
        printf(" \t \t  \t \t  \t \t \t ----------------------- \n");

        printf("\n");
        printf("%s", ctime(&t));
        printf("STUDENT ID# ");
        puts(id);
        printf(" \t \t  \t \t  \t \t Name:");
        puts(name);
        printf(" \t \t  \t \t  \t \t \t \t \t \t \tSummer-2022 \n" );

        printf("\n");
        printf(" \t Course (s) Advised By: ");
        printf(" \t \t \t Sign): .......................................\n" );



        printf("\n \t  \t  Selected Course \t  Section \t  Credit \t class room \t Tuition Fee \t  Time-WeekDay  ");
        printf("\n \n \t  \t  -----------------------------------------------------------------------------------------------------------");
        printf("\n");

        for (i=0;i<4;i++)
        {
            a=arr[i];
            switch (a)
                {case 1:
                    printf("\n \t  \t  ENG 101 \t \t   3 \t \t  3.0 \t         ab1   \t \t 15000 \t \t TR 3.10pm-4.20pm");
                    break;
                case 2:
                    printf("\n \t  \t  ENG 102 \t \t   3 \t \t  3.0 \t         ab3   \t \t 15000 \t \t MW 8.10am-9.20am ");;
                    break;
                case 3:
                    printf("\n \t  \t  CSE 106 \t \t   3 \t \t  3.0 \t         ab1   \t \t 15000 \t \t Tr 3.10pm-4.20pm ");
                    break;
                case 4:
                    printf("\n \t  \t  ACT 101 \t \t   3 \t \t  3.0 \t         ab2   \t \t 15000 \t \t MW 1.30pm-3.20pm ");
                    break;
                case 5:
                    printf("\n \t  \t  GEN 201 \t \t   3 \t \t  3.0 \t         312   \t \t 15000 \t \t ST 3.10pm-4.20pm ");
                    break;
                case 6:
                    printf("\n \t  \t  PHY 209 \t \t   3 \t \t  3.0 \t         ab1   \t \t 15000 \t \t TR 10.10am-12.20pm ");
                    break;
                case 7:
                    printf("\n \t  \t  MAT 101 \t \t   3 \t \t  3.0 \t         ab3   \t \t 15000 \t \t SR 3.10pm-4.20pm ");
                    break;
                case 8:
                    printf("\n \t  \t  MAT 102 \t \t   3 \t \t  3.0 \t         ab2   \t \t 15000 \t \t TR 9.10am-10.20am ");
                    break;
                case 9:
                    printf("\n \t  \t  MAT 104 \t \t   3 \t \t  3.0 \t         105   \t \t 15000 \t \t ST 11.10am-12.20pm ");
                    break;
                case 10:
                    printf("\n \t  \t  STA 102 \t \t   3 \t \t  3.0 \t         205   \t \t 15000 \t \t MW 2.10pm-3.20pm ");
                    break;
                case 11:
                    printf("\n \t  \t  CSE 209 \t \t   3 \t \t  4.0 \t         ab1   \t \t 20000 \t \t TR 1.30pm-3.20pm ");
                    break;
                case 12:
                    printf("\n \t  \t  CHE 109 \t \t   3 \t \t  4.0 \t         ab2   \t \t 20000 \t \t TR 8.10am-10.20am ");
                    break;
                case 13:
                    printf("\n \t  \t  PHY 109 \t \t   3 \t \t  4.0 \t         ab3   \t \t 20000 \t \t MW 12.10pm-2.20pm ");
                    break;
                case 14:
                    printf("\n \t  \t  CSE 207 \t \t   3 \t \t  4.0 \t         315   \t \t 20000 \t \t MW 3.10pm-4.20pm ");
                    break;

                case 15:
                    printf("\n \t  \t  CSE 103 \t \t   3 \t \t  4.5 \t         ab1   \t \t 22500 \t \t SR 9.10am-11.20am ");
                    break;
                case 16:
                    printf("\n \t  \t  CSE 326 \t \t   3 \t \t  4.5 \t         ab2   \t \t 22500 \t \t TR 1.30pm-3.20pm ");
                    break;
                case 17:
                    printf("\n \t  \t  CSE 302 \t \t   3 \t \t  4.5 \t         ab1   \t \t 22500 \t \t MW 3.10pm-4.20pm ");
                    break;
                case 18:
                    printf("\n \t  \t  CSE 110 \t \t   3 \t \t  4.5 \t         ab3   \t \t 22500 \t \t TR 10.10am-12.30pm ");
                    break;

                        }
        }

        printf("\n \n \t  \t  -----------------------------------------------------------------------------------------------------------");

        printf("\n \n \t  \t  ----------------------------------------------------------------------");




         printf("\n");
         printf("\n");
         printf("\n");

         printf("\n \t  \t Tuition Fee:\t  \t   \t  \t \t \t %.2lf",tution_fee);
         printf("\n");
         printf("\n");

          printf("\t  \t Additional Cost: \t  \t   \t  \t \t 10,000");

         printf("\n");

         grand_total=tution_fee+10000;
         printf("\n\t  \t Grand Total \t  \t   \t  \t \t \t %.2lf", grand_total);
         printf("\n");

         printf("\n \t  \t Last date of payment:\t\t15/06/22 \n");




         printf("\n");
         printf("\n \t  \t Payable Banks \n");
         printf("\n");
         printf(" \t  \t a) Bank Asia Ltd. (Any Branch) \n");
         printf("\t  \t \t A/C # 03936000120 \n");
         printf(" \t  \t b) United Commercial Bank Ltd. (Any Branch)\n");
         printf("\t  \t \t A/C # 1131101000000381 \n");
         printf(" \t  \t c) One Bank Ltd. (Any Branch)\n");
         printf("\t  \t \t A/C  # 1131101000000381 \n");
         printf(" \t  \t d) One Bank Ltd. (Any Branch)\n");
         printf("\t  \t \t A/C # 1131101000000381 \n");
         printf(" \t  \t e) One Bank Ltd. (Any Branch)\n");
         printf("\t  \t \t A/C # 1131101000000381 \n");


         printf("\n \t  \t Mode of Payment: Cash/PO/DD No: ...................................Date...........................Bank................................................\n");

         printf("\n \t  \t Student's Signature: .....................................Authorized Signature (By Bank): ............................................................ \n");

    }
    void callID(void)
    {


    again:
    fflush(stdin);
    printf("Enter Student ID: ");
    gets(id);

    len=strlen(id);

    if(len>13){
            printf("Your ID no is invalid! Please input correct ID no.\n\n");
        goto again;}
    for(i=0; i<13 ; i++)
    {
        if(i==4 || i==6 || i==9)
        {
            if(id[i]=='-')
            {
                continue;
            }
            else
            {
               printf("Your ID no is invalid! Please input correct ID no.\n\n");
                goto again;
            }
        }
        else
        {
            if(id[i]=='1' || id[i]=='2' || id[i]=='3' || id[i]=='4' || id[i]=='5' || id[i]=='6' || id[i]=='7' || id[i]=='8' || id[i]=='9' || id[i]=='0')
            {
                continue;
            }
            else
            {
                printf("Your ID no is invalid! Please input correct ID no.\n\n");
                goto again;
            }
        }
    }

    printf("\nYour ID is valid!\n");

    }
