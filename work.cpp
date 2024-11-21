#include <iostream>

using namespace std;

int main() {
    
    //VARIABLES USED TO STORE NUMBER OR VALUES

    /*string characterName = "Hermas";
    int characterAge;
    characterAge = 30;

    cout << "Hello, world!" << characterName << characterAge << endl;*/ 


    //DATA TYPE

    /*char grade = 'A';


    cout  << grade  << endl;*/

    //WORKING WITH STRING

    /*string phrase = "Hermas le pro";
    cout << phrase.length() ;

    string phrase = "Hermas le pro";
    phrase[0] = 'B';
    cout << phrase ;*/

    //WORKING WITH NUMBERS

    /*int age;
    cout << "ENTER YOUR AGE : ";

    cin >> age ; 
    cout << "YOU ARE " << age << " YEARS OLD";*/

    //BUILDING A CALCULATOR 

    /*int num1, num2;
    cout << "ENTER A FIRST NUMBER : ";
    cin >> num1;

    cout << "ENTER A SECOND NUMBER : ";
    cin >> num2;

    cout << num1 + num2 ;*/

    //BUILDING A MAD LIB GAME 

    /*string color, pluralNoun, celebrity;

    cout <<"Enter a color";
    getline(cin, color);

    cout <<"Enter a plural noun";
    getline(cin, pluralNoun);

    cout <<"Enter a celebrity";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun <<  " are blue" << endl;
    cout << "I love " << celebrity << endl;*/

    //ARRAYS

    /*int luckyNumber [] = {1,15,20,85,63};

    luckyNumber [0] =20;

    cout << luckyNumber [0];*/

    //IF STATEMENTS

    /*bool isMale = true;
    bool isTall = true;

    if (isMale &&  isTall){
        cout << "You are a tall male";
    }else if (isMale && !isTall)
    {
        cout << "You are a short male";
    }else if (!isMale && isTall)
    {
      cout << "You are a tall female";
    }else{
        cout << "You are a female";
    }*/


    //BUILDING A BETTER CALCULATOR 

    /*int num1, num2;
    char op;

    cout << "ENTER A FIRST NUMBER : ";
    cin >> num1;
    cout << "ENTER AN OPERATOR : ";
    cin >> op;
    cout << "ENTER A SECOND NUMBER : ";
    cin >> num2;

    int result;

    if (op == '+'){
        result = num1 + num2;
    }else if (op == '-'){
        result = num1 - num2;
    }else if (op == '*'){
        result = num1 * num2;
    }else if (op == '/'){
       result = num1 / num2;
    }else{
        cout << "INVALID OPERATOR";
    }
    cout << result;*/

    //WHILE LOOP

    /*int index =1;
    while (index <= 5)
    {
        cout << index << endl;
        index ++ ;
        
    }*/

   // BUILDING A GUESSING GAME

   /*int secretNumber =11;
   int guesse; 
   int guesseCount =0;
   int guesseLimit =5;
   int outOfguesse =false;

   while (secretNumber != guesse && ! outOfguesse){
    if (guesseCount < guesseLimit){
        cout << "Enter a guesse: " ;
        cin >> guesse;
        guesseCount++;
        if (secretNumber != guesse){
            cout << "Do you thing this could be my secrutenumber fool " << endl;
        }
    }else{
        outOfguesse = true;
    }

     
   }

   if (outOfguesse){
        cout << "You lose" << endl;
    }else{
        cout << "You win" << endl;
    }*/
   
   
    //FOR LOOP

    /*for (int i =1; i <= 5;  i++){
        cout << i << endl;
    }*/

   /*int i=32;
   while (i<30){
    i++;
    cout <<i<<endl;
   }{
    cout <<"End of the loop";
   }*/

   /*int  i=32;
    do{
        cout << i<< endl;
        i=i+1;
    } while (i<30);
    cout <<"This is the end of the loop";*/

    /*int userNumber=42;
    int number;

do{
    cout <<"Enter a number: ";
        number ++;
        cin>>number;
        if (userNumber !=number){
            cout<<"Try Again"<<endl;
        }else{
            cout<<"Good Job";
            


                
    }
} while (userNumber !=number);*/


    /*int totalSecrets = 10;      
    int secretNumber = 5;       
    int maxAttempts = 5;        
    int guessedSecrets = 0;     

    while (guessedSecrets < totalSecrets) {
        int attempts = 0;       
        bool guessedCorrectly = false;

        while (attempts < maxAttempts) {
            int guess;
            cout << "Enter your guess for secret number " << guessedSecrets + 1 << ": ";
            cin >> guess;
            attempts++;

            if (guess == secretNumber) {
                cout << "Good job! You've guessed the secret number.\n";
                guessedCorrectly = true;
                guessedSecrets++; 
                break;            
            } else {
                cout << "Fail! Attempts remaining: " << maxAttempts - attempts << endl;
            }
        }

        if (!guessedCorrectly) {
            cout << "You lose! You failed to guess the secret number in 5 attempts.\n";
            break;  
        }

        if (guessedSecrets < totalSecrets) {
            cout << "Look for another secret number!\n";
        }
    }

    if (guessedSecrets == totalSecrets) {
        cout << "Congratulations! You've successfully guessed all " << totalSecrets << " secret numbers.\n";
    }*/

   /*int secret = 42;
   int userInput = 0;
   int numberofRetty = 3;

   for (int i = 1; i < numberofRetty; i++){
    cout << "Let's start the round"<< endl;

    while (userInput != secret){
        cout <<"Enter the secret number"<<endl;
        cin>>userInput;
        if(userInput == secret){
            cout<<"Good luck"<<endl;
        }
    }
    userInput= 0;
   }
   cout <<"Game Over!";*/

   






   

    



 return 0;
}

