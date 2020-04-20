#include <stdio.h>
#include <conio.h>
#include<windows.h>
#include<math.h>
#include<stdlib.h>

#include <unistd.h>
#include "rohitman.h"
//#include"header.h"

int main()
{
    int opt,r=-1;
    char q;
    float days;

    printf("*********************************************************GAGANYAN**********************************************************************\n");
    printf("*******************************************************Welcome Abord*******************************************************************\n\n\n\n");

/*
    fa=fopen("project.txt","r+b");
    if(fa==NULL)
    {
        fa=fopen("project.txt","r+w");
        fclose(fa);
        fa=fopen("project.txt","r+");
    }
*/


    /*do
    {
        printf("\n____________________________________________________________________________________________________________________________________________________");
        printf("\n1)Login   2)Sign Up     3)Abort Mission\noption:");
        scanf("%d",&opt);
        if(opt>3)
            printf("\nINVALID SELECTION TRY AGAIN");
        switch(opt)
        {
        case 1:
            r=login();
            if(r==0)
                printf("\nLogin Failed");
            else
            {
                printf("\nLogin completed");
            }
            break;
        case 2:
            //signup();
            break;
        case 3:
            printf("******************************************************************MISSION HAS BEEN CANCELLED*************************************************************");

            return;
        default:
            break;
        }

        system("CLS");

    }while(r<=0);
    */
    system("CLS");

    printf("\n\n____________________________________________________________________________________________________________________________________________________");
    printf("                                                                    Welcome to The Mission                                                                        ");

    do
    {
        printf("\n____________________________________________________________________________________________________________________________________________________");
        printf("\n1)Instructions     2)rocket specifications     3)launch     4)Abort Mission\noption:");
        scanf("%d",&opt);
        if(opt>4)
            printf("\nINVALID SELECTION TRY AGAIN");
        switch(opt)
        {
        case 1:
            instruction();break;
        case 2:
            specification();break;
        case 3:
            r=launch();
            if(r==0)
                return 0;
            if(r==1)
                 printf("\n////////////////////////////////////////////////////////////!!!LAUNCH!!!///////////////////////////////////////////////////////////////////////////////////");
            break;
        case 4:
            printf("\n                                                                                     MISSION CANCELLED                                                          ");
            return 0;
        }

        system("CLS");
    }while(opt!=3);

    //launchseq();
    launchseq();
    system("CLS");
    instructionstage2();
    printf("\n_______________________________________________ENGINES ARE HEATED UP START ACCELARATION BY PRESS 'W'______________________________________________________________\n\n");
    r=engine();
    if(r==0)
        return 0;
    printf("\n///////////////////////////////////////////////////////Engine are killed Preparing for detach!///////////////////////////////////////////////////////////////////");
    printf("\n______________________________________________________Type 'r' to Detach____________________________________________________________________________________\n");
    while(1)
    {
        q=getche();
        if(q=='R'||q=='r')
            break;
        printf("\nDetach Failed Try again");
    }
    system("CLS");
    printf("\n---------------------------------------------------------Detach successful----------------------------------------------------------------------------------------");
    printf("\n---------------------------------Successful Jouney is started all the Way till Mars gravitational Pull--------------------------------------------------------------");
    days=546/11;
    days*=100000;

    printf("\n\n\n                      MOVING WITH VELOCITY %f estimated journey is of %f ",v,sectodays(days));
    printf("\n                                         ENTER 1 TO SIMULATE LANDING       \n");
    q=getch();
    while(1)
    {
        q=getche();
        if(q=='1')
            break;
    }
    system("CLS");
    printf("*****************************************Entering to Mars Gravitational Pull*****************************************************************************************");
    landinginst();
    getch();
    system("CLS");

    r=decelaration();
    if(r==0)
        return 0;
     while(1)
    {
        printf("\nMSG: Press r to detach Landing probe");
        q=getche();
        if(q=='r')
        {
            system("CLS");
            printf("SUCCESS: Landing probe detached moving to martian surface");

            break;
        }

        else
            printf("WARNING: detach failed");
        getch();
        system("CLS");
    }
    probeland();
    getche();

    return 0;

}







