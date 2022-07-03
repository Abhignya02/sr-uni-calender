 #include<stdio.h>
 #include<stdlib.h>
    int getmonth(int,int);
    void calender2022();
    void allcalender();
    int main(){
    	 int choice;
    	 printf("\t\t\t\t***********************************************");
    	 printf("\n\t\t\t\t*                 CALENDER                    *");
    	 printf("\n\t\t\t\t*                                             *");
    	 printf("\n\t\t\t\t*                                             *");
    	
    	 printf("\n\n\t 1.calender of any year");
    	 printf("\n\t 2.SR UNIVERSITY CALENDER 2022");
    	 printf("\n\t 3.*****EXIT*****");
    	 do{
    	 printf("\n enter your choice\n");
    	 scanf("%d",&choice);
    	 switch(choice)
    	 {
    	 	case 1:allcalender();
    	 	       break;
    	 	case 2:calender2022();
    	 	       break;
    	 	case 3:exit(0);
    	 	       break;
    	 	default:
    	 		printf("\nchoice is out of range");
    	 	
    	 		
	     }}while(1);
    
     }
     void allcalender(){
	     
    	int yr, x, y, z, mon;
                  
                  printf("Enter an year to show the calendar :" );
                  scanf("%d",&yr);
                  x = ((yr-1)%400) / 100;
                  y = (((yr-1)%400) % 100) / 4;
                  z = (((yr-1)%400) % 100) - (((yr-1)%400) % 100) / 4;
                  mon = (x*5+y*2+z+1) % 7;
                  
                  printf("\n\n\n\nJanuary\n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\nFebruary\n\n");
                  if((yr)%4==0)
                  mon=getmonth(29,mon);
                  else
                  mon=getmonth(28,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\nMarch\n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\nApril\n\n");
                  mon=getmonth(30,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\nMay\n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\nJune\n\n");
                  mon=getmonth(30,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\nJuly\n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\nAugust\n\n");
                  mon=getmonth(31,mon);
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                   printf("\n\n\n\nSeptember\n\n");
                   mon=getmonth(30,mon);
                   printf("\n\n\n Press any key to display next month . . .");
                   getche();
                   
                   printf("\n\n\n\nOctober\n\n");
                   mon=getmonth(31,mon);
                   printf("\n\n\n Press any key to display next month . . .");
                   getche();
                   
                   printf("\n\n\n\nNovember\n\n");
                   mon=getmonth(30,mon);
                   printf("\n\n\n Press any key to display next month . . .");
                   getche();
                   
                   printf("\n\n\n\nDecember\n\n");
                   mon=getmonth(31,mon);
     getch();}
     	void calender2022(){
	    
                  int yr=2022, x, y, z, mon;     
                  x = ((yr-1)%400) / 100;
                  y = (((yr-1)%400) % 100) / 4;
                  z = (((yr-1)%400) % 100) - (((yr-1)%400) % 100) / 4;
                  mon = (x*5+y*2+z+1) % 7;
                printf("^^^^^^^^SR UNIVERSITY CALENDAR [2022]^^^^^^^^^^");
              
                  printf("\n\n\n-----------------January---------------------\n\n");
                  mon=getmonth(31,mon);
                   printf("\n----------------------------------------------");
                  printf("\n\n------Holidays-----");
                  printf("\n date\t\toccation");
                  printf("\n 01\t\t New year");
                  printf("\n 08\t\t second saturday");
                  printf("\n 14\t\t Boghi");
                  printf("\n 15\t\t Sankranthi");
                  printf("\n 26\t\t Republic Day");
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                
                  printf("\n\n\n\n-----------------February--------------------\n\n");
                  if((yr)%4==0)
                  mon=getmonth(29,mon);
                  else
                  mon=getmonth(28,mon);
                   printf("\n----------------------------------------------");
                  printf("\n\n------Holidays-----");
                  printf("\n date\t\toccation");
                  printf("\n 12\t\t second saturday ");
                  printf("\n\t\t\tSECOND INTERNAL EXAMINATION [10-11]");
                  printf("\n\t\tdate \t\t subject \t\t time");
                  printf("\n \t\t 10 \t\t Maths    \t\t [10:30 - 12:00]am");
                  printf("\n \t\t 10 \t\t  BEEE    \t\t [02:00 - 3:30]pm");
                  printf("\n \t\t 11 \t\t  Physics  \t\t[10:30 - 12:00]am");
                  printf("\n \t\t 11 \t\t  PSP      \t\t [02:00 - 3:30]pm");
                   printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\n-----------------March-----------------------\n\n");
                  mon=getmonth(31,mon);
                  printf("\n----------------------------------------------");
                  printf("\n\n------Holidays-----");
                  printf("\n date\t\toccation");
                  printf("\n 01\t\t Maha Shivaratri");
                  printf("\n 12\t\t second saturday");
                  printf("\n 18\t\t Holi");
                   printf("\n\n COMMENCEMENT OF CLASS WORK FOR II SEM FOR ACADEMIC YEAR 2021-2022");
                  printf("\n\n 1st SPELL OF INSTRUCTION ...21-03-2022 -  30-04-2022... ");
                  
                  
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\n-----------------April-----------------------\n\n");
                  mon=getmonth(30,mon);
                  printf("\n----------------------------------------------");
                  printf("\n\n------Holidays-----");
                  printf("\n date\t\toccation");
                  printf("\n 02\t\t Ugadhi");
                  printf("\n 05\t\t Babu Jagjivan Ram Jayanti");
                  printf("\n 09\t\t second saturday");
                  printf("\n 10\t\t Ram Navami");
                  printf("\n 14\t\t Dr Ambedkar Jayanti");
                  printf("\n 15\t\t Good Friday");
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\n----------------May--------------------------\n\n");
                  mon=getmonth(31,mon);
                  printf("\n----------------------------------------------");
                  printf("\n\n------Holidays-----");
                  printf("\n date\t\toccation");
                  printf("\n 01\t\t May Day");
                  printf("\n 14\t\t second saturday");
                  printf("\n 03\t\t Idul Fitr");
                  printf("\n SUMMMER BREAK [23-28]");
                  printf("\n\n\t\t\tFIRST INTERNAL EXAMINATION [2-3]");
                  printf("\n\t\tdate \t\t subject \t\t time");
                  printf("\n \t\t 02 \t\t  Maths    \t\t [10:30 - 12:00]am");
                  printf("\n \t\t 02 \t\t  BEEE    \t\t [02:00 - 3:30]pm");
                  printf("\n \t\t 03 \t\t  Physics  \t\t[10:30 - 12:00]am");
                  printf("\n \t\t 03 \t\t  PSP      \t\t [02:00 - 3:30]pm");
                  printf("\n\n 2nd SPELL OF INSTRUCTION ...09-05-2022 -  25-06-2022... ");
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                 
                  printf("\n\n\n\n---------------June--------------------------\n\n");
                  mon=getmonth(30,mon);
                  printf("\n----------------------------------------------");
                  printf("\n\n------Holidays-----");
                  printf("\n date\t\toccation");
                   printf("\n 11\t\t second saturday");
                   printf("\n\n\t\t\tSECOND INTERNAL EXAMINATION [27-28]");
                  printf("\n\t\tdate \t\t subject \t\t time");
                  printf("\n \t\t 27 \t\t  Maths    \t\t [10:30 - 12:00]am");
                  printf("\n \t\t 27 \t\t  BEEE    \t\t [02:00 - 3:30]pm");
                  printf("\n \t\t 28 \t\t  Physics  \t\t[10:30 - 12:00]am");
                  printf("\n \t\t 28 \t\t  PSP      \t\t [02:00 - 3:30]pm");
                  printf("\n\n 3rd SPELL OF INSTRUCTION ...30-06-2022 -  08-07-2022... ");
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                  printf("\n\n\n\n----------------July-------------------------\n\n");
                  mon=getmonth(31,mon);
                   printf("\n----------------------------------------------");
                  printf("\n------Holidays-----");
                  printf("\n date\t\toccation");
                  printf("\n 09\t\t second saturday");
                  printf("\n 10\t\t Bakrid/Eid al Adha");
                  printf("\n 25\t\t Bonalu");
                  printf("\n\n\t\t\tEND SEMESTER  EXAMINATION [theory and practical] [11-30]");
                  printf("\n\t\tdate \t\t subject \t\t time");
                  printf("\n \t\t 18 \t\t Maths    \t\t [10:00 - 01:00]pm");
                  printf("\n \t\t 20 \t\t  BEEE    \t\t [10:00 - 01:00]pm");
                  printf("\n \t\t 22 \t\t  Physics  \t\t[10:00 - 01:00]pm");
                  printf("\n \t\t 26 \t\t  PSP      \t\t [10:00 - 01:00]pm");
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                 
                  printf("\n\n\n\n-----------------August----------------------\n\n");
                  mon=getmonth(31,mon);
                  printf("\n----------------------------------------------");
                  printf("\n------Holidays-----");
                  printf("\n date\t\toccation");
                  printf("\n 09\t\t Muharram");
                  printf("\n 13\t\t second saturday");
                  printf("\n 15\t\t Independence Day");
                  printf("\n 19\t\t Janmastami");
                  printf("\n 31\t\t Ganesh Chaturti");
                  printf("\n\n COMMENCEMENT OF CLASS WORK FOR I SEM FOR ACADEMIC YEAR 2022-2023");
                  printf("\n\n\n Press any key to display next month . . .");
                  getche();
                  
                   printf("\n\n\n\n---------------September--------------------\n\n");
                   mon=getmonth(30,mon);
                   printf("\n----------------------------------------------");
                   printf("\n\n------Holidays-----");
                  printf("\n date\t\toccation");
                   printf("\n 10\t\t second saturday");
                  printf("\n 25\t\t First day Batukamma");
                   printf("\n\n\n Press any key to display next month . . .");
                   getche();
                  
                   printf("\n\n\n\n-----------------October--------------------\n\n");
                   mon=getmonth(31,mon);
                   printf("\n----------------------------------------------");
                   printf("\n\n------Holidays-----");
                  printf("\n date\t\toccation");
                  printf("\n 02\t\t Gandhi Jayanti");
                  printf("\n 08\t\t second saturday");
                  printf("\n 05\t\t Vijaya Dashami");
                  printf("\n 09\t\t Eid e milad");
                  printf("\n 24\t\t Diwali");
                   printf("\n\n\n Press any key to display next month . . .");
                   getche();
                   
                   printf("\n\n\n\n-----------------November-------------------\n\n");
                   mon=getmonth(30,mon);
                   printf("\n\n------Holidays-----");
                  printf("\n date\t\toccation");
                   printf("\n 12\t\t second saturday");
                  printf("\n 08 karthika Pournami and Guru nanak Jyanti");
                  
                   printf("\n----------------------------------------------");
                   printf("\n\n\n Press any key to display next month . . .");
                   getche();
                   
                   printf("\n\n\n\n------------------December------------------\n\n");
                   mon=getmonth(31,mon);
                   printf("\n\n------Holidays-----");
                  printf("\n date\t\toccation");
                   printf("\n 10\t\t second saturday");
                  printf("\n 25\t\t Christmas Holidays");
                  printf("\n 26\t\t Boxing Day");
                   printf("\n----------------------------------------------");
                   getch();}
     int getmonth(int p,int q)
     {
                   int a,b,c;
                   printf("\n   *Sun   Mon   Tue   Wed   Thu    Fri   Sat\n");
                   for(a=0;a<=q;a++){
                   if(a>=q)
                   {
                   for(b=1;b<=p;b++)
                   {
                    if((a % 7) == 0)
                    printf("\n");
                    printf("%6d",b);
                    a++;
                    }
                    }
                    else
                    printf("      ");
                    c=(p+q)%7;}
    return(c);
    }
    
