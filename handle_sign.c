bool is_standard_sign(const Image* img);
void ignore_sign(const Image* img);

void handle_sign(const Image* img) {
    if (!is_standard_sign(img)) {
        ignore_sign(img);
        return;
    }
    // Continue with standard sign processing
}
