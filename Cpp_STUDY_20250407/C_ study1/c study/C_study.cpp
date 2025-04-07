// 극좌표계를 직교좌표계로 변환하는 프로 그램


#include<stdio.h>
#include<math.h>


int main(void) {
	 //0 변수선언
	double x = 0.0;
	double y = 0.0;
	double r = 0.0;
	double angle_radian = 0.0;
	double angle_degree = 0.0;
	// 1 x좌표 입력
	printf("x축의 좌표를 입력 하세요");
	scanf_s("%lf", &x);
	// 2 y 좌표 입력
	printf("y축의 좌표를 입력 하세요");
	scanf_s("%lf", &y);
	
	// 3 r 값 계산
	r = sqrt(x * x * y * y);
	
	// 4 각도 값 계산
	angle_radian = atan2(y, x);
	
	// 5 각도값을 radian으로 계산
	angle_degree = angle_radian * 180.0 / 3.14159;
	
	// 6 결과 값 출력
	printf("입력좌표 (x,y): [%6.2lf, %6.2lf]\n", x, y);
	printf("극좌표 r = %6.2lf\n", r);
	printf("극좌표 각도 = %6.2lf도\n", angle_degree);
	return 0;
}