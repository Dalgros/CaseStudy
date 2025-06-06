#include <time.h>
#define MAX_PROCESSING_TIME_MS 200

void process_frame();

void process_frame_with_timing() {
    clock_t start = clock();
    process_frame();
    clock_t end = clock();
    double elapsed_ms = (double)(end - start) * 1000 / CLOCKS_PER_SEC;

    if (elapsed_ms > MAX_PROCESSING_TIME_MS) {
        printf("Warning: Processing time exceeded (%.2f ms)\n", elapsed_ms);
    }
}
