#include <iostream>

// function to determine if the student passed the course
void passFailCalc(int a,int b,int c){

    // average of midterm > 30
    if (((double)a + (double)b) / 2 < 30) {
        std::cout << "You failed the course." << std::endl;
    }
    // total point > 40
    else if (((double)a + (double)b + (double)c)/3 < 40) {
        std::cout << "You failed the course." << std::endl;
    }
    else{
        std::cout<<"You passed."<<std::endl;
    }
    std::cout<<((double)a + (double)b + (double)c)/3;
};

int main(){
    int first_midterm, second_midterm, final_exam;
    // ask for three input
    std::cout << "Enter the first midterm grade: ";
    std::cin >> first_midterm;
    std::cout << "Enter the second midterm grade: ";
    std::cin >> second_midterm;
    std::cout << "Enter the final exam grade: ";
    std::cin >> final_exam;
    passFailCalc(first_midterm, second_midterm, final_exam);
    return 0;
}