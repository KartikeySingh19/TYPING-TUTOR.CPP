#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    srand(time(NULL));
    cout<<"WELCOME TO KARTIK'S TYPING CLASS"<<endl;
    cout<<".........."<<endl<<endl;

    cout<<"ENTER THE GIVEN SENTENCE: "<<endl<<endl;

    string sentences[]={"The quick brown fox jumps over the lazy  dog.","Programming is fun and challenging.","Practice makes perfect.","coding improves problem-solving skills."};
    int total = sizeof(sentences) / sizeof(sentences[0]);
    int random = rand() % total;
    string sentence = sentences[random];
    cout<<sentence<<endl;

    time_t start = time(NULL);
    string input;
    getline(cin, input);

    time_t end = time(NULL);
    double timeused = difftime(end,start);

    int words =1;
    for(int i = 0; i<input.length(); i++){
        if(input[i] == ' '){
            words++;
        }

    }
    double wpm = (words/timeused) * 60;
    cout<<" Time elapsed = "<< timeused << "seconds" << endl;

    cout<<"Your speed: "<<wpm<<"WPM"<<endl;
}