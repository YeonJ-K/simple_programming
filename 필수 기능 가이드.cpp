#include <iostream>

using namespace std;

int score_sum(int score[], size_t size){
    int sum=0;
    for (int i=0; i<size; i++){
        sum += score[i];
    }
    return sum;
}

double score_avg(int score[], size_t size){
    double avg=0;
    for (int i=0; i<size; i++){
        avg += score[i];
    }
    return avg/size;
}

int main() {
    int score[5];
    cout << "첫 번째 학생 점수 입력 : ";
    cin >> score[0];
    cout << "두 번째 학생 점수 입력 : ";
    cin >> score[1];
    cout << "세 번째 학생 점수 입력 : ";
    cin >> score[2];
    cout << "네 번째 학생 점수 입력 : ";
    cin >> score[3];
    cout << "다섯 번째 학생 점수 입력 : ";
    cin >> score[4];


    cout << "합계: " << score_sum(score, 5) << endl;
    cout << "평균: " << score_avg(score, 5) << endl;

    return 0;
}
