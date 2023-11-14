#include<iostream>
using namespace std;


void gameLogic(string words[], string shuffle[], int score, int level, string userOption){
    int i = 0;
    while(i < 5){
        cout<<"\n\n/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*\n\n"<<endl;
        cout<<"\t Level "<<level<<"\t"<<endl;
        cout<<"\n\n/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*\n\n"<<endl;
        cout<<"Lives: "<<score<<endl;
        cout<<"Your word is: "<<shuffle[i]<<endl;
        cout<<"Enter your guess: ";
        cin>>userOption;
        if(userOption == words[i]){
            level++;
            i++;
            cout<<"Hurray, you got it right\n"<<endl;
        }else{
            if(score < 1){
                cout<<"You are a failure"<<endl;
                break;
            }else{
                score--;
                cout<<"Please try again.\n"<<endl;
            }
            
            
        }
    }
    
}

void introduction(string name, string userOption, string words[], string wordsArray[], int score, int level){
    cout<<"\nHello, welcome to this guess the word game.\nI am the AI system, can I get your name please?"<<endl;
    cout<<"\nEnter your name: ";
    cin>>name;
    cout<<"\nNice to meet you "<<name<<" Are you ready to get started?"<<endl;
    cout<<"\nEnter [Y] for Yes and [N] for No: ";
    cin>>userOption;

    if(userOption == "Y"){
      cout<<"\n\nPerfect, the rules of this game are really simple, I will give you a word, and you have to get it right in (5) Five tries"<<endl;
      cout<<"\nIf you get the word right, you move on to the next level, if you get it wrong and exhaust you tries, you lose the game"<<endl;
      cout<<"\nYou can not reset the try counter"<<endl;
      cout<<"\nAre you ready to play?"<<endl;
      cout<<"\nEnter [Y] for Yes and [N] for No: ";
      cin>>userOption;
      if(userOption == "Y"){
        cout<<"Let the games begin ð¯ð¥³"<<endl;
        gameLogic(words, wordsArray, score, level, userOption);
      }else if(userOption == "N"){
        cout<<"\nOops, see you later ðð¥¹"<<endl;
      }else{
        cout<<"\nYeah, I did not get that, bye."<<endl;
        
      }
    }else if(userOption == "N"){
      cout<<"\nAlright "<< name <<" I hope to see you again soon, bye.ð"<<endl;
    }else{
      cout<<"\nSorry I did not recognise the command you gave me, bye."<<endl;
    }

}

int main(){
    int score = 5;
    int level = 1;
    string shuffleArray[5] = {"ELLOH", "TAC", "PPYAH", "READPS", "SLLAM"};
    string wordsArray[5] = {"HELLO", "CAT", "HAPPY", "SPREAD", "SMALL"};
    string name, userOption;

    introduction(name, userOption, wordsArray, shuffleArray, score, level);
    
    return 0;
}
