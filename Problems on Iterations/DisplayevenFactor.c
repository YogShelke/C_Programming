//write a program which accept number from user and print Evenfactor of that number
        //ip:24
          //op:2,4,6,12
               #include<stdio.h>
               void DisplayFactor(int iNo)
               {
                   int i=0;
                   if(iNo<=0)
                   {
                       iNo=-iNo;
                   }
                   for(i=1;i<iNo;i++)
                   { 
                       if((iNo%i)==0)
                       {
                       if((i%2)==0)
                       {
                           printf("%d\n",i);
                       }
                       }

                   }
               }
                int main()
                {
                        int iValue=0;
                             printf("enter the numbers");
                             scanf("%d",&iValue);
                                   DisplayFactor(iValue);
                                     return 0;
                                     
                }