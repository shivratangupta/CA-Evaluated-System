#include<iostream>
#include<string.h>
#include<conio.h>
#include <stdlib.h>
using namespace std;
class ca
{
	private:
		char a[8];
		
	public:
		void subject()
		{
			cout<<"Choose any one of these courses"<<endl;
			cout <<"pev-103"<<endl<<"che-122"<<endl<<"mec-108"<<endl<<"bty-100"<<endl;
			cout <<"cse-202"<<endl<<"mth-108"<<endl<<"phy-108"<<endl<<"che-124"<<endl<<"mec-103"<<endl;
			cout<<"Enter the course:";
			cin>>a;
			if(strcmp("phy-108",a)==0||strcmp("che-124",a)==0||strcmp("mth-108",a)==0||strcmp("bty-100",a)==0)
			{
				int b,c,d,e,f;
				cout<<"Enter ca1 marks:";
				cin>>b;
				cout<<"Enter ca2 marks:";
				cin>>c;
				cout<<"Enter ca3 marks:";
				cin>>d;
				int max_1,max_2,other;									// choosing best two out of three
				if(b>=c)
				{
				other=c;
				max_1=b;
				}
				else
				{
				other=b;
				max_1=c;
				}
				if(other>=d)
				max_2=other;
				else
				max_2=d;
				e= max_1 + max_2;
				e=100*e/60;												// calculating ca marks out of hundred 
				cout<<endl<<"Your obtained marks is:"<<e<<endl;
				f=20*e/100;												// calculating ca marks out of twenty
				cout<<"Your weightage marks is:"<<f<<endl;
			}
			else if(strcmp("pev-103",a)==0)
			{
				int b,c,d,e,f,g;
				cout<<"Enter ca1 marks:";
				cin>>b;
				cout<<"Enter ca2 marks:";
				cin>>c;
				cout<<"Enter ca3 marks:";
				cin>>d;
				cout<<"Enter ca4 marks:";
				cin>>e;
				f=b+c+d+e;
				f=100*f/120;											// calculating ca marks out of hundred
				cout<<"Your obtained marks is:"<<f<<endl;
				g=30*f/100;												// calculating ca marks out of thirty
				cout<<"Your weightage marks is:"<<g<<endl;
			}
			else if(strcmp("mec-103",a)==0)
			{
				int b,c,d[10],i,sum=0,e,f,g,h;
				cout<<"Enter ca1 marks:";
				cin>>b;
				cout<<"Enter ca2 marks:";
				cin>>c;
				int max;												// choosing best one out of two
				if(b>=c)												
				max=b;
				else
				max=c;
				cout<<"Enter ten class participation marks:";  			// because 10 class participation marks is compulsary ca
				for(i=0;i<10;i++)
				{
					cin>>d[i];
				}
				for(i=0;i<10;i++)
				{
					sum=sum+d[i];										// calculating sum of the class participation marks
				}
				e=100*max/30;											// calculating ca marks out of hundred
				f=sum+e;												// adding ca marks and class participation marks
				f=f/2;
				cout<<"Your obtained marks is:"<<f<<endl;
				sum=sum/10;												// calculating class participation marks out of ten
				g=10*e/100;												// calculating ca marks out of ten
				h=sum+g;												// adding ca marks and class participation marks
				cout<<"Your weightage marks is:"<<h<<endl;
			}
			else if(strcmp("che-122",a)==0||strcmp("mec-108",a)==0)
			{
				int b,c,d,e;
				cout<<"Enter wtp1 marks:";
				cin>>b;
				cout<<"Enter wtp2 marks:";
				cin>>c;
				d=b+c;
				d=100*d/60;												// calculating ca marks out of hundred
				cout<<"Your obtained marks is:"<<d<<endl;
				e=20*d/100;												// calculating ca marks out of twenty
				cout<<"Your weightage marks is:"<<e<<endl;
			}
			else if(strcmp("cse-202",a)==0)
			{
				int b,c,d,e,f,g,h,i;
				cout<<"Enter ca1 marks:";
				cin>>b;
				cout<<"Enter ca2 marks:";
				cin>>c;
				cout<<"Enter ca3 marks:";
				cin>>d;
				cout<<"Enter ca4 marks:";
				cin>>e;
				cout<<"Enter mini project marks:";						// this is a coumpulsary ca
				cin>>f;
				int max_1,max_2,max_3,other;							// choosing best three out of four
				if(b>=c&&b>=d&&b>=e)
				{
					max_1=b;
				if(c>=d)
				{
				other=d;
				max_2=c;
				}
				else
				{
				other=c;
				max_2=d;
				}
				if(other>=e)
				max_3=other;
				else
				max_3=e;
				}
				if(c>=b&&c>=d&&c>=e)
				{
					max_1=c;
				if(b>=d)
				{
				other=d;
				max_2=b;
				}
				else
				{
				other=b;
				max_2=d;
				}
				if(other>=e)
				max_3=other;
				else
				max_3=e;
				}
				if(d>=b&&d>=c&&d>=e)
				{
					max_1=d;
				if(b>=c)
				{
				other=c;
				max_2=b;
				}
				else
				{
				other=b;
				max_2=c;
				}
				if(other>=e)
				max_3=other;
				else
				max_3=e;
				}
				if(e>=b&&e>=c&&e>=d)
				{
					max_1=e;
				if(b>=c)
				{
				other=c;
				max_2=b;
				}
				else
				{
				other=b;
				max_2=c;
				}
				if(other>=d)
				max_3=other;
				else
				max_3=d;
				}
				g=max_1+max_2+max_3+f;										// adding best three ca marks and mini project marks
				g=100*g/120;												// calculating marks out of hundred
				cout<<"Your obtained marks is:"<<g<<endl;
				h=max_1+max_2+max_3;										// adding best three ca marks
				h=15*h/90;													// calculating ca marks out of fifteen
				f=5*f/30;													// calculating mini project marks out of five
				i=f+h;														// adding weightage ca marks and mini project marks
				cout<<"Your weightage marks is:"<<i<<endl;
			}
			else
			cout<<"Course is not found"<<endl;
		}
};
int main()
{
	system("color 6f");
	ca s1;																	// creating a class object
	char a;				
	while(2>1)
	{
		cout<<endl<<"Enter the choice"<<endl<<"(1)CA calculator"<<endl<<"(2)exit"<<endl;	
		cin>>a;
		if(a=='1')														
		{
			s1.subject();
			cout<<"Press enter to continue"<<endl;
			getch();
		}
		else
		exit(0);
	}
}
