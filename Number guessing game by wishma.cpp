#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	string name;
	char input;
	int guess;
	int score;
	cout<<endl;
	cout<<"\t\t\t***************************************************************"<<endl;
	cout<<"\t\t\t                    Number Guessing Game                     "<<endl;
    cout<<"\t\t\t***************************************************************"<<endl;
    cout<<endl;
	cout<<"Please Enter your name :  " ;
	getline(cin,name);
	cout<<endl;
	
	do{
		srand(0);
		int variable=rand()%10+1;
		cout<<"Enter any number in between 1 to 10 :" ;
		cin>>guess;
		cout<<endl;
		if(guess>variable)
		{
			cout<<"Guess lower!"<<endl;
		}
		else if(guess<variable)
		{
			cout<<"Guess higher!"<<endl;
		}
		else if(guess==variable){
		cout<<"Congratulations! You won"<<endl;
		score++;
       	}
       	else{
       		cout<<"Sorry,your guess is incorrect Try again ";
       	}
		cout<<"Would you like to try again y/n  :  ";
		cin>>input;
		cout<<endl;

	}while(input!='N');
	cout<<"Your score is : "<<score<<endl;
	cout<<"Game Over"<<endl;
return 0;
}

