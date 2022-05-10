// 단어 입력 받는다 ( 최대 50문자 알파벳 대문자만)
// 단어를 좌우대칭으로 바꾼다.
// 몇개 가능할시 사전순 나열
// 불가능 할시 I'm Sorry HanSoo


// 단어 입력 받는다. -> 알파벳 갯수 세는 배열추가
// 입력받은단어 저장 + 알바펫 갯수 세기
// 홀수가 2개 이상일시 X
// 홀수가 1개이고 배열의 길이가 짝수X

// 홀수개인 알파벳 부터 중앙배치
// 앞에서부터 사전순 나열 0 , n-1 / 1, n-2 번째

//혹은 반만 만들고 이어붙이기? 봐서




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>
#include<stdbool.h>






int main() {

    char c[51];
    int alpha[26] = { 0 };
    scanf("%s", c);


    int lenStr = strlen(c);

    for (int i = 0; i < lenStr; i++) {
        alpha[c[i] - 'A']++;
    }

    //홀수 일때 가운데를 고려
    int count = 0;
    char mid = NULL;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] % 2 != 0) {
            mid = i + 'A';
            count++;
            alpha[i]--;

        }
    }

    if (count == 0) {
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < alpha[i] / 2; j++) {
                printf("%c", i + 'A');
            }
        }

        for (int i = 25; i >= 0; i--) {
            for (int j = 0; j < alpha[i] / 2; j++) {
                printf("%c", i + 'A');
            }
        }
    }
    else if (count == 1) {
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < alpha[i] / 2; j++) {
                printf("%c", i + 'A');
            }
        }
        printf("%c", mid);

        for (int i = 25; i >= 0; i--) {
            for (int j = 0; j < alpha[i] / 2; j++) {
                printf("%c", i + 'A');
            }
        }

    }
    else {
        printf("I'm Sorry Hansoo");
    }


}

