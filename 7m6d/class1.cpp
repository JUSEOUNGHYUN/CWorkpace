#include <iostream>

using namespace std;

class Cat{

    public: // 외부에서 이 클래스 안에 정보에 접근 가능
        unsigned int Age;   // 멤버 변수 == 변수
        unsigned int Weight; // 메소드 == 함수

        void play();
};

void Cat::play(){   // Cat은 클래스 | play는 Cat의 메소드
    cout<<"dfas\n";
}

int main() {

    Cat nyang2;

    nyang2.Age = 5;     // .(도트) 연산자를 이용해 클래스의 멤버변수, 함수에 접근 가능
    nyang2.Weight = 7;

    cout<<nyang2.Age<<" "<<nyang2.Weight<<"\n";
    nyang2.play();

    return 0;
}

/*
private공간에 있는 name 속성은 직접 접근하면 오류남
그래서 public영역에서 값에 접근하기 위한 메소드를 구
값을 설정하는 것 = setter
가져 오는 것 = getter

private:
    string name;

public:
    int age;
    void setName(string name){  //setter
        this->name = name;
    }

    void printName(){           //getter
        cout<<this->name;
    }

int main() {
    james.setName("JAMES");
    james.printName();  
    == // james.name = "james"; // private
}

- 클래스 선언부 | 클래스 구현부 | 클래스 메인부
        처음            중간            마지막

*/
