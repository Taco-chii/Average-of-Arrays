#include <iostream>
using namespace std;

int main(){
    //	٩(◕‿◕｡)۶ This are the variables to be used in the program
    int num[20], counter, a=1;
    float ave=0;

    // The program asks you to put in a number on the range of 1-20
    cout << "Enter the numbers of data: ";
    cin >> counter;

    //this program can work one round if the number is in the correct range
    do{
        // this section will run if the number that you put in counter variable is below or equal to 20
        if(counter <=20){
            for(int i = 0; i < counter; ++i){
                //the loop will repeat depending on the number that you choose to input
                cout << a++ << ". Enter Number: ";
                cin >> num[i];
                ave+=num[i];
            }
            cout << "\nAverage = " << ave/counter << "\n";
            return 0;
        }
        // this will only appear when the counter number is above 20
        else{
            cout << "Error! Number should range of (1 to 20)." << endl;
            cout << "Enter the number again: ";
            cin >> counter;
            if(counter <=20){
                for(int i = 0; i < counter; ++i){
                    cout << a++ << ". Enter Number: ";
                    cin >> num[i];
                    ave+=num[i];
                }
                cout << "\nAverage = " << ave/counter << "\n";
                return 0;
            }
        }
    // if the number isn't bellow or equal to 20, the loop will continue
    }while(counter > 20 );


}

/*	٩(◕‿◕｡)۶ oh hello there, welcome to my code (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧

    This code is made by

    Roanne Zoe M. Cayanan

    please do not steal my code (´｡• ᵕ •｡`) ♡

    Thank you	♡ ～('▽^人)
*/
