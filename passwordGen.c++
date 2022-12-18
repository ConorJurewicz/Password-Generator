#include <iostream>
#include <unistd.h>
#include <string>
#include <ctime>

using namespace std;


int main(){
    int length;
    string empty;
    string chars = "1234567890!@#$%^&*()+=-_|[]{};:',<.>?QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm";
    int charsLength = sizeof(chars);

    srand(time(0));

    cout << "How long would you like your password to be? Minimum of 8 characters.\n";
    cin >> length;
    while(length<8){
        cout << "You entered a length of " << length << " which is under 8. Try again.\n";
        cin >> length;
    }
    cout << "Here is your password of " << length << " characters.\n";
    sleep(2);

    for(int i = 0; i<length; i++){
        cout << chars[rand() % charsLength];
    }
    return 0;
}