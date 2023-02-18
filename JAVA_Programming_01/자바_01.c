// 자바 기초

/*
public class Hello // 클래스 정의
{
	public static void main(String[] args) // 메소드 정의
	{
		System.out.println("hello!");
	}
}
*/

// 소스 안에 public 클래스가 있다면 반드시 소스 파일 이름은 public 클래스 이름과 일치해야함
// 하나의 소스 파일 안에 public 클래스가 2개 이상 있으면 컴파일 오류 발생
// 하나의 클래스 안에는 여러 개의 메소드 포함 가능
// 하나의 메소드 안에는 여러 개의 문장 포함 가능
// main() 메소드를 가지고 있는 클래스가 반드시 하나는 있어야 함

// 변수 이름 관례
// 클래스명 : 각 단어의 첫글자는 대문자 (예시 : StaffMember)
// 변수명, 메소드명 : 첫번째 단어는 소문자로 시작되어 2번째 단어부터 첫글자는 대문자로 함 (예시 : acctNumber)
// 상수 : 모든 글자를 대문자로 함 (예시 : MAX_NUMBER)

// 상수 만드는 방법
// final 사용 (예시 : final double KM_PER_MILE=1.609344;

// 예제 코드 : 2차 방정식의 근을 계산
/*
public class QuadraticEq
{
	public static void main(String[] args)
	{
		double b = -3.0;
		double c = 2.0;

		double disc = b * b - 4.0 * c;
		double sqr = Math.sqrt(disc);

		double r1 = (-b + sqr) / 2.0;
		double r2 = (-b - sqr) / 2.0;

		System.out.println("근 : " + r1);
		System.out.println("근 : " + r2);
	}
}
*/

// 예제 코드 : 문자열 프로그램
/*
public class StringTest
{
	public static void main(String[] args)
	{
	    String s1 = "Hello World!";
		String s2 = "I'm a new Java programmer!";

		System.out.println(s1 + "\n" + s2); // + 연산자로 문자열 합칠 수 있음
	}
}
*/

// 값 입력받기
// import java.util; // Scanner 클래스 포함
// Scanner input = new Scanner(System.in);
// System.out.print("문장 입력 : ");
// String line = input.nextLine(); (nextInt, nextDouble 형태도 있음)

