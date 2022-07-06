/*fgets 함수

char *fgets(char *str, int numChars, FILE *stream);

첫 번째 매개 변수(str) : 파일에서 읽은 문자열을 저장할 메모리의 주소를 넘긴다.
두 번째 매개 변수(numChar) 저장할 문자의 최대 개수

- char* -> string
char* ch = "hello";
string str(ch);

- string -> char*
string str = "hello";
const char* ch = str.c_str();
c.str()을 이용하면 const char*로 받아야 하기 때문에 수정 불가능

-- char* --
-문자열 나타냄
- 글자 여러개가 계속 이어진 값을 가질 수 있음
- 문자의 포인터 변수는 문자열을 담기 위해 사용
char* p = "abcd";
cout<<p[0] -> error
cout<<p -> abcd
cout<<p+1 -> bcd

-- char[] --
- 포인터 변수가 아닌 배열을 통해 나타냄
- 주소값에 대해서 접근하는 것이 아니기 때문에 char*와 큰 차이점은 문자열 하나하나 수정 가능
char p[5] = "abcd";
cout<<p -> abcd
p[2]='z' => abzd

-- 스트림 --
c++ 프로그램은 파일이나 콘솔의 입출력을 다루지 않고, 스트림(stream)이라는 흐름을 통해 다룬다.
- 실제의 입력이나 출력이 표현된 데이터의 이상화된 흐름
- 운영체제에 의해 생성되는 가상의 연결 고리, 중간 매개자 역할

-- 버퍼(buffer) --
- 스트림은 내부에 버퍼(buffer)라는 임시 메모리 공간을 가지고 있다.
- 문자를 하나씩 전달하는게 아니라 묶어서 한번에 전달
- 사용자가 문자를 잘못 입력했을 경우 수정 가능

-- 연결 리스트(list) --
배열의 각 요소가 값만 갖고있는 것이 아니라 다음 요소를 가리키는 포인터를 함께 가지고 있다.
배열의 요소들을 직접 미는 것이 아닌 포인터값만 변경해주는 것
임의의 위치에 추가/삭제 연산 가능

<functional> == iterator 헤더파일

c언어 char ch[100]
"%[^\n]s" // 공백까지 포함하여 문자열 입력받기

c++
system("pause") // 계속하려면 아무 키나 누르십시오. 출력
// 디버깅하지 않고 시작을 해도 바로 종료 되는 경우를 위한 소스코드

int main(int argc, char* argv[])
- int argc // main() 함수에 전달되는 데이터의 개수
- char* argv[] // main() 함수에 전달되는 실제적인 데이터로 char형 포인터 배열로 구성

-- 함수 선언 --
- return type + identifier + argument + operation
ex) int Func(int a) {return a;}
* return type // 함수가 끝났을 때 돌려주는 data 의 type
* identifier // 함수의 이름
*/