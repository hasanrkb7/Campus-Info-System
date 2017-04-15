#include<stdio.h>
#include<conio.h>
#include<string>
#include<windows.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>

/*************************************************************************************************************************
*
*
*                         HAPPY FACE
*
*
*************************************************************************************************************************/

void happy(void)
{
    int bigx,bigy;
    int midX;
    int midY;
    int leftEyeX,rightEyeX,eyeY,noseX,noseY,headRadius,eyeNoseRadius,smileRadius,stepX,stepY;

    bigx=getmaxwidth();
    bigy=getmaxheight();



    initwindow(bigx,bigy,"Happy Face-press any key to continue");

    //draw head;

    midX=bigx/2;
    midY=bigy/2;
    //floodfill(midX,midY,WHITE);
    headRadius=bigy/4;
    //setcolor(RED);
    circle(midX,midY,headRadius);

    //draw eyes;

    stepX=headRadius/4;
    stepY=stepX;
    leftEyeX=midX-stepX;
    rightEyeX=midX+stepX;
    eyeY=midY-stepY;
    eyeNoseRadius=headRadius/10;
    circle(leftEyeX,eyeY,eyeNoseRadius);
    floodfill(leftEyeX,eyeY,WHITE);
    circle(rightEyeX,eyeY,eyeNoseRadius);
    floodfill(rightEyeX,eyeY,WHITE);

    //draw nose;

    setcolor(YELLOW);
    noseX=midX;
    noseY=midY+stepY;
    circle(noseX,noseY,eyeNoseRadius);

    //draw smile;

    setcolor(WHITE);
    smileRadius=(int)(0.75*headRadius+0.5);
    arc(midX,midY,210,330,smileRadius);

    setcolor(WHITE);
    outtextxy(570,670,"Thanks for using this program .Press any key to continue");

    getch();
    closegraph();
}


/*************************************************************************************************************************
*
*
*                         TITLE
*
*
*************************************************************************************************************************/


 void TITLE(void)
 {
    /* Define corners of house */
    int x1 = 100+450; int y1 = 200;          /* top-left corner */
    int x2 = 300+450; int y2 = 100;          /* roof peak */
    int x3 = 500+450; int y3 = 200;          /* top-right corner */
    int x4 = 500+450; int y4 = 400;          /* bottom-right corner */
    int x5 = 325+450; int y5 = 400;  /* bottom-right corner of door */
    int x6 = 275+450; int y6 = 325;      /* top-left corner of door */

    initwindow(getmaxwidth(),getmaxheight(),"Painted house - press a key to close", 100, 50);

    /* Draw roof */
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);

    /* Draw rest of house */
    rectangle(x1, y1, x4, y4);

    /* Paint the house */
    //setfillstyle(HATCH_FILL, LIGHTGRAY);
    outtextxy(210+450,170,"CAMPUS INFO SYSTEM");
    //floodfill(x2, y2 + 10,  WHITE);      /* Paint the roof */
    setfillstyle(LINE_FILL, WHITE);
    floodfill(x2, y1 + 10, WHITE);       /* Paint the house */

    setfillstyle(SOLID_FILL, BLUE);
    bar(x5, y5, x6, y6);             /* Draw blue door */

    outtextxy(230+450,450,"Press any key to continue");

    getch();
    closegraph();
 }


  /*************************************************************************************************************************
*
*
*                         MAP OF LABORITORIES
*
*
*************************************************************************************************************************/



 void labmap()
 {

 int bigx,bigy,y,x;
    bigx=getmaxwidth();
    bigy=getmaxheight();

    initwindow(bigx,bigy,"Map of lab-Press any key to continue");

    outtextxy(0,0,"Go to the entrance of the Lab first and then see below:-");
    outtextxy(70+200,290,"You are here (entrance) -->>");

    //rectangle(bigx-50,0+50,0+200,bigy-50);

    int midy=bigy/4;
    y=midy+150;
    x=(2*(midy+50))+30;

    //room no 601;

    line(200+200,50,1050+200,50);
    line(200+200,50,200+200,150);
    line(200+200,midy+50,200+200,200);
    line(200+200,210,100+200,210);
    line(100+200,210,100+200,110);
    line(100+200,110,200+200,50);
    outtextxy(140+200,150,"601");

    line(250+200,160,500+200,160);        //  partition of room 609 and 610
    line(560+200,160,840+200,160);    //  Partition of room 602 and 611

    //room 610;

    line(260+200,160,260+200,midy+50);
    line(500+200,midy+50,500+200,160);
    line(310+200,midy+50,500+200,midy+50);
    outtextxy(360+200,200,"610");

    //room 609;

    line(450+200,160,450+200,50);
    outtextxy(300+200,105,"609");

    //room 602;

    line(670+200,160,670+200,50);
    outtextxy(540+200,105,"602");

    //room 611;

    line(820+200,midy+50,820+200,160);
    line(570+200,midy+50,770+200,midy+50);
    line(570+200,midy+50,570+200,160);
    outtextxy(680+200,200,"611");

    //603;

    line(900+200,50,900+200,160);
    outtextxy(770+200,105,"603");

    //emergency exit;

    line(900+200,midy+50,900+200,200);
    line(1050+200,50,1050+200,bigy-50);
    line(900+200,200,1050+200,200);
    outtextxy(930+200,125,"Emergency exit");

    //female toilet;

    line(950+200,midy+50,1050+200,midy+50);
    line(1100,midy+50,1120,midy+50);
    outtextxy(930+200,midy+10,"Female-toilet");

    //unknown room;

    line(980+200,midy+50,980+200,midy+80);
    line(980+200,y-30,980+200,y);

    //male toilet;

    line(950+200,y,1050+200,y);
    line(1100,y+60,1250,y+60);
    line(1100,y+60,1100,y);
    line(1100,y,1120,y);
    outtextxy(1130,y+20,"Male-toilet");

    //lab support room

    line(1000,y,1000,y+60);
    outtextxy(1010,y+10,"Lab support");
    outtextxy(1010,y+25,"room");

    //research lab;

    line(1100,y,1050,y);
    line(950,y,800,y);
    line(800,y+60,1250,y+60);
    line(800,y,800,x-40);
    outtextxy(840,y+20,"Research lab");

    //security

    line(200+200,y,200+200,x-25);
    line(400,y,600,y);
    line(600,y,600,x-80);
    line(400,x-80,600,x-80);
    outtextxy(460,x-150,"Pigeon-hole");

    //entrance;

    line(400,y,300,y);

    //608;

    line(400,x-40,300,x-40);
    line(300,x-40,300,bigy-50);
    line(400,bigy-50,400,bigy-260);
    line(300,bigy-50,400,bigy-50);
    outtextxy(340,bigy-180,"608");

    //618;

    line(400,x+30,440,x+30);
    line(550,x+30,550,bigy-190);
    line(475,x+30,475,bigy-190);
    outtextxy(430,bigy-230,"618");

    //617;

    line(475,x+30,515,x+30);
    outtextxy(500,bigy-230,"617");

    //607;

    line(612.5,bigy-190,612.5,bigy-50);
    line(400,bigy-190,560,bigy-190);
    outtextxy(480,bigy-140,"607");

    //606;

    line(612.5,bigy-190,772.5,bigy-190);
    outtextxy(680,bigy-140,"606");

    //605;

    line(825,bigy-190,825,bigy-50);
    line(1037.5,bigy-190,877.5,bigy-190);
    outtextxy(900,bigy-140,"605");

    //604;

    line(1037.5,bigy-190,1037.5,bigy-50);
    line(1250,bigy-220,1160,bigy-220);
    line(1090,bigy-190,1160,bigy-190);
    outtextxy(1130,bigy-140,"604");

    //generator room

    line(1160,bigy-190,1160,x);
    line(1250,x,1160,x);
    outtextxy(1170,bigy-280,"Generator");
    outtextxy(1170,bigy-260,"room");

    //IR's room;

    line(800,x-40,840,x-40);
    outtextxy(825,y+90,"c1");
    line(860,y+60,860,x-40);
    line(860,x-40,900,x-40);
    outtextxy(885,y+90,"c2");
    line(920,y+60,920,x-40);
    line(920,x-40,960,x-40);
    outtextxy(945,y+90,"c3");
    line(980,y+60,980,x-40);
    line(980,x-40,1020,x-40);
    outtextxy(1005,y+90,"c4");
    line(1040,y+60,1040,x-40);
    line(1040,x-40,1080,x-40);
    outtextxy(1065,y+90,"c5");
    line(1100,y+60,1100,x-40);
    line(1120,x-40,1160,x-40);
    outtextxy(1125,y+90,"c6");
    line(1160,y+60,1160,x-40);
    //line(1250,x-40,1180,x-40);
    outtextxy(1185,y+110,"c7");

    //line;

    //line(200+200,y,1050+200,y);
    /*line(850,x,1050+200,x);                               */
    //line(200+200,bigy-190,1050+200,bigy-190);
    line(200+200,bigy-50,1050+200,bigy-50);
 }



 /*************************************************************************************************************************
*
*
*                         GOTO FUNCTION
*
*
*************************************************************************************************************************/



 void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}



/*************************************************************************************************************************
*
*
*                         FACULTY INFORMATION
*
*
*************************************************************************************************************************/




void faculty()
{
    FILE *fp;
    int input;

    printf("1. Teacher 01\t\t\t");
    printf("2. Teacher 02\n");
    printf("3. Teacher 03\t\t");
    printf("4. Teacher 04\n");
    printf("5. Teacher 05\t\t\t");
    printf("6. Teacher 06\n");
    printf("7. Teacher 07\t\t\t");
    printf("8. Teacher 08\n");
    printf("9. Teacher 09\t");
    printf("10. Teacher 10\n");
    printf("11. Teacher 11\t\t\t");
    printf("12. Teacher 12\n");
    printf("13. Teacher 13\t\t\t");
    printf("14. Teacher 14\n");
    printf("15. Teacher 15\t\t");
    printf("16. Teacher 16\n");
    printf("17. Teacher 17\t\t\t");
    printf("18. Teacher 18\n");
    printf("19. Teacher 19\t\t");
    printf("20. Teacher 20\n");
    printf("21. Teacher 21\t\t\t");
    printf("22. Teacher 22\n");
    printf("23. Teacher 23\t\t");
    printf("24. Teacher 24\n");
    printf("25. Teacher 25\t\t\t");
    printf("26. Teacher 26\n");
    printf("27. Teacher 27\t\t\t");
    printf("28. Teacher 28\n");
    printf("29. Teacher 29\t\t\t");
    printf("30. Teacher 30\n");
    printf("31. Teacher 31\t\t\t");
    printf("32. Teacher 32\n");
    printf("33. Teacher 33\t\t");
    printf("34. Teacher 34\n");
    printf("35. Teacher 35\t\t\t");
    printf("36. Teacher 36\n");
    printf("37. Teacher 37\t\t\t");
    printf("38. Teacher 38\n");
    printf("39. Teacher 39\t\t");
    printf("40. Teacher 40\n");
    printf("41. Teacher 41\t\t\t");
    printf("42. Teacher 42\n");
    printf("43. Teacher 43\n");

    printf("Enter the sl.number of the faculty:\n");
    scanf("%d", &input);

    system("cls");

    switch(input)
    {
    case 1:
        fp=fopen("faculty01.txt", "r");
        char aam;
        while((aam=getc(fp))!=EOF){
            putchar(aam);
        }
        fclose(fp);
        break;

    case 2:
        fp=fopen("faculty02.txt", "r");
        char abo;
        while((abo=getc(fp))!=EOF){
            putchar(abo);
        }
        fclose(fp);
        break;

    case 3:
        fp=fopen("faculty03.txt", "r");
        char adnan;
        while((adnan=getc(fp))!=EOF){
            putchar(adnan);
        }
        fclose(fp);
        break;

    case 4:
        fp=fopen("faculty04.txt", "r");
        char amc;
        while((amc=getc(fp))!=EOF){
            putchar(amc);
        }
        fclose(fp);
        break;

    case 5:
        fp=fopen("faculty05.txt", "r");
        char aqu;
        while((aqu=getc(fp))!=EOF){
            putchar(aqu);
        }
        fclose(fp);
        break;

    case 6:
        fp=fopen("faculty06.txt", "r");
        char ara;
        while((ara=getc(fp))!=EOF){
            putchar(ara);
        }
        fclose(fp);
        break;

    case 7:
        fp=fopen("faculty07.txt", "r");
        char asad;
        while((asad=getc(fp))!=EOF){
            putchar(asad);
        }
        fclose(fp);
        break;

    case 8:
        fp=fopen("faculty08.txt", "r");
        char azfar;
        while((azfar=getc(fp))!=EOF){
            putchar(azfar);
        }
        fclose(fp);
        break;

    case 9:
        fp=fopen("faculty09.txt", "r");
        char ehsan;
        while((ehsan=getc(fp))!=EOF){
            putchar(ehsan);
        }
        fclose(fp);
        break;

    case 10:
        fp=fopen("faculty10.txt", "r");
        char fkr;
        while((fkr=getc(fp))!=EOF){
            putchar(fkr);
        }
        fclose(fp);
        break;

    case 11:
        fp=fopen("faculty11.txt", "r");
        char huz;
        while((huz=getc(fp))!=EOF){
            putchar(huz);
        }
        fclose(fp);
        break;

    case 12:
        fp=fopen("faculty12.txt", "r");
        char hzr;
        while((hzr=getc(fp))!=EOF){
            putchar(hzr);
        }
        fclose(fp);
        break;

    case 13:
        fp=fopen("faculty13.txt", "r");
        char iha;
        while((iha=getc(fp))!=EOF){
            putchar(iha);
        }
        fclose(fp);
        break;

    case 14:
        fp=fopen("faculty14.txt", "r");
        char iqr;
        while((iqr=getc(fp))!=EOF){
            putchar(iqr);
        }
        fclose(fp);
        break;

    case 15:
        fp=fopen("faculty15.txt", "r");
        char jubaid;
        while((jubaid=getc(fp))!=EOF){
            putchar(jubaid);
        }
        fclose(fp);
        break;

    case 16:
        fp=fopen("faculty16.txt", "r");
        char kas;
        while((kas=getc(fp))!=EOF){
            putchar(kas);
        }
        fclose(fp);
        break;

    case 17:
        fp=fopen("faculty17.txt", "r");
        char kmm;
        while((kmm=getc(fp))!=EOF){
            putchar(kmm);
        }
        fclose(fp);
        break;

    case 18:
        fp=fopen("faculty18.txt", "r");
        char lih;
        while((lih=getc(fp))!=EOF){
            putchar(lih);
        }
        fclose(fp);
        break;

    case 19:
        fp=fopen("faculty19.txt", "r");
        char mahdy;
        while((mahdy=getc(fp))!=EOF){
            putchar(mahdy);
        }
        fclose(fp);
        break;

    case 20:
        fp=fopen("faculty20.txt", "r");
        char mizanur;
        while((mizanur=getc(fp))!=EOF){
            putchar(mizanur);
        }
        fclose(fp);
        break;

    case 21:
        fp=fopen("faculty21.txt", "r");
        char mki;
        while((mki=getc(fp))!=EOF){
            putchar(mki);
        }
        fclose(fp);
        break;

    case 22:
        fp=fopen("faculty22.txt", "r");
        char mle;
        while((mle=getc(fp))!=EOF){
            putchar(mle);
        }
        fclose(fp);
        break;

    case 23:
        fp=fopen("faculty23.txt", "r");
        char natasha;
        while((natasha=getc(fp))!=EOF){
            putchar(natasha);
        }
        fclose(fp);
        break;

    case 24:
        fp=fopen("faculty24.txt", "r");
        char nsv;
        while((nsv=getc(fp))!=EOF){
            putchar(nsv);
        }
        fclose(fp);
        break;

    case 25:
        fp=fopen("faculty25.txt", "r");
        char nva;
        while((nva=getc(fp))!=EOF){
            putchar(nva);
        }
        fclose(fp);
        break;

    case 26:
        fp=fopen("faculty26.txt", "r");
        char rezaul;
        while((rezaul=getc(fp))!=EOF){
            putchar(rezaul);
        }
        fclose(fp);
        break;

    case 27:
        fp=fopen("faculty27.txt", "r");
        char rjp;
        while((rjp=getc(fp))!=EOF){
            putchar(rjp);
        }
        fclose(fp);
        break;

    case 28:
        fp=fopen("faculty28.txt", "r");
        char rkz;
        while((rkz=getc(fp))!=EOF){
            putchar(rkz);
        }
        fclose(fp);
        break;

    case 29:
        fp=fopen("faculty29.txt", "r");
        char rra;
        while((rra=getc(fp))!=EOF){
            putchar(rra);
        }
        fclose(fp);
        break;

    case 30:
        fp=fopen("faculty30.txt", "r");
        char rrn;
        while((rrn=getc(fp))!=EOF){
            putchar(rrn);
        }
        fclose(fp);
        break;

    case 31:
        fp=fopen("faculty31.txt", "r");
        char rzb;
        while((rzb=getc(fp))!=EOF){
            putchar(rzb);
        }
        fclose(fp);
        break;

    case 32:
        fp=fopen("faculty32.txt", "r");
        char sau;
        while((sau=getc(fp))!=EOF){
            putchar(sau);
        }
        fclose(fp);
        break;

    case 33:
        fp=fopen("faculty33.txt", "r");
        char shariful;
        while((shariful=getc(fp))!=EOF){
            putchar(shariful);
        }
        fclose(fp);
        break;

    case 34:
        fp=fopen("faculty34.txt", "r");
        char sharmina;
        while((sharmina=getc(fp))!=EOF){
            putchar(sharmina);
        }
        fclose(fp);
        break;

    case 35:
        fp=fopen("faculty35.txt", "r");
        char si;
        while((si=getc(fp))!=EOF){
            putchar(si);
        }
        fclose(fp);
        break;

    case 36:
        fp=fopen("faculty36.txt", "r");
        char silvia;
        while((silvia=getc(fp))!=EOF){
            putchar(silvia);
        }
        fclose(fp);
        break;

    case 37:
        fp=fopen("faculty37.txt", "r");
        char szz;
        while((szz=getc(fp))!=EOF){
            putchar(szz);
        }
        fclose(fp);
        break;

    case 38:
        fp=fopen("faculty38.txt", "r");
        char tamanna;
        while((tamanna=getc(fp))!=EOF){
            putchar(tamanna);
        }
        fclose(fp);
        break;

    case 39:
        fp=fopen("faculty39.txt", "r");
        char tanjila;
        while((tanjila=getc(fp))!=EOF){
            putchar(tanjila);
        }
        fclose(fp);
        break;

    case 40:
        fp=fopen("faculty40.txt", "r");
        char tnr;
        while((tnr=getc(fp))!=EOF){
            putchar(tnr);
        }
        fclose(fp);
        break;

    case 41:
        fp=fopen("faculty41.txt", "r");
        char trr;
        while((trr=getc(fp))!=EOF){
            putchar(trr);
        }
        fclose(fp);
        break;

    case 42:
        fp=fopen("faculty42.txt", "r");
        char wtb;
        while((wtb=getc(fp))!=EOF){
            putchar(wtb);
        }
        fclose(fp);
        break;

    case 43:
        fp=fopen("faculty43.txt", "r");
        char zubaer;
        while((zubaer=getc(fp))!=EOF){
            putchar(zubaer);
        }
        fclose(fp);
        break;

    default:
        printf("Unknown Faculty\n");

    }
}



/*************************************************************************************************************************
*
*
*                         GYM INFORMATION
*
*
*************************************************************************************************************************/




void gym()
{
    FILE *gym_m;
    FILE *gym_f;
    printf("\t\t\t\tTHIS SECTION IS FOR GYM INFORMATION");
    printf("\n\n\n\n");
    printf("Are you Male or Female?\n\n");
    printf("If Male press '1' if female press '2'\n\n");
    printf("Enter your choice: ");

    int c;
    scanf("%d", &c);

    if(c==1){
        system("cls");
        gym_m=fopen("Gym-Schedule-Male.txt", "r");
        char f;
        while((f=getc(gym_m))!=EOF){
            putchar(f);
        }

        fclose(gym_m);
    }

    if(c==2){
        system("cls");
        gym_m=fopen("Gym-Schedule-Female.txt", "r");
        char f;
        while((f=getc(gym_m))!=EOF){
            putchar(f);
        }

        fclose(gym_f);
    }

}




/*************************************************************************************************************************
*
*
*                         PARKING INFORMATION
*
*
*************************************************************************************************************************/




#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int food()
{
    struct bAid ///stall 1 food price structure
{
    char no[4];
    char name[30];
    int price;
};
struct stall2 ///stall 2 food price
{
    char no[4];
    char name[30];
    int price;
};

struct bhr ///bhr food price
{
    char no[4];
    char name[30];
    int price;
};

struct dlb ///dlb food price
{
    char no[4];
    char name[30];
    int price;
};


    ///01. stall 1 function
    struct bAid a[30];
    a[0].price=50;
    a[1].price=50;
    a[2].price=25;
    a[3].price=45;
    a[4].price=45;
    a[5].price=40;
    a[6].price=60;
    a[7].price=10;
    a[8].price=55;
    a[9].price=50;
    a[10].price=25;
    a[11].price=35;
    a[12].price=30;
    a[13].price=30;
    a[14].price=30;
    a[15].price=25;
    a[16].price=10;
    a[17].price=10;
    a[18].price=25;
    a[19].price=35;
    a[20].price=20;
    a[21].price=10;
    a[22].price=40;
    FILE *fbaid;

    /*fbaid=fopen("stall1.txt", "w");

    int i;
    ///input of stall 1 food price
    ///range of i is the number of food
    for(i=0; i<23; i++){
        gets(a[i].no);
        gets(a[i].name);
        scanf("%d", &a[i].price);
        fputs(a[i].no, fbaid);
        fputs(a[i].name, fbaid);
        fprintf(fbaid,"\n");
        fprintf(fbaid ,"\tprice-%d", a[i].price);
        fprintf(fbaid,"\n");
        getc(stdin);

    }

    fclose(fbaid);*/

    ///02. stall 2 food function
    struct stall2 b[30];
    b[0].price=35;
    b[1].price=35;
    b[2].price=35;
    b[3].price=50;
    b[4].price=15;
    b[5].price=45;
    b[6].price=35;
    b[7].price=55;
    b[8].price=50;
    b[9].price=25;
    b[10].price=20;
    b[11].price=50;
    b[12].price=15;

    FILE *fstall2;

    /*fstall2=fopen("stall2.txt", "w");

    int i;
    ///input of stall2 food price
    ///range of i is the number of food
    for(i=0; i<13; i++){
        gets(b[i].no);
        gets(b[i].name);
        scanf("%d", &b[i].price);
        fputs(b[i].no, fstall2);
        fputs(b[i].name, fstall2);
        fprintf(fstall2,"\n");
        fprintf(fstall2 ,"\tprice-%d", b[i].price);
        fprintf(fstall2,"\n");
        getc(stdin);

    }

    fclose(fstall2);*/

    ///03. bhr food function
    struct bhr f[30];

    f[0].price=20;
    f[1].price=15;
    f[2].price=100;
    f[3].price=50;
    f[4].price=10;
    f[5].price=15;
    f[6].price=30;
    f[7].price=18;
    f[8].price=105;
    f[9].price=10;
    f[10].price=105;
    f[11].price=20;
    f[12].price=20;

    FILE *fbhr;

    /*fbhr=fopen("stall3.txt", "w");

    int i;
    ///input of bhr food price
    ///range of i is the number of food
    for(i=0; i<13; i++){
        gets(f[i].no);
        gets(f[i].name);
        scanf("%d", &f[i].price);
        fputs(f[i].no, fbhr);
        fputs(f[i].name, fbhr);
        fprintf(fbhr,"\n");
        fprintf(fbhr ,"\tprice-%d", f[i].price);
        fprintf(fbhr,"\n");
        getc(stdin);

    }

    fclose(fbhr);*/

    ///04. stall 4 food function
    struct dlb d[30];
    d[0].price=50;
    d[1].price=60;
    d[2].price=35;
    d[3].price=20;
    d[4].price=40;
    d[5].price=30;
    d[6].price=120;
    d[7].price=75;
    d[8].price=45;
    d[9].price=55;
    d[10].price=55;
    d[11].price=120;
    d[12].price=100;
    d[13].price=45;
    d[14].price=75;
    d[15].price=70;
    d[16].price=60;
    d[17].price=60;

    FILE *dlb;

    /*dlb=fopen("stall4.txt", "w");

    int i;
    ///input of stall 4 food price
    ///range of i is the number of food
    for(i=0; i<18; i++){
        gets(d[i].no);
        gets(d[i].name);
        scanf("%d", &d[i].price);
        fputs(d[i].no, dlb);
        fputs(d[i].name, dlb);
        fprintf(dlb,"\n");
        fprintf(dlb ,"\tprice-%d", d[i].price);
        fprintf(dlb,"\n");
        getc(stdin);

    }

    fclose(dlb);*/


    printf("\t\t\tThanks For using this program\n\n");
    printf("\tThis program is a database of the campus canteen's foods\n\n");
    printf("Select the food court you want to buy from\n\n");
    printf("1. Food stall 1\n");
    printf("2. Food stall 2\n");
    printf("3. Food stall 3\n");
    printf("4. Food stall 4\n");
    printf("\n\n");
    printf("Enter your choice (WARNING USE NUMBER 1-4 ONLY) :");

    int food_choice;///choice
    scanf("%d", &food_choice);
    printf("\n\n");

    system("cls");

    if(food_choice==1){
        fbaid=fopen("stall1.txt", "r");
        char c;
         while((c=getc(fbaid))!=EOF){
                putchar(c);
        }
        fclose(fbaid);

        printf("\n\nENTER THE NUMBER OF FOOD YOU WANT TO ORDER:");

        int j, numoforder, sum, orderno;
        sum=0;
        scanf("%d", &numoforder);

        for(j=0; j<numoforder; j++){
            printf("Enter food number from the menu: ");
            scanf("%d", &orderno);
            sum= sum+ a[orderno-1].price;
        }
        printf("\n\n\n");
        printf("Your total bill:TK. ");
        printf("%d\n\n", sum);

    }

    if(food_choice==2){
        fstall2=fopen("stall2.txt", "r");
        char c;
         while((c=getc(fstall2))!=EOF){
                putchar(c);
        }
        fclose(fstall2);


        printf("\n\nENTER THE NUMBER OF FOOD YOU WANT TO ORDER:");

        int j, numoforder, sum, orderno;
        sum=0;
        scanf("%d", &numoforder);

        for(j=0; j<numoforder; j++){
            printf("Enter food number from the menu: ");
            scanf("%d", &orderno);
            sum= sum+ b[orderno-1].price;
        }
        printf("\n\n\n");
        printf("Your total bill:TK. ");
        printf("%d\n\n", sum);

    }

    if(food_choice==3){
        fbhr=fopen("stall3.txt", "r");
        char c;
         while((c=getc(fbhr))!=EOF){
                putchar(c);
        }
        fclose(fbhr);

                printf("\n\nENTER THE NUMBER OF FOOD YOU WANT TO ORDER:");

        int j, numoforder, sum, orderno;
        sum=0;
        scanf("%d", &numoforder);

        for(j=0; j<numoforder; j++){
            printf("Enter food number from the menu: ");
            scanf("%d", &orderno);
            sum= sum+ f[orderno-1].price;
        }
        printf("\n\n\n");
        printf("Your total bill:TK. ");
        printf("%d\n\n", sum);


    }

    if(food_choice==4){
        dlb=fopen("stall4.txt", "r");
        char c;
         while((c=getc(dlb))!=EOF){
                putchar(c);
        }
        fclose(dlb);

        printf("\n\nENTER THE NUMBER OF FOOD YOU WANT TO ORDER:");

        int j, numoforder, sum, orderno;
        sum=0;
        scanf("%d", &numoforder);

        for(j=0; j<numoforder; j++){
            printf("Enter food number from the menu: ");
            scanf("%d", &orderno);
            sum= sum+ d[orderno-1].price;
        }

        printf("\n\n\n");
        printf("Your total bill:TK. ");
        printf("%d\n\n", sum);

    }
}




int main()
{
    happy();
    TITLE();

    gotoxy(27.5,6);
    printf("WELCOME TO CAMPUS DATA MANAGEMENT SYSTEM\n\n");
    printf("\t\tcreated by : Abu Sayeed Khan,Rakibul Hasan Remon and Hasin Ishrak\n\n\n");
    printf("\t\t\t\tpress 1 to continue.\n");
    printf("\t\t\t\tpress 9 to exit.\n\n");
    int ti;
    printf("\t\t\t\tYour choice: ");
    scanf("%d",&ti);
    if(ti==1){
        goto mainmenu;
    }
    else if(ti==9){
        exit(1);
    }

    mainmenu:

        system("cls");

        gotoxy(27.5,4);
        printf("Please Enter:\n\n");
        printf("\t\t\t\t1 for \"GYM TIME(for both male and female)\".\n");
        printf("\t\t\t\t2 for \"FOOD PRICE IN THE CAFETERIA\".\n");
        printf("\t\t\t\t3 for \"FACULTY INFORMATION\".\n");
        printf("\t\t\t\t4 for \"PARKING INFORMATION\".\n");
        printf("\t\t\t\t5 for \"MAP\".\n\n");

        int to;
        printf("\t\t\t\tYour choice: ");
        scanf("%d",&to);

        if(to==1)
        {
            ab:

            system("cls");
            gym();
            //printf("\n");
            printf("\t\t\t\tEnter 0 to go back to the gym menu.\n");
            printf("\t\t\t\tEnter 1 to go back to the main menu.\n");
            printf("\t\t\t\tEnter 9 to exit.\n");
            printf("\t\t\t\tYour choice: ");
            int aa;
            scanf("%d",&aa);

            if(aa==0){
                goto ab;
            }
            else if(aa==1){
                goto mainmenu;
            }
            else if(aa==9){
                exit(1);
            }
        }

        else if(to==2)
        {
            system("cls");
            food();

            int fg;
            printf("Enter 1 to go to the main menu.\n");
            printf("Enter 2 to exit.\n");
            printf("Your choice: ");
            scanf("%d",&fg);
            if(fg==1){
            goto mainmenu;
            }
            else if(fg==2){
            exit(1);
            }

        }

        else if(to==3)
        {
            y:
            system("cls");

            faculty();
            printf("\n\n");
            printf("PRESS 0 to go back to the menu.\n");
            printf("PRESS 1 to go back to the main menu.\n");
            printf("PRESS 8 to exit.\n\n");
            int n;
            printf("Your choice: ");
            scanf("%d", &n);

            if(n==0){
                system("cls");
                goto y;
            }
            else if(n==1){
                goto mainmenu;
            }
            else if(n==8){
                exit(1);
            }
        }

        else if(to==4)
        {
            x:
            system("cls");


            int i, j;

    int bike[5][4]={ {0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
    int car[5][6]={ {0,0,0,0,0,0}, {0,0,0,0,0,0}, {0,0,0,0,0,0}, {0,0,0,0,0,0}, {0,0,0,0,0,0}};

    int n; //car or bike selection

    printf("\t\t\t\tThis Section is for Parking");
    printf("\n\n\n");
    printf("If car press '1'\nIf bike press'2'\n");
    scanf("%d", &n);

    if(n==1){

        car1:

        printf("1. SHOW PARKING AREA\n");
        printf("2. ADD CAR\n");
        printf("3. CHECKOUT CAR\n\n");

        int choice;
        scanf("%d", &choice);
        //getch();
        system("cls");
        printf("You Choose: %d\n\n", choice);

        if(choice==1){
        for(i=0; i<5; i++){
        for(j=0; j<6; j++){
            printf("%d   ", car[i][j]);
        }
        printf("\n\n\n");
        }
        }
        if(choice==2){
            int park_space_row, park_space_col;
            printf("Enter the parking lot Row and Column number to enter the car:  ");
            scanf("%d %d", &park_space_row, &park_space_col);
            car[park_space_row][park_space_col]=1;
        }
        if(choice==3){
            int park_space_row, park_space_col, sum=50, hour;
            printf("Enter the parking lot Row and Column number to enter the car:  ");
            scanf("%d %d", &park_space_row, &park_space_col);
            car[park_space_row][park_space_col]=0;
            printf("For how many hours you used the parking area: ");
            scanf("%d", &hour);
            if(hour>0){
                sum*=hour;
                printf("Your total charge is: Tk.%d\n", sum);
            }
            else
                printf("You don't have any charge. You can go.\n");

        }
        int xz;
            printf("Please enter 0 to go to the parking menu.\n");
            printf("Please enter 1 to go to the main menu.\n");
            printf("Please enter 2 to go to the car parking menu.\n");
            printf("Please enter 9 to exit.\n\n");
            printf("You choose:\n ");
            scanf("%d",&xz);
            if(xz==2){
                goto car1;
            }
            else if(xz == 0){
                goto x;
            }
            else if(xz==1){
                goto mainmenu;
            }
           else if(xz==9){
               exit(1);
            }
    }


    if(n==2){

            bike1:

        printf("1. SHOW PARKING AREA\n");
        printf("2. ADD BIKE\n");
        printf("3. CHECKOUT BIKE\n\n");
        int choice1;
        scanf("%d", &choice1);
        //getch();
        system("cls");
        printf("You choose: %d\n\n", choice1);

        if(choice1==1){
        for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            printf("%d   ", bike[i][j]);
        }
        printf("\n\n\n");
        }
        }
        if(choice1==2){
            int park_space_row, park_space_col;
            printf("Enter the parking lot Row and Column number to enter the bike:  ");
            scanf("%d %d", &park_space_row, &park_space_col);
            bike[park_space_row][park_space_col]=1;
        }
        if(choice1==3){
            int park_space_row, park_space_col, sum1=30, hour1;
            printf("Enter the parking lot Row and Column number to enter the bike:  ");
            scanf("%d %d", &park_space_row, &park_space_col);
            bike[park_space_row][park_space_col]=0;
            printf("For how many hours you used the parking area: ");
            scanf("%d", &hour1);
            if(hour1>0){
                sum1*=hour1;
                printf("Your total charge is: Tk.%d\n", sum1);
            }
            else
                printf("You don't have any charge. You can go.\n");

        }
        int xz;
            printf("Please enter 0 to go to the parking menu.\n");
            printf("Please enter 1 to go to the main menu.\n");
            printf("Please enter 2 to go to the bike parking menu.\n");
            printf("Please enter 9 to exit.\n\n");
            printf("You choose:\n ");
            scanf("%d",&xz);
            if(xz == 2){
                goto bike1;
            }
            else if(xz == 0){
                goto x;
            }
            else if(xz==1){
                goto mainmenu;
            }
           else if(xz==9){
               exit(1);
            }
    }
        }
        else if(to==5)
           {

              mapmenu:

             system("cls");
             gotoxy(27.5,4);
             printf("Please Enter: \n\n");
             printf("\t\t\t\t1 for MAP OF LAB.\n");
             printf("\t\t\t\t2 for MAP OF IT-resource\t(under development) \n");
             printf("\t\t\t\t3 for MAP OF CANTEEN\t\t(under development) \n");
             printf("\t\t\t\t4 for MAP OF LIBRARY\t\t(under development) \n\n");

             int ta;
             printf("\t\t\t\tYour choice: ");
             scanf("%d",&ta);

             if(ta==1){
                system("cls");
                labmap();
                gotoxy(15,4);
                printf("\t\t\tpress 1 to go to the map menu.\n");
                printf("\t\t\t\tpress 2 to go to the main menu.\n");
                printf("\t\t\t\tpress 3 to exit.\n\n");
                int tb;
                printf("\t\t\t\tYour choice: ");
                scanf("%d",&tb);
                printf("\n\n\n\n");

                if(tb == 1){
                    goto mapmenu;
                }
                else if(tb == 2){
                    goto mainmenu;
                }
                else if(tb == 3){
                    exit(1);
                }
             }
        }


    return 0;
}

