#include <iostream>

class Person{
    protected:
    double height, weight;
    public:
    Person(double weight,double height){
        this->height = height;
        this->weight = weight;
    };
    void set_values(){
        std::cin >> weight >> height;
    }
    double index(){
        double BMI = weight/(height*height);
        return BMI;
    }
    friend double maxweight(Person *p, int maxBMI);

};

double maxweight(Person *p, int maxBMI) {
    double BMI = p->index();
    double height = p->height;
    double maxweight = maxBMI * height * height;
    return maxweight;
};

class Male : public Person{
    public:
    Male(double weight, double height) : Person(weight, height){}
    void isOverweight(){
        if(maxweight(this, 25) < weight){
            std::cout << "Male is overweighted by "<< weight-maxweight(this, 25) << std::endl;
    }
    }
};

class Female : public Person{
    public:
    Female(double weight, double height) : Person(weight, height){}
    void isOverweight(){
        if(maxweight(this, 27) < weight){
            std::cout << "Female is overweighted by "<< weight-maxweight(this, 27) << std::endl;
    }
    }
};

int main() {
    Male m(70,1.8);
    Female f(60,1.65);
    std::cout << m.index() << std::endl;
    std::cout << f.index() << std::endl;
    m.set_values();
    f.set_values();
    m.isOverweight();
    f.isOverweight();
    return 0;
}