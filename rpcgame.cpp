#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
   cout<<"Welcome to rock,paper and scissor game"<<endl;
   cout<<"note:-while playing with computer you need to refer \n rock='1'\n paper='2' \n scissor='3' \n note:- if give other numbers instead of given numbers then your code gonna terminated"<<endl;
  	srand(time(NULL));
   int comp;
   int ref,flag=1;
   
  while(flag!=0)
  {
  	cout<<"choose any number"<<endl;
  	cin>>ref;
  
  	comp= rand()%3+1;
  	cout<<"computer chooses "<<comp<<endl;
  if (ref>3||ref<1)
  {
  	cout<<"thats incorrect so code terminated";
  	flag=0;
  	break;
  }
 else  if(comp==ref)
 {
 	cout<<"its a shoot try again"<<endl;
 }
 else if(comp==1 && ref==2)
 {
 	cout<<"computer choose rock,you choose paper \n you win"<<endl;
 }else if(comp==2 && ref==1)
 {
 	cout<<"computer choose paper,you choose rock \n computer win"<<endl;
 } 
 else if(comp==3&&ref==1)
 {
 	cout<<"computer choose scissor,you choose rock \n you win"<<endl;
 }
 else if(comp==2&&ref==3)
 {cout<<"computer choose paper, you choose scissor \n you win"<<endl;
 
 }
 else if(comp==3&&ref==2)
 {cout<<"computer choose scissor,you choose paper \n computer win"<<endl;
 } 
 else if(comp==1&&ref==3)
 {cout<<"computer choose rock,you choose scissor \n computer win"<<endl;
 }
 flag++;
}}
