#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
 char c;
 int state=0,flag;
 while(1)
 {
  switch(state)
  {
    case 0: c=getchar();
	    if(c=='<')
		state=1;
	    else if(c=='=')
		state=5;
	    else if(c=='>')
		state=6;
	    else
		cout<<"Reject"<<endl;
            break;
            
    case 1: c=getchar();
	    if(c=='=')
		state=2;
	    else if(c=='>')
		state=3;
	    else
		state=4;
            break;

    case 2: cout<<"Return(relop,LE)\n";
	    cout<<"State# "<<state<<endl;
            state=0;
		break;
    case 3: cout<<"Return(relop,NE)\n";
	    cout<<"State# "<<state<<endl;
            state=0;
		break;
    case 4: cout<<"Return(relop,LT)\n";
	    cout<<"State# "<<state<<endl;
            state=0;
		break;
    case 5: cout<<"Return(relop,QE)\n";
	    cout<<"State# "<<state<<endl;
            state=0;
		break;
    case 6: c=getchar();
	    if(c=='=')
		state=7;
	    else
		state=8;
    case 7: cout<<"Return(relop,GE)\n";
	    cout<<"State# "<<state<<endl;
            state=0;
		break;
    case 8: cout<<"Return(relop,GT)\n";
	    cout<<"State# "<<state<<endl;
            state=0;
		break;
    defualt:

  }
   if(state==0)
   	break;

 }
}