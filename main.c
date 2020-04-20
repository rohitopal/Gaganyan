#include <stdio.h>
#include <conio.h>
#include<windows.h>
#include<math.h>
#include<stdlib.h>

#include <unistd.h>
#include "rohitman.h"
//#include"header.h"
clock_t start,end;
//FILE *fs;
FILE *fr;
int main()
{
    int opt,r=-1;
    float b;
    start=clock();
    
    char q;
    float days;
    
    fs=fopen("user.dat","a+b");
			    if(fs==NULL)
			    {
			        fs=fopen("user.dat","wb");
			        fclose(fs);
			        fs=fopen("user.dat","a+b");
			    }

    printf("\n\n*************************************************************MARS MISSSION SIMULATOR*****************************************************************\n");
    printf("*****************************************************************Welcome Abord***********************************************************************\n\n\n\n");

/*
    fa=fopen("project.txt","r+b");
    if(fa==NULL)
    {
        fa=fopen("project.txt","r+w");
        fclose(fa);
        fa=fopen("project.txt","r+");
    }
*/

	label();
    do
    {
        printf("\n____________________________________________________________________________________________________________________________________________________");
        printf("\n\t1)Login  \n\t2)Sign Up     \n\t3)Abort Mission\noption:");
        scanf("%d",&opt);
        if(opt>3)
            printf("\nINVALID SELECTION TRY AGAIN");
        switch(opt)
        {
        case 1:
            r=login();
            
            
            
          
            break;
        case 2:
            signup();
            getch();
            break;
        case 3:
            printf("**************************************************************MISSION HAS BEEN CANCELLED********************************************");

            return;
        default:
            break;
        }

        system("CLS");
        label();

    }while(r<=0);
    
    system("CLS");
    label();

    printf("\n\n____________________________________________________________________________________________________________________________________________________");
    printf("\n                                                                    Welcome to The Mission                                                                        ");

    do
    {
        printf("\n____________________________________________________________________________________________________________________________________________________");
        printf("\n\n\t1)Instructions\n\t2)rocket specifications\n\t3)launch\n\t4)Abort Mission\noption:");
        scanf("%d",&opt);
        if(opt>4)
            printf("\nINVALID SELECTION TRY AGAIN");
        switch(opt)
        {
        case 1:
            instruction();
           /* end=clock();
            b=difftime(end,start);
            
            fprintf(fo,"\nViewed instruction At t= %f",b);
            */
            getch();
            
			break;
        case 2:
            specification();
            getch();
            break;
	
        case 3:
            r=launch();
            if(r==0)
                return;
            if(r==1)
                 printf("\n////////////////////////////////////////////////////////////!!!LAUNCH!!!///////////////////////////////////////////////////////////////////////////////////");
            getch();
			break;
        case 4:
            printf("\n                                                                                     MISSION CANCELLED                                                          ");
            return;
        }

        system("CLS");
        label();
    }while(opt!=3);

    //launchseq();
    launchseq();
    system("CLS");
    instructionstage2();
    printf("\n_______________________________________________ENGINES ARE HEATED UP START ACCELARATION BY PRESS 'W'______________________________________________________________\n\n");
    r=engine();
    if(r==0)
        return;
    printf("\n///////////////////////////////////////////////////////Engine are killed Preparing for detach!///////////////////////////////////////////////////////////////////");
    printf("\n______________________________________________________Type 'r' to Detach____________________________________________________________________________________\n");
    while(1)
    {
        q=getch();
        if(q=='R'||q=='r')
            break;
        printf("\nDetach Failed Try again");
    }
    system("CLS");
    printf("\n---------------------------------------------------------Detach successful----------------------------------------------------------------------------------------");
    printf("\n---------------------------------Successful Jouney is started all the Way till Mars gravitational Pull--------------------------------------------------------------");
    days=546/11;
    days*=100000;

    printf("\n\n\n                      			MOVING WITH VELOCITY %f estimated journey is of %f ",v,sectodays(days));
    printf("\n                                         			ENTER 1 TO SIMULATE LANDING       \n");
    q=getch();
    while(1)
    {
        q=getch();
        if(q=='1')
            break;
    }
    system("CLS");
    label();
    printf("*****************************************Entering to Mars Gravitational Pull*****************************************************************************************");
    landinginst();
    getch();
    system("CLS");
    label();

    r=decelaration();
    if(r==0)
        return;
     while(1)
    {
        printf("\nMSG: Press r to detach Landing probe");
        q=getch();
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
        label();
    }
    probeland();
    getch();
    fclose(fs);
    return 0;



}







