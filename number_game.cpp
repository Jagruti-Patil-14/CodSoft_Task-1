#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int sys_number,user_guess;
    srand(time(0));
    sys_number=rand()%100+1;
    cout<<"WELCOME TO NUMBER GUESSING GAME\n";
    cout<<"It guesses the number between 1 to 100\n";
    while (user_guess != sys_number)
    {
        cout<<"Enter the guess:\n";
        cin>>user_guess;
        if(user_guess>sys_number)
        {
            cout<<"Guess is too high!...\n";
        }
        else if(user_guess<sys_number)
        {
            cout<<"Guess is too low!...\n";
        }
        else
        {
            cout<<"Congratulations!! correct guess!...\n";
        }
    }
    cout<<"Thanks for playing the game!";
    return 0;
}