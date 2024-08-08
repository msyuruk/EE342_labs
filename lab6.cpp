#include <iostream>
using namespace std;

struct students {
    string name;
    double midterm1;
    double midterm2;
    double final;
    double average;
};

int main(){
    int n;
    cin >> n;
    students *s = new students[n];

    for (int i = 0; i < n; i++){
        cin >> s[i].name >> s[i].midterm1 >> s[i].midterm2 >> s[i].final;
        s[i].average = s[i].midterm1 * 0.3 + s[i].midterm2 * 0.3 + s[i].final * 0.4;
    }

    double max = s[0].average;
    int index = 0;
    for (int i = 1; i < n; i++){
        if (s[i].average > max){
            max = s[i].average;
            index = i;
        }
    }

    cout << "The student with the highest average is: ";
    std::cout << s[index].name << " " << s[index].average << std::endl;
    return 0;
}