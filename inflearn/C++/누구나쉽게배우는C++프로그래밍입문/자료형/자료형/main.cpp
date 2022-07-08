#include <iostream>
#include <climits>
using namespace std;

int main() {
	//정수형 : 소수부가 없는 수
	// 음의 정수, 0, 양의 정수
	// short, int, long, long long
	// -> 모두 정수를 표현하지만 표현할 수 있는 크기가 다르다

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;

	cout << "short는 " << sizeof n_short << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;
	
	cout << "long은 " << sizeof n_long << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;

	cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;

	unsigned short c = -1;
	cout << "c의 값은 " << c << "입니다." << endl;


	//char : 작은 문자형
	int a = 77;
	char b = a;
	//char b = 77; 이렇게 해도 M이 출력됨
	cout << b << endl;
	
	b = 'a';
	cout << b << endl;

	//작은 문자열 > 작은 따옴표('')
	//큰 문자열 > 큰 따옴표("")
	// * C++에서 큰 문자열은 char형에 사용불가
	//  -> 왜냐하면 null문자 때문
	/*
	    결국 문자는 정수로 저장됨 
		C++은 문자들을 출력할 때 어디까지가
		문자인거지라고 확인할 필요가 있음
		문자하나일 경우 상관없지만 문자열을
		출력하고자 할 경우는 어디까지가 문자인지
		알려주고자 하는 null 문자가 있어야됨
		null 문자 : '\0'
	*/

	char f[] = { 'a', 'b', 'c' };
	cout << f << endl;
	// 이상태로 f를 출력하면 a와 b, c 이외에도
	//이상한 문자가 계쏙 출력됨
	// 이유는 null 문자를 만나야 문자열이 끝났구나
	//하고 알 수 있는데 null문자를 삽입하지 않았기 떄문에
	// 만날 떄까지 의미없는 문자 계속 출력
	// 큰따옴표는 명시적으로 null 문자가 포함되어 있음
	// {'a', 'b', 'c', '\0'};
	// 이것을 위한 자료형 변수가 바로 string 문자임

	// 아무튼 char형 변수에는 한가지의 문자만 저장할 수 있는데
	//""큰따옴표는 /0 null문자가 포함되니까 두가지 문자가 저장되는 꼴이니
	// 사용할 수 없는 거임

	//한글 표현하고 싶으면 유니코드 문자체계 사용해야됨
	
	
	//bool : 0 혹은 1만 나타낼 수 있음
	// 0은 false 1은 true
	// bool type은 숫자를 0혹은 1로만 저장한다
	// 그래서 0 이외에 모든 수는 1로 저장된다.
	
	bool g = 0;
	bool h = 1;
	bool i = 10;

	cout << g << " " << h << " " << i << endl;
	
	
	//const 제한자와 데이터형 변환

		//원의 넓이를 구하는 프로그램
		//반지름 * 반지름 * 파이
		
	int r = 3;
	float s = r * r * 3.1415926535;
	//1. 바뀔 필요가 없는 수
	//2. 바뀌어서는 안되는 수
	// -> 상수
	// C++에서의 상수 선언 방법
	// : const + 자료형 + 상수의 이름 = 값;
	const float PIE = 3.1415926535;
	// 만약 선언한 상수 PIE의 값을 중간에 바꾸면 에러남
	int r2 = 3;
	float s2 = r2 * r2 * 3.14;
	cout << s << endl;


	// 데이터형 변환
	/*
	1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
	2. 수식에 데이터형을 혼합하여 사용했을 때
	3. 함수에 매개변수를 전달할 때
	*/
	// 지금은 1번만 먼저 알아보면

	int A = 3.141592;
	cout << A << endl;

	//강제적으로 데이터형 변환
	// typeName(a) (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;

	//C++에서 조금 더 제한적인 연산자 등장
	//static_cast<typeName>
	// 이것과 위에 방법의 차이는 friend임
	return 0;

}
