#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));

    int secretnumber=rand()%100+1;
    int guess;

    cout<<"welcome to the number guessing game!";
    while(true){
        cout<<"Enter your guess:";
        cin>>guess;

        if(guess>secretnumber){
            cout<<"too high!!try again"<<end1;

        }else if(guess<secretnumber){
            cout<< "too low!try again"<< end1;

        }else{
            cout<<"congratulations!you guesses the correct number!"<< end1;
            break;
        }
    }
    return 0;
}