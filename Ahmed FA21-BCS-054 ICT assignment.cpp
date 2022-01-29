#include <iostream>
using namespace std;
int main() 
{ 
    int choice;
    cout<<"ICT-Assignment by Ahmed Shakil(FA21-BCS-054) "<<endl;
    cout<<"Please select the program you want to run "<<endl;
    cout<<"1. Hello World "<<endl;
    cout<<"2. Name and Registration Number "<<endl;
    cout<<"3. Oldest and Youngest between 3 people "<<endl;
    cout<<"4. Calculator (+,-,/,x) "<<endl;
    cout<<"5. Even or Odd Number "<<endl;
    cout<<"6. Discount 15% "<<endl;
    cout<<"7. Bonus 10% years>5 "<<endl;
    cout<<"8. Grade Percentage "<<endl;
    cout<<"9. Teenager "<<endl;
    cout<<"10. Vowels "<<endl;
    cout<<"11. Exit "<<endl;
    cin>>choice;
    switch(choice)
    {case 1:
    cout<<"Hello World";
    break;
    case 2:
    {string name,reg;
    cout<<"Enter your name ";
    cin>>name;
    cout<<"Enter your registration number ";
    cin>>reg;
    cout<<"Your name is "<<name<<"  and Your Registration No is "<<reg;
    }break;
    case 3:
    {
         int a1,a2,a3,oldest,youngest;
    cout<<"Please enter three different ages ";
    cin>>a1>>a2>>a3;
    if (a1>a2 && a1>a3)
    oldest = a1;
    else if (a2>a1 && a2>a3)
    oldest = a2;
    else
    oldest = a3;
    if (a1<a2 && a1<a3)
    youngest = a1;
    else if (a2<a1 && a2<a3)
    youngest = a2;
    else 
    youngest = a3;
    cout<<"The oldest is "<<oldest<<endl;
    cout<<"The youngest is "<<youngest<<endl;
    break;
    }
    case 4:
    {
        int a,b;
        char op;
        cout<<"Enter the first number "<<endl;
        cin>>a;
        cout<<"Enter the operation you want to perform from the following "<<endl;
        cout<<" + - x /"<<endl;
        cin>>op;
        cout<<"Enter the second number "<<endl;
        cin>>b;
        if (op=='+')
        {int sum;
            sum = a + b;
            cout<<"The sum is "<<sum;
        }
        else if(op=='-')
        {int sub;
            sub = a - b;
            cout<<"The difference is "<<sub;
        }
        else if (op=='x' || op=='X')
        {int prod;
            prod = a*b;
            cout<<"The product is "<<prod;
        }
        else if (op=='/')
        {float result;
            result=a/b;
            cout<<"The result is "<<result;
        }
        else 
        cout<<"Invalid operator";
    
    }
    break;
    case 5:
    {int num;
        cout<<"Please enter a number ";
        cin>>num;
        if (num%2==0)
        cout<<"This is an even number ";
        else
        cout<<"This is an odd number ";
    }
    break;
    case 6:
    	{int quantity;
    	float total;
    	cout<<"Enter the number of items you have purchased ";
    	cin>>quantity;
    	total = quantity * 100;
    	if (total > 1000)
    	{total = total * 0.85;
		cout<<"The total bill with 15% discount is "<<total;}
		else
		cout<<"The total bill is "<<total;
		}
	break;
	case 7:
		{int years;
		float bonus,salary;
		cout<<"Enter your current salary ";
		cin>>salary;
		cout<<"Enter the amout of years you have been working ";
		cin>>years;
		if (years>5)
		{bonus = salary * 0.10;
		salary = bonus + salary;
		cout<<"Your new salary is "<<salary;
		}
		else
		cout<<"You are not eligible for a bonus ";
		}
	break;
	case 8:
		{int marks,total;
		char grade;
		total=100;
		cout<<"Enter your marks ";
		cin>>marks;
		if(marks<25 && marks>=0)
		{grade = 'F';
		cout<<"Your grade is "<<grade;
		}
		else if (marks>=25 && marks<45)
		{grade = 'E';
		cout<<"Your grade is "<<grade;
		}
		else if (marks>=45 && marks<50)
		{grade = 'D';
		cout<<"Your grade is "<<grade;
		}
		else if (marks>=50 && marks<60)
		{grade = 'C';
		cout<<"Your grade is "<<grade;
		}
		else if (marks>=60 && marks<80)
		{grade = 'B';
		cout<<"Your grade is "<<grade;
		}
		else if (marks>=80 && marks<=100)
		{ grade = 'A';
		cout<<"Your grade is "<<grade;
		}
		else
		cout<<"Invalid marks";
		}
	break;
	case 9:
		{int age;
		cout<<"Please enter your age ";
		cin>>age;
		if (age>=13 && age<=19)
		cout<<"You are a teenager ";
		else
		cout<<"You are not a teenager ";
		}
    break;
    case 10:
    	{char alphabet;
    	cout<<"Please enter an Alphabet ";
    	cin>>alphabet;
    	if (alphabet>=-1000 && alphabet<=1000)
    	cout<<"Not an alphabet "<<endl;
    	else if (alphabet=='a'|| alphabet == 'A'|| alphabet=='e'|| alphabet== 'E' || alphabet== 'i' || alphabet== 'I'|| alphabet== 'o'|| alphabet == 'O' || alphabet == 'u' || alphabet == 'U')
    	cout<<"This is a Vowel";
    	else
    	cout<<"This is a consonant";
		}
  break;
  case 11:
  	{ exit(0);
	  }

}

    return 0;
}
