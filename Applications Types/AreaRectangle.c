//Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height) 
//Input :  5.3  9.78 Output :  51.834

#include<stdio.h>
    double Rectangle(float fWidth,float fHeight)
    {
        float fArea=0.0;
        fArea=fWidth*fHeight;
        return fArea;
    }
         int main()
         {
             float fValue1=0.0;
             float fValue2=0.0;
             double dret=0.0;
             printf("enter the width");
             scanf("%f",&fValue1);
            printf("enter the height");
             scanf("%f",&fValue2);
             dret=Rectangle(fValue1,fValue2);
             printf("Area of width is %f",dret);
             return 0;
         }