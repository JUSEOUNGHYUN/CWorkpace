#include <iostream>

using namespace std;

class Test{
    private:
        int m_sum;

    public:
        void Init(int a_sum){
            m_sum = a_sum;
        }
};

int main() {

    Test temp;
    temp.Init(65);

    return 0;
}