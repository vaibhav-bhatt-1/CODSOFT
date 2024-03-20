//Making an number guessing game using c++
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	char play;
	while(play!='n'){
	    int number=rand()%100;
	    int chance=5;
	    int flag=0;
	    cout<<"welcome to the guess game!"<<"\n";
	    cout<<"guess the number between 1-100:"<<"\n";
	    while(chance!=0){
		    int guess;
		    cout<<"Enter your guess:";
		    cin>>guess;
		    if(number==guess){
			    cout<<"Congratulations! you made it"<<"\n";
			    flag=1;
			    break;
		    }
		    else if(number>guess){
			    cout<<"Your guess is smaller than the number."<<"\n";
			    chance--;
			    cout<<chance<<" "<<"chances are remaining now!"<<"\n";
		    }
		    else{
			    cout<<"Your guess is greater than the number."<<"\n";
			    chance--;
			    cout<<chance<<" "<<"chances are remaining now!"<<"\n";
		    }
	    }
	    if(flag==0){
		    cout<<"Your chances are over!"<<"\n";
		    cout<<"Better Luck next time!"<<"\n";
	    }
	    cout<<"want to continue...(y/n)";
	    cin>>play;
    }
    cout<<"Thank you for playing!";
}
