#include<stdio.h>
#include<conio.h>
void registration();
void domestic();
int system();
int main()
{
	system("color 70");
int ch;
char name,gen,ei,dot,dor,name1;
printf("\t\t\t************WELCOME TO AIRLINES***********************\n");
printf(" We provide the worlds simple and easiest way to book an airticket\n");
printf("We provide the most cheapest fare of flights which no other site provides\n");
printf("Our site is recog by the govt of india and it is hundred percent secure\n");
printf("Warning: Money once paid is not refundable\n");
registration();
 printf("1.Domestic\n2.Vacation\n3.Intenational\n");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:printf("You have choosen domestic trip\n");
	 break;
  case 2:printf("You have choosen vacation trip\n");
	 break;
  case 3:printf("You have choosen international trip\n");
	 break;
  default:printf(" Please choose the correct option from above\n");
  }
  domestic();
}
void registration()
{
  int age,pn,nop,i;
  char name[20],ei[20];
  char gen[7];
 printf("Enter no.of passangers\n");
 scanf("%d",&nop);

  
  	for(i=0;i<nop;i++)
  	{
  		printf("Enter your name:\n");
  		scanf("%s",&name);
  	    printf("Enter your age\n");
  	    scanf("%d",&age);
  	    printf("Enter your  Number\n");
  	    scanf("%d",&pn);
  	    printf("Enter your gender\n");
  	    scanf("%s",&gen);
  	    printf("Enter your email-id\n");
  	    scanf("%s",&ei);
	  }
  }

  void domestic()
{
	int stw,fly1,flyfrom,fly2,flyto,food,food1,flt,nop1,ad,chl,baby,cvv,cn,total;
	char dot,dor,name1;
printf("Select whether your trip is:\n1.round trip\n2.single trip\n");
scanf("%d",&stw);
switch(stw)
{
case 1:
       printf("The date of travel\n");
       scanf("%ch",&dot);
       printf("The date of return\n");
       scanf("%ch",&dor);
       printf("From: Where: To: fly:\n1.hyd\n2.chenni\n3.delhi\n4.mumbai\n5.madhya pradesh\n7.rajasthan\n8.kerela\n");
       scanf("%d",&fly1);
       printf("Taking of to:\n1.hyd\n2.chenni\n3.delhi\n4.mumbai\n5.madhya pradesh\n7.rajasthan\n8.kerela\n");
       scanf("%d",&fly2);
       flyfrom=fly1;
       flyto=fly2;
       printf("You are flying from:%d\n",flyfrom);
       printf("You are flying to:%d\n",flyto);
       printf("Do you need food in our trip(chages apply)\n");
       printf("1.yes\n2.no\n");
       scanf("%d",&food);
       if(food==1)
       {
       printf("Please select any one:\n1.Veg(extra:500 rupees)\n2.Non-Veg(extra:750 rupees)\n3.Veg and Non - Veg(extra:1000 rupees)\n");
       scanf("%d",&food1);
       if(food1==1)
       {
       printf("You have choosen veg and you will be charged 500 rupees extra\n");
       }
       else if(food1==2)
       {
       printf("You have choosen non-veg and you will be charged 750 rupees extra\n");
       }
       else
       {
       printf("You have choosen both veg and non veg and you will charged 1000 rupees extra\n");
       }
       }
       else
       {
       printf("You have not choosen food option\n");
       }
       printf("The flights available are:\n1.Fly(Spicejet) Return(Indigo)(Avg cost is 6000 rupees)\n2.Fly(Spicejet) Return(Spicejet)(Avg cost is 5500)\n3.Fly(Indigo) Return(Airindia)(Avg cost is 5500 rupees)\n4.Fly(Airindia) Return(Spicejet)(Avg cost is 4500)\n5.Fly(Airindia) Return(Airindia)(Avg cost is 3500)\n6.Fly(Spicejet) Return(Airindia)(Avg cost is 5500)\n7.Fly(Royal) Return(Royal)(Avg cost is 10000)\n");
       scanf("%d",&flt);
       switch(flt)
       {
       case 1:
	       {
	       printf(" You are traveling in Spicejet an returning in indigo\n");
	       printf(" The amount is 6000 per head(including everything)\n");
	       printf(" Enter the no.of passangers traveling\n");
	       scanf("%d",&nop1);
	       printf("Enter no.of 1.Adults(above 18yrs)\n2.Children(below 18yrs and above 10yrs)\n3.Babies(below 10yrs)\n");
	       scanf("%d%d%d",&ad,&chl,&baby);
	       total=(ad+chl+baby)*6000;
	       printf("Your total amount is=%d",total);
	       printf("Here are the full details of your trip\n");
	       printf("You need to pay the amount through net banking\n");
	       printf("Enter your card number:\n");
	       scanf("%d",&cn);
	       printf("Enter the card holder name");
	       scanf("%ch",&name1);
	       printf("Enter the valid CVV\n");
	       scanf("%d",&cvv);
	       printf("Your payment is successful\n");
	       printf("**********THANKYOU FOR BOOKING TICKET THROUGH OUR SITE.B)\nHAPPY JOURNEY.\n");
		}
       case 2:
	       {
	       printf(" You are traveling in Spicejet an returning in Spicejet\n");
	       printf(" The amount is 5500 per head(including everything)\n");
	       printf(" Enter the no.of passangers traveling\n");
	       scanf("%d",&nop1);
	       printf("Enter no.of 1.Adults(above 18yrs)\n2.Children(below 18yrs and above 10yrs)\n3.Babies(below 10yrs)\n");
	       scanf("%d%d%d",&ad,&chl,&baby);
	       total=(ad+chl+baby)*5500;
	       printf("Your total amount is=%d",total);
	       printf("Here are the full details of your trip\n");
	       printf("You need to pay the amount through net banking\n");
	       printf("Enter your card number:\n");
	       scanf("%d",&cn);
	       printf("Enter the card holder name");
	       scanf("%ch",&name1);
	       printf("Enter the valid CVV\n");
	       scanf("%d",&cvv);
	       printf("Your payment is successful\n");
	       printf("**********THANKYOU FOR BOOKING TICKET THROUGH OUR SITE.B)\nHAPPY JOURNEY.\n");
		}
       case 3:
	       {
	       printf(" You are traveling in Indigo and returning in Airindia\n");
	       printf(" The amount is 5500 per head(including everything)\n");
	       printf(" Enter the no.of passangers traveling\n");
	       scanf("%d",&nop1);
	       printf("Enter no.of 1.Adults(above 18yrs)\n2.Children(below 18yrs and above 10yrs)\n3.Babies(below 10yrs)\n");
	       scanf("%d%d%d",&ad,&chl,&baby);
	       total=(ad+chl+baby)*5500;
	       printf("Your total amount is=%d",total);
	       printf("Here are the full details of your trip\n");
	       printf("You need to pay the amount through net banking\n");
	       printf("Enter your card number:\n");
	       scanf("%d",&cn);
	       printf("Enter the card holder name");
	       scanf("%ch",&name1);
	       printf("Enter the valid CVV\n");
	       scanf("%d",&cvv);
	       printf("Your payment is successful\n");
	       printf("**********THANKYOU FOR BOOKING TICKET THROUGH OUR SITE.B)\nHAPPY JOURNEY.\n");
		}
    case 4:
	       {
	       printf(" You are traveling in Airindia and returning in Spicejet\n");
	       printf(" The amount is 4500 per head(including everything)\n");
	       printf(" Enter the no.of passangers traveling\n");
	       scanf("%d",&nop1);
	       printf("Enter no.of 1.Adults(above 18yrs)\n2.Children(below 18yrs and above 10yrs)\n3.Babies(below 10yrs)\n");
	       scanf("%d%d%d",&ad,&chl,&baby);
	       total=(ad+chl+baby)*4500;
	       printf("Your total amount is=%d",total);
	       printf("Here are the full details of your trip\n");
	       printf("You need to pay the amount through net banking\n");
	       printf("Enter your card number:\n");
	       scanf("%d",&cn);
	       printf("Enter the card holder name");
	       scanf("%ch",&name1);
	       printf("Enter the valid CVV\n");
	       scanf("%d",&cvv);
	       printf("Your payment is successful\n");
	       printf("**********THANKYOU FOR BOOKING TICKET THROUGH OUR SITE.B)\nHAPPY JOURNEY.\n");
		}
    case 5:
	       {
	       printf(" You are traveling in Airindia and returning in Airindia\n");
	       printf(" The amount is 3500 perhead(including everything)\n");
	       printf(" Enter the no.of passangers traveling\n");
	       scanf("%d",&nop1);
	       printf("Enter no.of 1.Adults(above 18yrs)\n2.Children(below 18yrs and above 10yrs)\n3.Babies(below 10yrs)\n");
	       scanf("%d%d%d",&ad,&chl,&baby);
	       total=(ad+chl+baby)*3500;
	       printf("Your total amount is=%d",total);
	       printf("Here are the full details of your trip\n");
	       printf("You need to pay the amount through net banking\n");
	       printf("Enter your card number:\n");
	       scanf("%d",&cn);
	       printf("Enter the card holder name");
	       scanf("%ch",&name1);
	       printf("Enter the valid CVV\n");
	       scanf("%d",&cvv);
	       printf("Your payment is successful\n");
	       printf("**********THANKYOU FOR BOOKING TICKET THROUGH OUR SITE.B)\nHAPPY JOURNEY.\n");
		}
   case 6:
	       {
	       printf(" You are traveling in Spicejet and returning in Airindia\n");
	       printf(" The amount is 5500 per head(including everything)\n");
	       printf(" Enter the no.of passangers traveling\n");
	       scanf("%d",&nop1);
	       printf("Enter no.of 1.Adults(above 18yrs)\n2.Children(below 18yrs and above 10yrs)\n3.Babies(below 10yrs)\n");
	       scanf("%d%d%d",&ad,&chl,&baby);
	       total=(ad+chl+baby)*5500;
	       printf("Your total amount is=%d",total);
	       printf("Here are the full details of your trip\n");
	       printf("You need to pay the amount through net banking\n");
	       printf("Enter your card number:\n");
	       scanf("%d",&cn);
	       printf("Enter the card holder name");
	       scanf("%ch",&name1);
	       printf("Enter the valid CVV\n");
	       scanf("%d",&cvv);
	       printf("Your payment is successful\n");
	       printf("**********THANKYOU FOR BOOKING TICKET THROUGH OUR SITE.B)\nHAPPY JOURNEY.\n");
		}
    case 7:
	       {
	       printf(" You are traveling in Royal and returning in Royal\n");
	       printf(" The amount is 10000perhead(including everything)\n");
	       printf(" Enter the no.of passangers traveling\n");
	       scanf("%d",&nop1);
	       printf("Enter no.of 1.Adults(above 18yrs)\n2.Children(below 18yrs and above 10yrs)\n3.Babies(below 10yrs)\n");
	       scanf("%d%d%d",&ad,&chl,&baby);
	       total=(ad+chl+baby)*10000;
	       printf("Your total amount is=%d",total);
	       printf("Here are the full details of your trip\n");
	       printf("You need to pay the amount through net banking\n");
	       printf("Enter your card number:\n");
	       scanf("%d",&cn);
	       printf("Enter the card holder name");
	       scanf("%ch",&name1);
	       printf("Enter the valid CVV\n");
	       scanf("%d",&cvv);
	       printf("Your payment is successful\n");
	       printf("**********THANKYOU FOR BOOKING TICKET THROUGH OUR SITE.B)\nHAPPY JOURNEY.\n");
	       }
     default:printf("Enter the valid option for booking the flight\n");
	    }
 case 2:
       printf("The date of travel\n");
       scanf("%ch",&dot);
       printf("The date of return\n");
       scanf("%ch",&dor);
       printf("From: Where: To: Fly:\n1.Hyd\n2.Chennai\n3.Delhi\n4.Mumbai\n5.Madhya Pradesh\n7.Rajasthan\n8.Kerela\n");
       scanf("%d",&fly1);
       printf("Taking of to:\n1.Hyd\n2.Chennai\n3.Delhi\n4.Mumbai\n5.Madhya Pradesh\n7.Rajasthan\n8.Kerela\n");
       scanf("%d",&fly2);
       flyfrom=fly1;
       flyto=fly2;
       printf("You are flying from:%d\n",flyfrom);
       printf("You are flying to:%d\n",flyto);
       printf("Do you need food in your trip(chages apply)\n");
       printf("1.Yes\n2.No\n");
       scanf("%d",&food);
       if(food==1)
       {
       printf("Please select any one:\n1.Veg(extra:500 rupees)\n2.Non-Veg(extra:750 rupees)\n3.Veg and Non Veg(extra:1000 rupees)\n");
       scanf("%d",&food1);
       if(food1==1)
       {
       printf("You have choosen veg and you will be charged 500 rupees extra\n");
       }
       else if(food1==2)
       {
       printf("You have choosen non-veg and you will be charged 750 rupees extra\n");
       }
       else
       {
       printf("You have choosen both veg and non veg and you will charged 1000 rupees extra\n");
       }
       }
       else
       {
       printf("You have not choosen food option\n");
       }
       printf(" The flights available are:\n1.Spicejet(Avg fare is 3000)\n2.Indigo(Avg fare is 2000)\n3.Airindia(Avg fare is 2500)\n4.Royal(Avg fare is 5000)\n5.Kaikachoori(Avg fare is 6000)\n");
       scanf("%d",flt);
       switch(flt)
       {
       case 1:
	       {
	       printf(" You are travelling in Spicejet.\n");
	       printf(" The amount is 3000 per head(including everything)\n");
	       printf(" Enter the no.of passangers traveling\n");
	       scanf("%d",&nop1);
	       printf("Enter no.of 1.Adults(above 18yrs)\n2.Children(below 18yrs and above 10yrs)\n3.Babies(below 10yrs)\n");
	       scanf("%d%d%d",&ad,&chl,&baby);
	       total=(ad+chl+baby)*3000;
	       printf("Your total amount is=%d",total);
	       printf("Here are the full details of your trip\n");
	       printf("You need to pay the amount through net banking\n");
	       printf("Enter your card number:\n");
	       scanf("%d",&cn);
	       printf("Enter the card holder name");
	       scanf("%ch",&name1);
	       printf("Enter the valid CVV\n");
	       scanf("%d",&cvv);
	       printf("Your payment is successful\n");
	       printf("**********THANKYOU FOR BOOKING TICKET THROUGH OUR SITE.B)\nHAPPY JOURNEY.\n");
	       }
     case 2:
	       {
	       printf(" You are traveling in Indigo.\n");
	       printf(" The amount is 2000perhead(including everything)\n");
	       printf(" Enter the no.of passangers traveling\n");
	       scanf("%d",&nop1);
	       printf("Enter no.of 1.Adults(above 18yrs)\n2.Children(below 18yrs and above 10yrs)\n3.Babies(below 10yrs)\n");
	       scanf("%d%d%d",&ad,&chl,&baby);
	       total=(ad+chl+baby)*2000;
	       printf("Your total amount is=%d",total);
	       printf("Here are the full details of your trip\n");
	       printf("You need to pay the amount through net banking\n");
	       printf("Enter your card number:\n");
	       scanf("%d",&cn);
	       printf("Enter the card holder name");
	       scanf("%ch",&name1);
	       printf("Enter the valid cvv\n");
	       scanf("%d",&cvv);
	       printf("Your payment is succesfull\n");
	       printf("**********THANKYOU FOR BOOKING TICKET THROUGH OUR SITE.B)\nHAPPY JOURNEY.\n");
	       }
      case 3:
	       {
	       printf(" You are traveling in Airindia.\n");
	       printf(" The amount is 2500perhead(including everything)\n");
	       printf(" Enter the no.of passangers traveling\n");
	       scanf("%d",&nop1);
	       printf("Enter no.of 1.Adults(above 18yrs)\n2.Children(below 18yrs and above 10yrs)\n3.Babies(below 10yrs)\n");
	       scanf("%d%d%d",&ad,&chl,&baby);
	       total=(ad+chl+baby)*2500;
	       printf("Your total amount is=%d",total);
	       printf("Here are the full detail of your trip\n");
	       printf("You need to pay the amount through net banking\n");
	       printf("Enter your card number:\n");
	       scanf("%d",&cn);
	       printf("Enter the card holder name");
	       scanf("%ch",&name1);
	       printf("Enter the valid CVV\n");
	       scanf("%d",&cvv);
	       printf("Your payment is successful\n");
	       printf("**********THANKYOU FOR BOOKING TICKET THROUGH OUR SITE.B)\nHAPPY JOURNEY.\n");
	       }
     case 4:
	       {
	       printf(" You are traveling in Royal\n");
	       printf(" The amount is 5000perhead(including everything)\n");
	       printf(" Enter the no.of passangers traveling\n");
	       scanf("%d",&nop1);
	       printf("Enter no.of 1.Adults(above 18yrs)\n2.Children(below 18yrs and above 10yrs)\n3.Babies(below 10yrs)\n");
	       scanf("%d%d%d",&ad,&chl,&baby);
	       total=(ad+chl+baby)*5000;
	       printf("Your total amount is=%d",total);
	       printf("Here are the full details of your trip\n");
	       printf("You need to pay the amount through net banking\n");
	       printf("Enter your card number:\n");
	       scanf("%d",&cn);
	       printf("Enter the card holder name");
	       scanf("%ch",&name1);
	       printf("Enter the valid CVV\n");
	       scanf("%d",&cvv);
	       printf("Your payment is successful\n");
	       printf("**********THANKYOU FOR BOOKING TICKET THROUGH OUR SITE.B)\nHAPPY JOURNEY.\n");
	       }
     case 5:
	       {
	       printf(" You are traveling in Kaikachori\n");
	       printf(" The amount is 6000perhead(including everything)\n");
	       printf(" Enter the no.of passangers traveling\n");
	       scanf("%d",&nop1);
	       printf("Enter no.of 1.Adults(above 18yrs)\n2.Children(below 18yrs and above 10yrs)\n3.Babies(below 10yrs)\n");
	       scanf("%d%d%d",&ad,&chl,&baby);
	       total=(ad+chl+baby)*6000;
	       printf("Your total amount is=%d",total);
	       printf("Here are the full details of your trip\n");
	       printf("You need to pay the amount through net banking\n");
	       printf("Enter your card number:\n");
	       scanf("%d",&cn);
	       printf("Enter the card holder name");
	       scanf("%ch",&name1);
	       printf("Enter the valid CVV\n");
	       scanf("%d",&cvv);
	       printf("Your payment is successful\n");
	       printf("**********THANKYOU FOR BOOKING TICKET THROUGH OUR SITE.B\n");
	       }
      default:printf("Enter the valid option to book your ticket\n");

 getch();

 }
 }
 }

