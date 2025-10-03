#include <iostream>

int main()
{
    std::string question[] = {"1. what year was c++ created?: ",
                              "2. who invented C++?: ",
                              "3. what is predecessor of C++? ", "4. Is Earth flat "};
    std::string options[][4] = {{"A. 1969", "B 1975", "C 1985", "D 1989"},
                                {"A. Guido van Rossum", "B Bjarne Stroustrup", "C Jhon Carmak ", "D Mark Zukerberg"},
                                {"A. C", "B C+", "C C--", "D B++"},
                                {"A. Yes", "B No", "C sometimes ", "D what's Earth"}};

    char answerkeys[] = {'C', 'B', 'A', 'B'};
    int size = sizeof(question) / sizeof(question[0]);
    char guess;
    int score = 0;
    for (int i = 0; i < size; i++)
    {
        std::cout << "******************************\n";
        std::cout << question[i] << '\n';
        std::cout << "******************************\n";

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if ( guess == answerkeys[i]){
            std::cout << "CORRECT\n" ;
            score++;

        }
        else{
            std::cout << "WRONG\n";
            std::cout << "Answer: "<< answerkeys[i]<< "\n";
        }
    }
    
            std::cout <<"******************************\n";
            std::cout <<"          RESULTS            *\n";
            std::cout <<"******************************\n";
            std::cout <<"CORRET GUESSES: "<<score<< '\n';
            std::cout <<" Number of Question:" << size <<'\n';
            std::cout <<"SCORE " << (score/ (double)size)*100 << "%";

    return 0;
}