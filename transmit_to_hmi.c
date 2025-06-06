#include <time.h>
#define MAX_HMI_DELAY_MS 100

void send_to_hmi(const Sign* sign);

void transmit_to_hmi(const Sign* sign) {
    clock_t start = clock();
    send_to_hmi(sign);
    clock_t end = clock();
    double elapsed_ms = (double)(end - start) * 1000 / CLOCKS_PER_SEC;

    if (elapsed_ms >= MAX_HMI_DELAY_MS) {
        printf("Warning: HMI transmission delay %.2f ms\n", elapsed_ms);
    }
}
