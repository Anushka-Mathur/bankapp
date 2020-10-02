#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>

struct acchold
{
   int accno;
   char name[20];
   float amt;
   char pass[6];
   char email[100];
};
void personal(acchold u[20],int);
void home(acchold u[20],int);
void stud(acchold u[20],int);
void business(acchold u[20],int);
void car(acchold u[20],int);

void create(acchold u[20],int& );
void display(acchold u[20],int );
void deposit(acchold u[20],int );
void withdraw(acchold u[20],int );
void close(acchold u[20],int& );
void modify(acchold u[20],int );
void loan(acchold u[20],int );
void all(acchold u[20],int );

void main()
{
   clrscr();
   int c,n=0,k,o,q,b;
   char f,g[100];
   acchold u[20];
     i:cout<<endl<<"**************Welcome to JAMBo Bank**************"<<endl<<endl;
       cout<<"Kindly choose your preferred option"<<endl<<endl;
       cout<<"1.User          2.Admin          3.Exit"<<endl<<endl;
       cout<<"Select ADMIN option to create your bank account"<<endl<<endl;
       cout<<"Enter choice=";
       cin>>k;
       switch(k)
       {
	case 1:z:cout<<endl<<"Kindly choose your preferred option"<<endl<<endl;
		 cout<<"1.Display account details"<<endl;
		 cout<<"2.Deposit money in account"<<endl;
		 cout<<"3.Withdraw money from account"<<endl;
		 cout<<"4.Modify details in account"<<endl;
		 cout<<"5.Apply for loan"<<endl;
		 cout<<"6.Exit"<<endl<<endl;
		 cout<<"Enter choice=";
		 cin>>c;
		 cout<<endl;

		 switch(c)
		 {

		  case 1: display(u,n);
			  break;
		  case 2: deposit(u,n);
			  break;
		  case 3: withdraw(u,n);
			  break;
		  case 4: modify(u,n);
			  break;
		  case 5: loan(u,n);
			  break;
		  case 6: exit(0);
		  default: cout<<"Invalid Choice"<<endl<<"Kindly enter again"<<endl;
			   cout<<"Enter choice=";
			   cin>>c;
		 }
		 cout<<endl<<endl<<"Would you like to continue as a user? (y/n)";
		 cin>>f;
		 if(f=='y'||f=='Y')
		 {
		   goto z;
		 }
		 else
		   if(f=='N'||f=='n')
		   {
		     goto i;
		   }

	case 2: l:cout<<"Enter security code=";
		  for(b=0;b<4;b++)
		  {
		     g[b]=getch();
		     cout<<"*";
		  }
		  g[4]='\0';
		  cout<<endl<<endl;
		  if(strcmp(g,"1357")==0)
		  {
		   cout<<endl<<"Kindly choose your preferred option"<<endl<<endl;
		   cout<<"1.Create a new account"<<endl;
		   cout<<"2.Close/Delete account"<<endl;
		   cout<<"3.Display information of all account holders"<<endl;
		   cout<<"4.Exit"<<endl<<endl;
		   cout<<"Enter choice=";
		   cin>>q;

		   switch(q)
		   {
		    case 1: create(u,n);
			    break;
		    case 2: close(u,n);
			    break;
		    case 3: all(u,n);
			    break;
		    case 4: exit(0);
			    break;
		    default: cout<<"Invalid Choice"<<endl<<"Kindly enter again"<<endl;
		   }
		  }
		  else
		  cout<<'\t'<<"Wrong security code"<<endl;
		 cout<<endl<<endl<<"Would you like to continue as an admin? (y/n)";
		 cin>>f;
		 if(f=='y'||f=='Y')
		 {
		   goto l;
		 }
		 else
		   if(f=='N'||f=='n')
		   {
		     goto i;
		   }
	 case 3 : exit(0);
	 default: cout<<"Invalid Choice"<<endl<<"Kindly enter again"<<endl;

       }

 getch();
}

void create(acchold u[20],int& n)
{
   cout<<'\t'<<"New Account form"<<endl<<'\t'<<"----------------"<<endl;
   cout<<"Enter bank account number:";
   cin>>u[n].accno;
   cout<<"Enter name of account holder:";
   gets(u[n].name);
   cout<<"Enter email id:";
   gets(u[n].email);
   cout<<"Enter intial amount(>500):";
   cin>>u[n].amt;
   if(u[n].amt<500)
   {
     cout<<endl<<"Kindly enter valid amount"<<endl;
     cout<<"Enter intial amount(>500):";
     cin>>u[n].amt;
   }
 o:cout<<"Enter password(only 5 characters):";
   gets(u[n].pass);
   if(strlen(u[n].pass)==5)
   {
     cout<<endl<<'\t'<<"ACCOUNT CREATED"<<endl;
     n++;
   }
   else
   {
     cout<<"Enter password of 5 characters only"<<endl;
     goto o;
   }
}

void display(acchold u[20],int n)
{
  int x,l,flag=0,fl=0;
  cout<<"Enter account no. and password"<<endl;
  cout<<"Enter account no:";
  cin>>x;
  char e[5];
  cout<<"Enter password:";
  for(int b=0;b<5;b++)
  {
     e[b]=getch();
     cout<<"*";
  }
  e[b]='\0';
  for(int i=0;i<n;i++)
  {
    if(x==u[i].accno)
    {
      if(strcmp(u[i].pass,e)==0)
      {
	cout<<endl<<"---------------------------------------------------";
	cout<<endl<<'\t'<<"Account no: "<<u[i].accno<<endl;
	cout<<'\t'<<"Name of account holder: ";
	puts(u[i].name);
	cout<<'\t'<<"Amount in account: "<<"AED."<<u[i].amt<<endl;
	cout<<'\t'<<"Email address: ";
	puts(u[i].email);
	cout<<"---------------------------------------------------";
	flag=1;
	l=i;
      }
      else
      {
	fl=1;
	cout<<endl<<"Wrong Password"<<endl;
	break;
      }
    }
  }
  if(flag==0&&fl==0)
    cout<<endl<<"Account number doesnt exist"<<endl;

}

void deposit(acchold u[20],int n)
{
  int x,l,flag=0,fl=0;
  cout<<"Enter account no. and password"<<endl;
  cout<<"Enter account no:";
  cin>>x;
  char e[5];
  cout<<"Enter password:";
  for(int b=0;b<5;b++)
  {
     e[b]=getch();
     cout<<"*";
  }
  e[b]='\0';
  for(int i=0;i<n;i++)
  {
    if(x==u[i].accno)
    {
      if(strcmp(u[i].pass,e)==0)
      {
	cout<<endl<<"---------------------------------------------------";
	cout<<endl<<'\t'<<"Account no: "<<u[i].accno<<endl;
	cout<<'\t'<<"Name of account holder: ";
	puts(u[i].name);
	cout<<'\t'<<"Amount in account: "<<"AED."<<u[i].amt<<endl;
	cout<<'\t'<<"Email address: ";
	puts(u[i].email);
	cout<<"---------------------------------------------------";
	flag=1;
	l=i;
      }
      else
      {
	fl=1;
	cout<<endl<<"Wrong Password"<<endl;
	break;
      }
    }
  }
  if(flag==0&&fl==0)
    cout<<endl<<"Account number doesnt exist"<<endl;
  else
  {
   if(fl!=1)
   {
    float de;
    cout<<endl<<"Enter amount to be deposited: ";
    cin>>de;
    u[l].amt+=de;
    cout<<"Money deposited"<<endl<<endl;
    cout<<"Current balance="<<" AED."<<u[l].amt;
   }
  }
}

void withdraw(acchold u[20],int n)
{
  int x,fl=0,flag=0,l;
  cout<<endl<<"Enter account no. and password"<<endl;
  cout<<"Enter account no:";
  cin>>x;
  char e[5];
  cout<<"Enter password:";
  for(int b=0;b<5;b++)
  {
     e[b]=getch();
     cout<<"*";
  }
  e[b]='\0';
  for(int i=0;i<n;i++)
  {
    if(x==u[i].accno)
    {
      if(strcmp(u[i].pass,e)==0)
      {
	cout<<endl<<"---------------------------------------------------";
	cout<<endl<<'\t'<<"Account no: "<<u[i].accno<<endl;
	cout<<'\t'<<"Name of account holder: ";
	puts(u[i].name);
	cout<<'\t'<<"Amount in account: "<<"AED."<<u[i].amt<<endl;
	cout<<'\t'<<"Email address: ";
	puts(u[i].email);
	cout<<"---------------------------------------------------";
	flag=1;
	l=i;
      }
      else
      {
	fl=1;
	cout<<endl<<"Wrong Password"<<endl;
	break;
      }
    }
  }
  if(flag==0&&fl==0)
    cout<<endl<<"Account number doesnt exist"<<endl;
  else
  {
   if(fl!=1)
   {
    float wd;
    cout<<endl<<"Enter amount to be withdrawn: ";
    cin>>wd;
    if(u[l].amt>=wd)
    {
      u[l].amt-=wd;
      cout<<"Money withdrawn"<<endl<<endl;
      cout<<"Current balance="<<" AED."<<u[l].amt;
    }
    else
     cout<<endl<<"NOT ENOUGH BALANCE"<<endl;
   }
  }
}

void modify(acchold u[20],int n)
{
  int x,l,fl=0,flag=0;
  cout<<"Enter account no. and password"<<endl;
  cout<<"Enter account no:";
  cin>>x;
  char e[5];
  cout<<"Enter password:";
  for(int b=0;b<5;b++)
  {
     e[b]=getch();
     cout<<"*";
  }
  e[b]='\0';
  for(int i=0;i<n;i++)
  {
    if(x==u[i].accno)
    {
      if(strcmp(u[i].pass,e)==0)
      {
	cout<<endl<<"---------------------------------------------------";
	cout<<endl<<'\t'<<"Account no: "<<u[i].accno<<endl;
	cout<<'\t'<<"Name of account holder: ";
	puts(u[i].name);
	cout<<'\t'<<"Amount in account: "<<"AED."<<u[i].amt<<endl;
	cout<<'\t'<<"Email address: ";
	puts(u[i].email);
	cout<<"---------------------------------------------------";
	flag=1;
	l=i;
      }
      else
      {
	fl=1;
	cout<<endl<<"Wrong Password"<<endl;
	break;
      }
    }
  }
  if(flag==0&&fl==0)
    cout<<endl<<"Account number doesnt exist"<<endl;
  else
  {
   int m;
   cout<<endl<<"What do you want to modify?"<<endl;
   cout<<"1. Name"<<endl;
   cout<<"2. Password"<<endl;
   cout<<"3. Email address"<<endl;
   cout<<"Enter your option:";
   cin>>m;
   switch(m)
   {
     case 1: cout<<"Enter Name:";
	     gets(u[l].name);
	     cout<<'\t'<<"UPDATED";
	     break;
     case 2: cout<<"Enter new Password:";
	     gets(u[l].pass);
	     cout<<'\t'<<"UPDATED";
	     break;
     case 3: cout<<"Enter Email Address:";
	     gets(u[l].email);
	     cout<<'\t'<<"UPDATED";
	     break;
    default: cout<<"Wrong option"<<endl;
   }
  }
}

void close(acchold u[20],int& n)
{
     int l,fl=0,x,flag=0;
     cout<<"Enter account no. and password to be deleted"<<endl;
     cout<<"Enter account no:";
     cin>>x;
     char e[5];
     cout<<"Enter password:";
     for(int b=0;b<5;b++)
     {
	     e[b]=getch();
	     cout<<"*";
     }
     e[b]='\0';
  for(int i=0;i<n;i++)
  {
    if(x==u[i].accno)
    {
      if(strcmp(u[i].pass,e)==0)
      {
	cout<<endl<<"---------------------------------------------------";
	cout<<endl<<'\t'<<"Account no: "<<u[i].accno<<endl;
	cout<<'\t'<<"Name of account holder: ";
	puts(u[i].name);
	cout<<'\t'<<"Amount in account: "<<"AED."<<u[i].amt<<endl;
	cout<<'\t'<<"Email address: ";
	puts(u[i].email);
	cout<<"---------------------------------------------------";
	flag=1;
	l=i;
      }
      else
      {
	fl=1;
	cout<<endl<<"Wrong Password"<<endl;
	break;
      }
    }
  }
  if(flag==0&&fl==0)
    cout<<endl<<"Account number doesnt exist"<<endl;
   else
    {
     if(u[l].amt==0)
      {
       for(i=l;i<n;i++)
	  {
	   u[i]=u[i+1];
	  }
       n--;
       cout<<endl<<"ACCOUNT CLOSED"<<endl;
      }
     else
       cout<<endl<<'\t'<<"Please withdraw all the money from bank account before closing"<<endl<<'\t'<<"For further details contact JAMBo bank at 04-2345678";
     }
}

void loan(acchold u[20],int n)
{
    int m,flag=0,l,x;
    cout<<"Enter account no. and password"<<endl;
    cout<<"Enter account no:";
    cin>>x;
    char e[5];
    cout<<"Enter password:";
    for(int b=0;b<5;b++)
    {
     e[b]=getch();
     cout<<"*";
    }
    e[b]='\0';
    for(int i=0;i<n;i++)
    {
      if(u[i].accno==x)
      {
	if(strcmp(u[i].pass,e)==0)
	{
	 cout<<endl<<"---------------------------------------------"<<endl;
	 cout<<'\t'<<"Account no: "<<u[i].accno<<endl;
	 cout<<'\t'<<"Name of account holder: ";
	 puts(u[i].name);
	 cout<<'\t'<<"Amount in account: "<<"AED."<<u[i].amt<<endl;
	 cout<<'\t'<<"Email address: ";
	 puts(u[i].email);
	 cout<<"---------------------------------------------"<<endl;
	 flag=1;
	 l=i;
	 break;
	}
	else
	{
	  cout<<"Wrong Password"<<endl;
	  break;
	}
      }
    }
  if(flag==0)
    {
      cout<<endl<<'\t'<<"Account number doesn't exist";
    }
  else
  {
      cout<<'\t'<<"Loans that JAMBo Bank offers:"<<endl<<endl;
      cout<<"1.Personal Loans"<<endl<<"2.Student Loans"<<endl<<"3.Home loans"<<endl<<"4.Business loan"<<endl<<"5.Car Loans"<<endl;
      cout<<"Enter loan choice=";
      cin>>m;
      switch(m)
      {
	    case 1: personal(u,l);
			 break;
	    case 2: stud(u,l);
			 break;
	    case 3: home(u,l);
			 break;
	    case 4: business(u,l);
			 break;
	    case 5: car(u,l);
			 break;
       }
  }
}
void personal(acchold u[20],int l)
{
     int d,m,y;
     if(u[l].amt>=5000)
     {
	cout<<"Enter Date for Consultation of Loan=";
	cin>>d>>m>>y;
      h:if(m==1||m==3||m==5||m==8||m==10||m==12)
	   {
	     if(d>=1&&d<=31)
	    cout<<"Consultation Booked"<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
	     else
	    {
	     cout<<"INVALID DAY";
	     cout<<"Enter valid date=";
	     cin>>d>>m>>y;
	     goto h;
	    }
	   }
	else
	   {
	      if(m==4||m==6||m==9||m==11)
	       {
		if(d>=1&&d<=30)
		  cout<<"Consultation Booked"<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		else
		 {cout<<endl<<'\t'<<"INVALID DATE"<<endl;
		  cout<<"Enter valid date=";
		  cin>>d>>m>>y;
		  goto h;
		 }
	       }
	      else
	       {
		if(m==2)
		 {
		  if(y%4==0 && y%100!=0||y%400==0)
		   {
		    if(d>=1&& d<=29)
		      cout<<"Consultation Booked"<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		    else
		      {
			cout<<endl<<'\t'<<"INVALID DATE"<<endl;
			cout<<"Enter valid date=";
			cin>>d>>m>>y;
			goto h;
		      }
		   }

		  else
		   {
		    if(d>=1&& d<=28)
		      cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		    else
		       { cout<<endl<<'\t'<<"INVALID DATE"<<endl;
			 cout<<"Enter valid date=";
			 cin>>d>>m>>y;
			 goto h;
		       }
		   }
		 }
		else
		  { cout<<endl<<'\t'<<"INVALID MONTH"<<endl;
		    cout<<"Enter valid date=";
		    cin>>d>>m>>y;
		    goto h;
		  }
	       }
	   }
     }
     else
       cout<<'\t'<<"Not Eligible for Personal Loan"<<endl<<'\t'<<"Minimum balance required for loan is AED.5000"<<endl;
}

void home(acchold u[20],int l)
{
     int d,m,y;
     if(u[l].amt>=7000)
     {
	cout<<"Enter Date for Consultation of Loan=";
	cin>>d>>m>>y;
      h:if(m==1||m==3||m==5||m==8||m==10||m==12)
	   {
	     if(d>=1&&d<=31)
	    cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
	     else
	    {cout<<endl<<'\t'<<"INVALID DATE"<<endl;
	     cout<<"Enter valid date=";
	     cin>>d>>m>>y;
	     goto h;
	    }
	   }
	else
	   {
	      if(m==4||m==6||m==9||m==11)
		if(d>=1&&d<=30)
		  cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		else
		   {cout<<endl<<'\t'<<"INVALID DATE"<<endl;
		    cout<<"Enter valid date=";
		    cin>>d>>m>>y;
		    goto h;
		   }
	      else
		if(m==2)
		  if(y%4==0 && y%100!=0||y%400==0)
		    if(d>=1&& d<=29)
		      cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		    else
		       { cout<<endl<<'\t'<<"INVALID DATE"<<endl;
			 cout<<"Enter valid date=";
			 cin>>d>>m>>y;
			 goto h;
			}
		  else
		    if(d>=1&& d<=28)
		      cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		    else
		      {cout<<endl<<'\t'<<"INVALID DATE"<<endl;
		       cout<<"Enter valid date=";
		       cin>>d>>m>>y;
		       goto h;
		      }
		else
		  {
		   cout<<endl<<'\t'<<"INVALID MONTH"<<endl;
		   cout<<"Enter valid date=";
		   cin>>d>>m>>y;
		   goto h;
		  }
	   }
     }
     else
       cout<<'\t'<<"Not Eligible for Home Loan"<<endl<<'\t'<<"Minimum balance required for loan is AED.7000"<<endl;
}


void stud(acchold u[20],int l)
{
     int d,m,y;
     if(u[l].amt>=2000)
     {
	cout<<"Enter Date for Consultation of Loan=";
	cin>>d>>m>>y;
      h:if(m==1||m==3||m==5||m==8||m==10||m==12)
	   {
	     if(d>=1&&d<=31)
	    cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
	     else
	    {cout<<endl<<'\t'<<"INVALID DATE"<<endl;
	     cout<<"Enter valid date=";
	     cin>>d>>m>>y;
	     goto h;
	    }
	   }
	else
	   {
	      if(m==4||m==6||m==9||m==11)
		if(d>=1&&d<=30)
		  cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		else
		   {cout<<endl<<'\t'<<"INVALID DATE"<<endl;
		    cout<<"Enter valid date=";
		    cin>>d>>m>>y;
		    goto h;
		   }
	      else
		if(m==2)
		  if(y%4==0 && y%100!=0||y%400==0)
		    if(d>=1&& d<=29)
		      cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		    else
		       { cout<<endl<<'\t'<<"INVALID DATE"<<endl;
			 cout<<"Enter valid date=";
			 cin>>d>>m>>y;
			 goto h;
			}
		  else
		    if(d>=1&& d<=28)
		      cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		    else
		      {cout<<endl<<'\t'<<"INVALID DATE"<<endl;
		       cout<<"Enter valid date=";
		       cin>>d>>m>>y;
		       goto h;
		      }
		else
		  {
		   cout<<endl<<'\t'<<"INVALID MONTH"<<endl;
		   cout<<"Enter valid date=";
		   cin>>d>>m>>y;
		   goto h;
		  }
	   }
     }
     else
       cout<<'\t'<<"Not Eligible for Student Loan"<<endl<<'\t'<<"Minimum balance required for loan is AED.2000"<<endl;
}

void business(acchold u[20],int l)
{
     int d,m,y;
     if(u[l].amt>=10000)
     {
	cout<<"Enter Date for Consultation of Loan=";
	cin>>d>>m>>y;
      h:if(m==1||m==3||m==5||m==8||m==10||m==12)
	   {
	     if(d>=1&&d<=31)
	    cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
	     else
	    {cout<<endl<<'\t'<<"INVALID DATE"<<endl;
	     cout<<"Enter valid date=";
	     cin>>d>>m>>y;
	     goto h;
	    }
	   }
	else
	   {
	      if(m==4||m==6||m==9||m==11)
		if(d>=1&&d<=30)
		  cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		else
		   {cout<<endl<<'\t'<<"INVALID DATE"<<endl;
		    cout<<"Enter valid date=";
		    cin>>d>>m>>y;
		    goto h;
		   }
	      else
		if(m==2)
		  if(y%4==0 && y%100!=0||y%400==0)
		    if(d>=1&& d<=29)
		      cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		    else
		       { cout<<endl<<'\t'<<"INVALID DATE"<<endl;
			 cout<<"Enter valid date=";
			 cin>>d>>m>>y;
			 goto h;
			}
		  else
		    if(d>=1&& d<=28)
		      cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		    else
		      {cout<<endl<<'\t'<<"INVALID DATE"<<endl;
		       cout<<"Enter valid date=";
		       cin>>d>>m>>y;
		       goto h;
		      }
		else
		  {
		   cout<<endl<<'\t'<<"INVALID MONTH"<<endl;
		   cout<<"Enter valid date=";
		   cin>>d>>m>>y;
		   goto h;
		  }
	   }
     }
     else
       cout<<'\t'<<"Not Eligible for Business Loan"<<endl<<'\t'<<"Minimum balance required for loan is AED.10000"<<endl;
}



void car(acchold u[20],int l)
{
     int d,m,y;
     if(u[l].amt>=5000)
     {
	cout<<"Enter Date for Consultation of Loan=";
	cin>>d>>m>>y;
      h:if(m==1||m==3||m==5||m==8||m==10||m==12)
	   {
	     if(d>=1&&d<=31)
	    cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
	     else
	    {cout<<endl<<'\t'<<"INVALID DATE"<<endl;
	     cout<<"Enter valid date=";
	     cin>>d>>m>>y;
	     goto h;
	    }
	   }
	else
	   {
	      if(m==4||m==6||m==9||m==11)
		if(d>=1&&d<=30)
		  cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		else
		   {cout<<endl<<'\t'<<"INVALID DATE"<<endl;
		    cout<<"Enter valid date=";
		    cin>>d>>m>>y;
		    goto h;
		   }
	      else
		if(m==2)
		  if(y%4==0 && y%100!=0||y%400==0)
		    if(d>=1&& d<=29)
		      cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		    else
		       { cout<<endl<<'\t'<<"INVALID DATE"<<endl;
			 cout<<"Enter valid date=";
			 cin>>d>>m>>y;
			 goto h;
			}
		  else
		    if(d>=1&& d<=28)
		      cout<<"Consultation Booked"<<endl<<endl<<"Kindly check your email for further details on documents to be bought"<<endl<<endl;
		    else
		      {cout<<endl<<'\t'<<"INVALID DATE"<<endl;
		       cout<<"Enter valid date=";
		       cin>>d>>m>>y;
		       goto h;
		      }
		else
		  {
		   cout<<endl<<'\t'<<"INVALID MONTH"<<endl;
		   cout<<"Enter valid date=";
		   cin>>d>>m>>y;
		  }
	   }
     }
     else
       cout<<'\t'<<"Not Eligible for Car Loan"<<endl<<'\t'<<"Minimum balance required for loan is AED.5000"<<endl;
}

void all(acchold u[20],int n)
{
  cout<<'\t'<<"Accno."<<"  ";
  cout<<'\t'<<"Name"<<"     ";
  cout<<'\t'<<"Amount"<<"  ";
  cout<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<'\t'<<u[i].accno<<"          ";
    cout<<'\t'<<u[i].name<<"  ";
    cout<<'\t'<<u[i].amt<<"  ";
    cout<<endl;
  }
}
