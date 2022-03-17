#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len�� �迭 lottos�� �����Դϴ�.
// win_nums_len�� �迭 win_nums�� �����Դϴ�.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(sizeof(int));

    int count = 0;
    int pos = 0;


    for (int i = 0; i < lottos_len; i++) {
        for (int j = 0; j < win_nums_len; j++) {
            if (lottos[i] == 0) {
                pos++;
                break;
            }
            else if (lottos[i] == win_nums[j]) {
                count++;
                break;
            }
        }
    }
    if (pos == 0 && count == 0) {
        answer[0] = 6;
    }
    else {
        answer[0] = 7 - (pos + count);
    }
    if (count == 0) {
        answer[1] = 6;
    }
    else {
        answer[1] = 7 - count;
    }

    return answer;
}