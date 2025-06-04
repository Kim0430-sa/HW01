#include <iostream> 
using namespace std;

// 배열의 합계를 계산하는 함수
// 매개변수: int arr[] - 정수 배열, int size - 배열의 크기
// 반환값: 배열 요소들의 총합 (int형)
int calculateSum(int arr[], int size) {
    int sum = 0;  // 합계를 저장할 변수 초기화
    for (int i = 0; i < size; i++) {
        sum += arr[i];  // 배열의 각 요소를 더함
    }
    return sum;  // 최종 합계 반환
}

// 배열의 평균을 계산하는 함수
// 매개변수: int arr[] - 정수 배열, int size - 배열의 크기
// 반환값: 배열 요소들의 평균 (double형)
double calculateAverage(int arr[], int size) {
    int sum = calculateSum(arr, size);  // 먼저 합계를 구함 (위에서 만든 함수 사용)
    return static_cast<double>(sum) / size;  // 합계를 double형으로 변환 후 평균 계산
}

int main() {
    const int SIZE = 5;  // 고정된 입력 수 (5개)
    int numbers[SIZE];   // 사용자가 입력할 숫자를 저장할 배열

    // 사용자에게 숫자 입력 요청
    cout << "5개의 숫자를 입력하세요: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];  // 사용자로부터 숫자 입력 받아 배열에 저장
    }

    // 합계와 평균 계산
    int sum = calculateSum(numbers, SIZE);           // 합계 함수 호출
    double average = calculateAverage(numbers, SIZE); // 평균 함수 호출

    // 결과 출력
    cout << "합계: " << sum << endl;
    cout << "평균: " << average << endl;

    return 0;  // 프로그램 종료
}
