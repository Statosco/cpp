#include <iostream>

int main(){

    std::string quiz[] = {"1. what year was c++ created? --->> ",
                          "2. who invented c++? --->> ",
                          "3. what is the predecessor of c++ --->> ",
                          "4. is cpp French --->> "};
        

    std::string option[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guiado van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                                {"A. C", "B. C+", "C. C--", "D. Java"},
                                {"A. A. Oui! Cpp est francais","B. No! cpp is not french", "C. Depends on who you ask", "D. i dont know"}};
    char answerKey[] ={'C', 'B', 'A', 'B'};

    int size = sizeof(quiz)/sizeof(std::string);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << "#########################\n";
        std::cout << quiz[i]<<'\n';
        std::cout << "########################\n";

        for(int j = 0; j < sizeof(option[i])/sizeof(option[1][0]); j++){
            std::cout << option[i][j]<<'\n';
        }
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "CORRECT\n";
            score++;
        }
        else{
            std::cout << "WRONG\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
    }
    std::cout << "                RESULTS                \n";
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout <<"# of QUESTIONS: " << size << '\n';
    std::cout << "SCORE: " << (score/(double)size) * 100 << '%';

}