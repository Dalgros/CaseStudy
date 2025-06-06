bool is_image_quality_low(const Image* img);
void send_quality_warning();

void monitor_image_quality(const Image* img) {
    if (is_image_quality_low(img)) {
        send_quality_warning();
    }
}
