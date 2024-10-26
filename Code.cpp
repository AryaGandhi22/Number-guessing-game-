#include <iostream>
using namespace std;
int main(){
 string playername;
 cout << "Welcome to Guess The Number game"<< endl;
 cout << "You have to guess a number between 1 and 100.You'll have limited 
choices based on the level you choose. Good Luck!!!"<< endl;
 cout<<"Enter name of player:";
 cin>>playername;
while (true) {
 cout << "\nEnter the difficulty level:"<<endl;
 cout << "1 for easy!\n";
 cout << "2 for medium!\n";
 cout << "3 for difficult!\n";
 cout << "0 for ending the game!\n"<< endl;
 int difficultychoice;
 cout << "Enter the number:";
 cin >> difficultychoice;
 srand(time(0));
 int secretNumber = 1 + (rand() % 100);
 int choice;
 if (difficultychoice == 1) {
 cout << "\nYou have 7 choices for finding the secret number";
 int choicesLeft = 7;
 for (int i = 1; i <= 7; i++) {
cout << "\nEnter the number:";
 cin >> choice;
 if (choice == secretNumber) {
 cout << "Well played! You won!!"<<choice<< "is the secret number" << endl;
 cout << " Thanks for playing...." << endl;
 cout << "Play the game again with us!!\n"<< endl;
 break;
 }
 else {
 cout << "Nope," << choice<< " is not the right number\n";
 if (choice > secretNumber) {
 cout << "Your guess is too high"
 << endl;
 }
 else {
 cout << "your guess is too low"<< endl;
 }
 choicesLeft--;
 cout<<choicesLeft<< "choices left."<<endl;
 if (choicesLeft == 0) {
 cout << "You couldn't find the secret number, it was"
 << secretNumber<< " You lose!!\n";
 cout << "Play the game again to win!!!\n";
 }
 }
 }
 }
else if (difficultychoice == 2) {
 cout << "\nYou have 5 choices for finding the secret number between 1 and 
100.";
 int choicesLeft = 5;
 for (int i = 1; i <= 5; i++) {
 cout << "\nEnter the number:";
 cin >>choice;
 if (choice == secretNumber) {
 cout << "Well played! You won,"<<choice << "is the secret 
number"<< endl;
 cout << "Thanks for playing...." << endl;
 cout << "Play the game again with us!!\n\n" << endl;
 break;
 }
 else {
 cout << "Nope," <<choice << "is not the right number\n";
 if (choice > secretNumber) {
 cout << "Your guess is too high" << endl;
 }
 else {
 cout << "Your guess is too low"<< endl;
 }
 choicesLeft--;
 cout<<choicesLeft<< "choices left."<<endl;
 if (choicesLeft == 0) {
 cout << "You couldn't find the secret number, it was" <<
secretNumber << ", You lose!!\n";
 cout << "Play the game again to win!!!\n\n"
;
 }
 }
 }
 }
 else if (difficultychoice == 3) {
 cout << "\nYou have 3 choices for finding the secret number between 1 and 
100.";
 int choicesLeft = 3;
 for (int i = 1; i <= 3; i++) {
 cout << "\nEnter the number:";
 cin >> choice;
 if (choice == secretNumber) {
 cout << "Well played! You won,"<< choice<< "is the secret number" << endl;
 cout << " Thanks for playing...."<< endl;
 cout << "Play the game again with u!!\n"<< endl;
 break;
 }
 else {
 cout << "Nope,"<<choice << "is not the right number\n";
 if (choice > secretNumber) {
 cout << "Your guess is too high"<< endl;
 }
 else {
 cout << "Your guess is too low"<< endl;
 }
 choicesLeft--;
cout<<choicesLeft<<"choices left."<<endl;
 if (choicesLeft == 0) {
 cout << "You couldn't find the secret number, it was"
 << secretNumber << "You lose!!\n";
 cout << "Play the game again to win!!!\n";
 }
 }
 }
 }
 else if (difficultychoice == 0) {
 cout<< "thank you for playing this game";
 exit(0);
 }
 else {
 cout << "Wrong choice, Enter valid choice to play the game! (0,1,2,3)"<< 
endl;
 }
 }
 return 0;
}
