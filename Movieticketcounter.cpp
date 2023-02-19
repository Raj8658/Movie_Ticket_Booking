//Header Files
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <process.h>
#include <time.h>
using namespace std;

//Class definition for ticket
class ticket{
	public:
	char name[10];
	char cno[10];
} t; //object definition for ticket

// Class definition for card
class card :  public ticket{  //inheritence for public ticket
public:
	char address[50];
	char emailid[20];
} v; //object definition for card

//Prototype Call for the functions definitions.
void pay(int);
void random();
void card();

//Main function
int main(){
	system("CLS");
	//Integer Declaration
	int ent, a, b, N, x, cardid;
	char ans;
	//To display the system time.
	//Using time header file
	{time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	cout << "Time of the computer presently:";
	cout << "seconds= " << timePtr->tm_sec << endl;
	cout << "minutes = " << timePtr->tm_min << endl;
	cout << "hours = " << timePtr->tm_hour << endl;
	cout << "day of month = " << timePtr->tm_mday << endl;
	cout << "month of year = " << timePtr->tm_mon << endl;
	cout << "year = " << timePtr->tm_year + 1900 << endl;
	cout << "weekday = " << timePtr->tm_wday << endl;
	cout << "day of year = " << timePtr->tm_yday << endl;
	cout << "daylight savings = " << timePtr->tm_isdst << endl;
	}
	
	//An exit controlled loop (Do...While)
	do{
		//Menu
		cout<<"\n\t\t\t ----------------------------------";
		cout<<"\n\t\t\t Simple Movie Ticket Booking System";
		cout<<"\n\t\t\t ----------------------------------";
		cout<<"\n\t\t\t\t Welcome Customer!";	 																					//Menu for the user
		cout<<"\n\n\t\t\t\t <1> Movie Timings";
		cout<<"\n\t\t\t\t <2> Recieving Ticket";
		cout<<"\n\t\t\t\t <3> For Information";
		cout<<"\n\t\t\t\t <4> DTCard Registration";
		cout<<"\n\t\t\t\t <5> Exit \n\n";
		cout<<"\t\t\t\tEnter Your Choice :"<<"\t";
		cin>>ent;
	switch(ent)
	{
			//Movie Titles
		case 1: 
		system("CLS");
		cout<<"\n\n\t\t\t\tThe Shows are :";
			cout<<"\n\n\t\t\t\t 1. Avengers: Infinity War";
			cout<<"\n\n\t\t\t\t 2. Antman And The Wasp";
			cout<<"\n\n\t\t\t\t 3. Deadpool 2";
			cout<<"\n\n\t\t\t\t 4. Venom";
			cout<<"\n\n\t\t\t\t 5. Captain Marvel\n";
			cout<<"\n\t\t\t\tEnter Your Choice :"<<"\t";
			cin>>a;
			cout<<"\n\n\t\t\t\t The Timings for the selected show are:";
			switch(a)
			{
				case 1:
					system("CLS");
				 cout<<"\n\n\t\t\t\t Select the the timings: ";
					cout<<"\n\t\t\t\t 1. 0800";
					cout<<"\n\t\t\t\t 2. 1300";
					cout<<"\n\t\t\t\t 3. 1450";
					cout<<"\n\t\t\t\t 4. 1800";
					cout<<"\n\t\t\t\t 5. 2100";
					cout<<"\n\t\t\t\t 6. 0100 \n";					//Timings of the show
					cout<<"\n\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					int x;
					cin>>x;
					pay(x);
					cout<<"\n\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
						{
							case 1:	cout<<"0800";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
						}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 2: 
				system("CLS");
				cout<<"\n\n\t\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t\t 1. 0900";
					cout<<"\n\t\t\t\t 2. 1100";
					cout<<"\n\t\t\t\t 3. 1250";
					cout<<"\n\t\t\t\t 4. 1500";
					cout<<"\n\t\t\t\t 5. 2000";
					cout<<"\n\t\t\t\t 6. 2200";
					cout<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\t\t Your ticket is here:";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\tShow timings 	:";
					switch(b)
					{
							case 1:	cout<<"0800";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 3: 
				system("CLS");
				cout<<"\n\n\t\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t\t 1. 0800";
					cout<<"\n\t\t\t\t 2. 1300";
					cout<<"\n\t\t\t\t 3. 1450";
					cout<<"\n\t\t\t\t 4. 1800";
					cout<<"\n\t\t\t\t 5. 2100";
					cout<<"\n\t\t\t\t 6. 0100";
					cout<<"\n\t\t\t\t Please select the timings";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\t\tEnter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"0900";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
				case 4: 
				system("CLS");
				cout<<"\n\n\t\t\t\tSelect the the timings: ";
					cout<<"\n\t\t\t\t 1. 0800";
					cout<<"\n\t\t\t\t 2. 1300";
					cout<<"\n\t\t\t\t 3. 1450";
					cout<<"\n\t\t\t\t 4. 1800";
					cout<<"\n\t\t\t\t 5. 2100";
					cout<<"\n\t\t\t\t 6. 0100";
					cout<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n\n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"0800";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
					}
						cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
						cin>>ans;
						system("CLS");
						break;
				case 5: 
				system("CLS");
				cout<<"\n\n\t\t\t\tSelect the the timings:";
					cout<<"\n\t\t\t\t 1. 0800";
					cout<<"\n\t\t\t\t 2. 1300";
					cout<<"\n\t\t\t\t 3. 1450";
					cout<<"\n\t\t\t\t 4. 1800";
					cout<<"\n\t\t\t\t 5. 2100";
					cout<<"\n\t\t\t\t 6. 0100";
					cout<<"\n\t\t\t\t Please select the timings: ";
					cin>>b;
					cout<<"\n\t\t\t\t Enter your name: ";
					cin>>t.name;
					cout<<"\n\t\t\t\t Enter your contact number: ";
					cin>>t.cno;
					cout<<"\n\t\t\t\t Enter the number of tickets you want to purchase: ";
					cin>>x;
					pay(x);
					cout<<"\n \n\t\t\t\t Your ticket is here: ";
					cout<<"\n\t\t\t\t Name 		:"<<t.name;
					cout<<"\n\t\t\t\t Contact No	:"<<t.cno;
					cout<<"\n\t\t\t\t Show timings 	:";
					switch(b)
					{
							case 1:	cout<<"0800";
								break;
							case 2:	cout<<"1300";
								break;
							case 3:	cout<<"1450";
								break;
							case 4:	cout<<"1800";
								break;
							case 5:	cout<<"2100";
								break;
							case 6:	cout<<"0100";
								break;
					}
					cout<<"\n\n\t\t\t\t Do you want to choose another option(y/n)";
					cin>>ans;
					system("CLS");
					break;
			}break;
		case 2:	system("CLS");
				cout<<"\n\nThank you for booking the tickets online \n To print out the tickets please enter your transaction ID in the portal";					//Finding about a prebooked ticket
				struct pre
				{
				int trsnid;
				char name[10];
				} p;
				cout<<"\n Enter your transaction id\n (Eg.last five digits of the transaction id) ";
				cin>>p.trsnid;
				cout <<"Enter your name";
				cin>>p.name;
				cout<<"Sorry to say that but you will need to get the print out of the booking because our database shows no booking by this name";
				cout<<"\n Do you want to choose another option(y/n)";
				cin>>ans;
				system("CLS");
				break;
		case 3: system("CLS");
				cout<<"For further information about movies you can download our Application(from the  Google Play Store or from the iOS App Store) or contact us at 01234567896523";			//Finding out more about our cinemas
				cout<<"\n Do you want to choose another option(y/n)";
				cin>>ans;
				system("CLS");
				break;
		case 4: system("CLS");
				cout<<"Good Morning/Evnening \n Welcome to start a new journey with our cinemas \n";																												//card membership
				card();
				cout<<"Thankyou. \n It will take us a week for completing your registration for the card. \n Please see the benefits of the card on the next page. -->";
				char f;
				cout<<"\n For selecting the page to go to benefits say (y/n)\n";
				cin>>f;
				if(f=='y')
				{
					cout<<"Thank you for registeration once again \n The priveleges provided with this card are as follows:";
					cout<<"\n 1. For every purchase of a movie ticket you get 25 points(1point = 1Rs.) so after 16 movies you get a free movie ticket.";
					cout<<"\n 2. You are provided with regular updates regarding the movie and the showtimings.";
					cout<<"\n 3. Anytime prebook tickets for the upcoming movie and preffered seats will be provided.";
				}
				cout<<"\n Do you want to choose another option(y/n)";
				cin>>ans;
				if(ans=='y')
				{
					system("CLS");
					break;
				}
				else
				{
					exit(0);
				}
				break;
		case 5: 
		system("CLS");
		cout<<"\n\t\t\t\tBrought To You by code-projects.org\n\n\t\t\t\t";
		system("PAUSE");
		exit(0);
				break;
	}
	}while(ans=='y');
	}

//Function Declaration for Card
void card()
{
	int cardid;
	cout<<"\t\t\t\tWelcome to register for card facility in our cinemas";
	cout<<" \n\t\t\t\t Enter your name: ";
	cin>>v.name;
	cout<<"\t\t\t\tEnter your mobile number: ";
	cin>>v.cno;
	cout<<"\t\t\t\tEnter the address: ";
	gets(v.address);
	cout<<"\t\t\t\tEnter the mail id: ";
	gets(v.emailid);
	system("CLS");
	int ID;
	srand (time(NULL));
	ID = rand() % 400000 + 4000000;
	if (ID<0)
	ID=(ID*-1);
	cout<<"\t\t\t\tYour new card number is - :" <<"\t"<<ID;
	fstream fout;
	fout.open("card.dat", ios::out|ios::app);
	fout<<"\n Name :"<<v.name<<"\n"<<"\n Mobile No. :"<<v.cno<<"\n"<<"\n Address :"<<v.address<<"\n"<<"\n Mail ID :"<<v.emailid<<"\n"<<"\nCard Number:"<<ID;
	fout.close();
	cout<<"\t\t\t\tThank you for the registeration for the card. \n";
}

//Payment system for the interface
void pay(int a)
{
	int normal, gold, amt[2],id;
	time_t t = time(NULL);							//time setup
	tm* timePtr = localtime(&t);
	fstream fin;
	fin.open("card.dat", ios::in|ios::app);
	fin>>id;
	cout<<"\t\tThank you for selecting the show. Now we request you to select your type of seating \n\n\t\t\t\t 1.Normal Class \n\t\t\t\t OR \n\t\t\t\t 2. Gold Class";
	int c;
	cin>>c;
	if(c==1)
	{
		cout<<"\n\n\t\t\t\tYou selected for a Normal show \n\n\t\t\t\t";
		system("PAUSE");
		system("CLS");
		amt[1] = a * 400;
		char final;
		cout<<"\n\n\t\t\t\t Do you have DTcard(y/n): ";
		cin>>final;
		if(final=='y')
		{
			int cid;
			fin.read((char*) &v, sizeof(v));
			
			cout<<"\n\t\t\t\tEnter the card number[10 digits]: ";
			
			if(cid==id)
			{
				amt[1]=amt[1] - (0.1*amt[1]);
			};
		}
		cout<<"\n\t\t\t\tWant to pay by Card(y/n): ";
		char rep;
		cin>>rep;
		cout<<"\n\t\t\t\t"<<"Paying :"<<amt[1]<<"\n";
		if (rep=='y'||rep=='Y')
		{
			cout<<"\t\t\t\tName of the card holder: ";
			char n[10];
			gets(n);
			cout<<"\n\t\t\t\tEnter the card number: ";
			char Card[16];
			gets(Card);
			cout<<"\t\t\t\tExpiry(MM/YYYY)";
			int expirymm,expiryyy;
			cin>>expirymm;
			cout<<"\t\t\t\t/";
			cin>>expiryyy;
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900)){
				if(expirymm<=(timePtr->tm_mon))
					{
						cout<<"\t\t\t\tEnter the month again: ";
						cin>>expirymm;
					}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"\t\t\t\tPlease enter a valid year: ";
					cin>>expiryyy;
				}
			};
			char password[3],vh;
			int h;
			puts("\t\t\t\tEnter the CVV/CVV2: ");
			while (1)
			{
				if (h<0)
					h=0;
				vh=getch();
				if (vh==13)
					break;
				if (vh==8)
				{
					putch(NULL);
					putch(NULL);
					putch(NULL);
					h--;
					continue;
				}
				password[h++]=vh;
				vh='*';
				putch(vh);
			};
			password[h]=='\0';
		}
	}
	else
	{
		cout<<"\n\n\t\t\t\tYou selected for the Gold Class \n\t\t\t\t";
			system("PAUSE");
		system("CLS");
		amt[2] = a * 700;
		char final;
		cout<<"\n\t\t\t\tDo you have DTcard(y/n): ";
		cin>>final;
		if(final=='y')
		{
			int cid;
			cout<<"\n\t\t\t\tEnter the card id number: ";
			cin>>cid;
			if(cid==id)
			{
				amt[1]=amt[1] - (0.1*amt[1]);
			};
		}
		cout<<"\n\t\t\t\tWant to pay by Card(y/n): ";
		char rep;
		cin>>rep;
		cout<<"\n\t\t\t\t"<<"Paying :"<<amt[2]<<"\n";
		if (rep=='y'||rep=='Y')
		{
			cout<<"\t\t\t\tName of the card holder: ";
			char n[10];
			gets(n);
			cout<<"\n\t\t\t\tEnter the card number: ";
			char Card[16];
			gets(Card);
			cout<<"\n\t\t\t\tExpiry(MM/YY): ";
			int expirymm, expiryyy;
			cin>>expirymm;
			cout<<"\n/";
			cin>>expiryyy;
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900)){
				if(expirymm<=(timePtr->tm_mon))
					{
						cout<<"\n\t\t\t\tEnter the month again: ";
						cin>>expirymm;
					}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"\n\t\t\t\tPlease enter a valid year: ";
					cin>>expiryyy;
				}
			};
			char password[3],vh;
			int h;
			puts("\n\t\t\t\tEnter the CVV/CVV2: ");
			while (1)
			{
				if (h<0)
					h=0;
				vh=getch();
				if (vh==13)
					break;
				if (vh==8)
				{
					putch(NULL);
					putch(NULL);
					putch(NULL);
					h--;
					continue;
				}
				password[h++]=vh;
				vh='*';
				putch(vh);
			};
			password[h]=='\0';
			}
	};
}
