#define REQUIRED_ACCURACY 0.95

float get_classification_accuracy();
void classify_signs();

void validate_accuracy() {
    float accuracy = get_classification_accuracy();
    if (accuracy >= REQUIRED_ACCURACY) {
        classify_signs();
    } else {
        printf("Error: Accuracy too low (%.2f%%)\n", accuracy * 100);
    }
}
