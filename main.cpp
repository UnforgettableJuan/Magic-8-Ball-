#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

int main() {
    int shake = 1;
    string pos1 = "It is certain.";
    string pos2 = "It is decidedly so.";
    string pos3 = "Without a doubt!";
    string pos4 = "YES definitely!";
    string pos5 = "You may rely on it.";
    string pos6 = "As I see it, yes!";
    string pos7 = "Most Likely.";
    string pos8 = "Outlook good!";
    string pos9 = "YES!";
    string pos10 = "Sign points to YES!";
    string non1 = "Reply hazy, try again..";
    string non2 = "Ask again later..";
    string non3 = "Better not tell you now...";
    string non4 = "Cannot predict now..";
    string non5 = "Concentrate and ask again.";
    string neg1 = "Don't count on it.";
    string neg2 = "My reply is NO.";
    string neg3 = "My sources say NO.";
    string neg4 = "Outlook not so good...";
    string neg5 = "Very doubtful...";

    string MagicBall[20] = {pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9, pos10,non1, non2, non3, non4, non5, neg1, neg2, neg3, neg4, neg5};
    cout << "Made by Juan A. Rodriguez \n" << endl;

    cout << "Welcome to the Magic 8 Ball ask me a yes or no question... Please type 1 to shake me or -1 to EXIT.\n" << endl;

    cin >> shake;

    while (shake != -1) {
        cout << "Would you like ask another question? The Magic 8 ball is waiting...type 1 to continue or type -1 to EXIT.";
        cin >> shake;
        cout << MagicBall[rand() %19] << endl;
    }
}
