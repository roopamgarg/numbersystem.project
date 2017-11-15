#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<process.h>
#include<dos.h>
#define keyesc   27
int check(int []);
void num();
main()
{
int gd=0,gm,ch,x=110,y=210,i;
initgraph(&gd,&gm,"");
initwindow(1080,640,"insert image");
readimagefile("C:\\Users\\hp\\Desktop\\back\\wallpapers\\win.jpg",0,0,1080,640);
settextstyle(8,4,4);

setcolor(9);
outtextxy(750,240,"WELCOME TO THE WORLD OF GAMEING");
getch();
initgraph(&gd,&gm,"");
initwindow(1080,640,"insert image");
readimagefile("C:\\Users\\hp\\Desktop\\back\\wallpapers\\ti.jpg",0,0,1080,640);
putpixel(1080,640,WHITE);
setcolor(4);
setfillstyle(1,9);
rectangle(100,200,200,300);
outtextxy(100,150,"NUMBER SHIFTING");
floodfill(101,202,4);
num();
getch();
closegraph();
getch();
}
void num()
{
    char arr[9][1],ch;
    int j,t,a[9],k=0,l[1];
    static int i;
    srand(time('\0'));
    for(i=0;i<9;i++)
    {
        t=rand()%10;
        for(j=0;j<=i-1;j++)
        {
            if(t==a[j])
                break;
        }
 if(i!=j||t>8||t<0)
        {
             i--;
        }
        else if(i==j&&t<=8&&t>=0)
        {
            a[i]=t;
        }
}
    for(i=0;i<3;i++)
    {
        setcolor(5);
        sprintf(arr[i],"%d",a[i]);
        settextstyle(5,4,4);
        outtextxy(100+k,202,arr[i]);
        k=k+40;
    }
    k=0;
    for(i=3;i<6;i++)
    {
        sprintf(arr[i],"%d",a[i]);
        outtextxy(100+k,232,arr[i]);
        k=k+40;
    }
      k=0;
    for(i=6;i<9;i++)
    {
        sprintf(arr[i],"%d",a[i]);
        outtextxy(100+k,262,arr[i]);
        k=k+40;
    }
    i=0;
while(1)
{
ch=getch();
switch(ch)
{
    case KEY_UP:
if(i>3)
    i=i-3;
      break;
  case KEY_DOWN:
      if(i<7)
        i=i+3;

        break;
    case KEY_LEFT:
        if(i>1)
        i--;
        break;
    case KEY_RIGHT:
        if(i<9)
            i++;
        break;
    case 13:
        {
        l[1]=a[i+1];
        a[i+1]=a[i];
        a[i]=l[1];
        }
        k=0;
    for(i=0;i<3;i++)
    {
        setcolor(5);
        sprintf(arr[i],"%d",a[i]);
        outtextxy(100+k,202,arr[i]);
        k=k+40;

    }
    k=0;
    for(i=3;i<6;i++)
    {
        sprintf(arr[i],"%d",a[i]);
        outtextxy(100+k,232,arr[i]);
        k=k+40;
    }

      k=0;
    for(i=6;i<9;i++)
    {
        sprintf(arr[i],"%d",a[i]);
        outtextxy(100+k,262,arr[i]);
        k=k+40;
    }
    i=0;
    break;
    case keyesc:
        cleardevice();
        if(check(a)>0)
        {
            initwindow(1080,640,"insert image");
readimagefile("C:\\Users\\hp\\Desktop\\back\\wallpapers\\star.jpg",0,0,1080,640);
            settextstyle(8,4,4);
            setcolor(9);
            for(i=400;i<=1200;i++)
            {
            outtextxy(i,240,"CONGRATULATION YOU HAVE DONE IT");
            delay(10);
            }
        }
        else
        {
             initwindow(1080,640,"insert image");
readimagefile("C:\\Users\\hp\\Desktop\\back\\wallpapers\\st.jpg",0,0,1080,640);
            settextstyle(8,4,4);
            setcolor(9);
            for(i=400;i<=1200;i++)
            {
            outtextxy(i,240,"SORRY TRY AGAIN LATER");
            delay(10);
            }
        }
        getch();
        cleardevice();
        initwindow(1080,640,"insert image");
readimagefile("C:\\Users\\hp\\Desktop\\back\\wallpapers\\nig.jpg",0,0,1080,640);
            settextstyle(5,4,5);
            setcolor(9);
        outtextxy(700,240,"SEE YOU LATER");
        getch();
        exit(0);
}
}
}
int check(int a[])
{

    int c[9]={0,1,2,3,4,5,6,7,8},i,f=0;
    for(i=0;i<9;i++)
        if(a[i]!=c[i])
    {
        f=1;
    }

        if(f==0)
            return(1);
        else
            return(0);
}

